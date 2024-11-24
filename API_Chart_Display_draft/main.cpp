#include <QApplication>
#include <QChartView>
#include <QLineSeries>
#include <QValueAxis>
#include <QDateTimeAxis>
#include <QFile>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QTextStream>
#include <QDebug>
#include <QStringList>
#include <QMainWindow>

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);

    // Create a chart view
    QChart *chart = new QChart();

    // Create a series to hold the data
    QLineSeries *series = new QLineSeries();

    // Open the AMZNdata.txt file containing the AMZN data
    QFile file("AMZNdata.txt"); // Make sure the path is correct if the file is elsewhere
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "Failed to open file";
        return -1;
    }

    QByteArray data = file.readAll();  // Read the entire file content as QByteArray

    // Parse the JSON content
    QJsonDocument doc = QJsonDocument::fromJson(data);  // Pass the QByteArray here
    if (doc.isNull() || !doc.isObject()) {
        qDebug() << "Failed to parse JSON";
        return -1;
    }

    QJsonObject jsonObject = doc.object();
    QJsonObject timeSeries = jsonObject["Time Series (Daily)"].toObject();

    // Loop through the time series and extract date and close prices
    for (auto it = timeSeries.begin(); it != timeSeries.end(); ++it) {
        QString dateString = it.key();  // Date (e.g., "2024-11-22")
        QJsonObject dayData = it.value().toObject();

        // Extract the close price (could also extract open, high, low if needed)
        QString closePriceStr = dayData["4. close"].toString();
        float closePrice = closePriceStr.toFloat();

        // Convert the date string to QDateTime
        QDateTime date = QDateTime::fromString(dateString, "yyyy-MM-dd");

        // Add data to the series
        series->append(date.toMSecsSinceEpoch(), closePrice);
    }

    // Set up the chart
    chart->addSeries(series);
    chart->createDefaultAxes();

    // Set axis formatting
    QDateTimeAxis *axisX = new QDateTimeAxis;
    axisX->setFormat("MMM dd, yyyy");
    axisX->setTitleText("Date");
    chart->setAxisX(axisX, series);

    QValueAxis *axisY = new QValueAxis;
    axisY->setTitleText("Price (USD)");
    chart->setAxisY(axisY, series);

    // Create a chart view to display the chart
    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);
    chartView->setRenderHint(QPainter::SmoothPixmapTransform);

    // Create and show the main window
    QMainWindow window;
    window.setCentralWidget(chartView);
    window.resize(800, 600);
    window.show();

    return a.exec();
}
