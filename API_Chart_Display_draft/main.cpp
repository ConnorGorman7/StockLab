#include <QApplication>
#include <QMainWindow>
#include <QtCharts/QChartView>
#include <QtCharts/QBarSeries>
#include <QtCharts/QBarSet>
#include <QtCharts/QBarCategoryAxis>
#include <QtCharts/QLegend>

    int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QBarSet *set0 = new QBarSet("Altuve");
    QBarSet *set1 = new QBarSet("Martinez");
    QBarSet *set2 = new QBarSet("Segura");
    QBarSet *set3 = new QBarSet("Simmons");
    QBarSet *set4 = new QBarSet("Trout");

    *set0 << 283 << 341 << 313 << 338 << 346 << 335;
    *set1 << 250 << 315 << 282 << 307 << 303 << 330;
    *set2 << 294 << 246 << 257 << 319 << 300 << 325;
    *set3 << 248 << 244 << 265 << 281 << 278 << 313;
    *set4 << 323 << 287 << 299 << 315 << 306 << 313;

    QBarSeries *series = new QBarSeries();
    series->append(set0);
    series->append(set1);
    series->append(set2);
    series->append(set3);
    series->append(set4);

    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("Batting Avg by Year");

    chart->setAnimationOptions(QChart::AllAnimations);

    QStringList categories;
    categories << "2013" << "2014" << "2015" << "2016" << "2017" << "2018";

    QBarCategoryAxis *axis = new QBarCategoryAxis();
    axis->append(categories);
    chart->createDefaultAxes();
    chart->setAxisX(axis, series);

    chart->legend()->setVisible(true);
    chart->legend()->setAlignment(Qt::AlignBottom);

    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);

    QMainWindow window;
    window.setCentralWidget(chartView);
    window.resize(420, 300);
    window.show();

    return a.exec();
}
