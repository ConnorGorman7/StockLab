#include <QApplication>
#include <QChartView>
#include <QLineSeries>
#include <QValueAxis>
#include <QDateTimeAxis>
#include <QFile>
#include <QJsonDocument>
#include <QJsonObject>
#include <QDebug>
#include <QMainWindow>
#include <QMap>
#include <QPen>
#include <QPushButton>
#include <QWidget>
#include <QLabel>
#include <QString>
#include <limits>

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);

    // Create a chart
    QChart *chart = new QChart();

    // Create a series to hold the data
    QLineSeries *series = new QLineSeries();
    series->setName("AMZN Close Price");

    // Open the AMZNdata.txt file
    QFile file("AMZNdata.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "Failed to open file: " << file.errorString();
        return -1;
    }

    QByteArray data = file.readAll(); // Read the file content
    QJsonDocument doc = QJsonDocument::fromJson(data);

    if (doc.isNull() || !doc.isObject()) {
        qDebug() << "Failed to parse JSON";
        return -1;
    }

    QJsonObject jsonObject = doc.object();
    QJsonObject timeSeries = jsonObject["Time Series (Daily)"].toObject();

    // Use QMap to sort dates
    QMap<QDateTime, float> sortedData;

    // Parse the JSON and populate sortedData
    for (auto it = timeSeries.begin(); it != timeSeries.end(); ++it) {
        QString dateString = it.key();
        QDateTime date = QDateTime::fromString(dateString, "yyyy-MM-dd");

        QJsonObject dayData = it.value().toObject();
        float closePrice = dayData["4. close"].toString().toFloat();

        sortedData.insert(date, closePrice);
    }

    // Store the beginning of the 30-day window (first date of the data)
    QDateTime currentStartDate = sortedData.firstKey();

    // Get the last available date in the dataset
    QDateTime lastDate = sortedData.lastKey();

    // Create axes for the chart (done once)
    QDateTimeAxis *axisX = new QDateTimeAxis();
    axisX->setFormat("MMM dd, yyyy");
    axisX->setTitleText("Date");
    axisX->setGridLineVisible(true); // Show grid

    QValueAxis *axisY = new QValueAxis();
    axisY->setTitleText("Price (USD)");
    axisY->setGridLineVisible(true); // Show grid

    // Function to update the graph
    auto updateGraph = [&]() {
        // Clear previous data in the series
        series->clear();

        // Variables to track min and max values for the Y-axis
        float minY = std::numeric_limits<float>::max();
        float maxY = std::numeric_limits<float>::lowest();

        // Add data for the next 30 days
        int count = 0;
        QDateTime windowEnd = currentStartDate.addDays(30);  // End of the current 30-day window

        // Check that the window doesn't exceed the last available date
        if (windowEnd > lastDate) {
            windowEnd = lastDate;
        }

        // Iterate through data for the next 30 days, up until the window end
        for (auto it = sortedData.lowerBound(currentStartDate); it != sortedData.end() && it.key() <= windowEnd && count < 30; ++it, ++count) {
            float price = it.value();
            series->append(it.key().toMSecsSinceEpoch(), price);

            // Update min and max values for Y-axis
            if (price < minY) {
                minY = price;
            }
            if (price > maxY) {
                maxY = price;
            }
        }

        // Update the x-axis range to match the new data window
        axisX->setRange(currentStartDate, windowEnd);

        // Dynamically adjust the Y-axis range based on the min and max values
        axisY->setRange(minY - (minY * 0.05), maxY + (maxY * 0.05));  // Add a 5% buffer
    };

    // Limit to the first 30 entries
    updateGraph();  // Initialize the graph with the first 30 days

    // Configure the chart
    chart->addSeries(series);
    chart->setAxisX(axisX, series);  // Assign axisX to the series
    chart->setAxisY(axisY, series);  // Assign axisY to the series
    chart->setTitle("AMZN Stock Price");

    // Customize line appearance
    series->setPen(QPen(Qt::blue));  // Set line color

    // Create the chart view
    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);
    chartView->setGeometry(0, 0, 800, 500);  // Set chart position and size manually

    // Create a button to shift the graph window by one day
    QPushButton *shiftButton = new QPushButton("Next 30 Days");
    shiftButton->setGeometry(300, 520, 200, 40);  // Set button position and size manually

    // Create two buttons to increment and decrement the counter
    QPushButton *incrementButton = new QPushButton("Increment");
    incrementButton->setGeometry(550, 520, 100, 40);  // Set button position and size manually

    QPushButton *decrementButton = new QPushButton("Decrement");
    decrementButton->setGeometry(660, 520, 100, 40);  // Set button position and size manually

    // Create a QLabel for the resetting counter
    QLabel *counterLabel = new QLabel("0", nullptr);
    counterLabel->setGeometry(750, 250, 50, 30);  // Position the label on the right side of the chart
    counterLabel->setAlignment(Qt::AlignCenter);

    // Create a QLabel for the static counter (this value does not reset)
    QLabel *staticCounterLabel = new QLabel("0", nullptr);
    staticCounterLabel->setGeometry(750, 280, 50, 30);  // Position this label just below the first one
    staticCounterLabel->setAlignment(Qt::AlignCenter);

    // Counter variable for the resetting label
    int counter = 0;
    int staticCounter = 0;  // Static counter that will accumulate the value
    float latestStockPrice = 0.0f;  // Latest stock price at the end of the window

    // Connect the button's clicked signal to update the graph window
    QObject::connect(shiftButton, &QPushButton::clicked, [&]() {
        // Move the current window one day later
        currentStartDate = currentStartDate.addDays(1);

        // Ensure the window doesn't exceed the last date
        if (currentStartDate.addDays(30) > lastDate) {
            currentStartDate = lastDate.addDays(-30);
        }

        // Update the graph with the new 30-day window
        updateGraph();

        // Get the latest stock price (the last price in the current 30-day window)
        latestStockPrice = sortedData.value(currentStartDate.addDays(30));

        // Calculate the value to add or subtract from the static counter
        staticCounter += counter * latestStockPrice;  // Add or subtract based on counter and latest stock price

        // Update the static counter label
        staticCounterLabel->setText(QString::number(staticCounter));

        // Reset the counter to 0 for the resetting label
        counter = 0;
        counterLabel->setText(QString::number(counter));
    });

    // Connect the Increment button's clicked signal to increment the resetting counter
    QObject::connect(incrementButton, &QPushButton::clicked, [&]() {
        counter++;
        counterLabel->setText(QString::number(counter));
    });

    // Connect the Decrement button's clicked signal to decrement the resetting counter
    QObject::connect(decrementButton, &QPushButton::clicked, [&]() {
        counter--;
        counterLabel->setText(QString::number(counter));
    });

    // Set up the main window
    QWidget *mainWidget = new QWidget;
    mainWidget->setWindowTitle("AMZN Stock Price Chart");
    mainWidget->resize(800, 600);  // Resize the main window manually

    // Manually add the chart view, button, and labels to the window
    mainWidget->setLayout(nullptr); // Disabling any layout manager

    mainWidget->setGeometry(0, 0, 800, 600);  // Set window size
    chartView->setParent(mainWidget);
    shiftButton->setParent(mainWidget);
    incrementButton->setParent(mainWidget);
    decrementButton->setParent(mainWidget);
    counterLabel->setParent(mainWidget);
    staticCounterLabel->setParent(mainWidget);

    // Show the window
    mainWidget->show();

    return a.exec();
}
