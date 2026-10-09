#ifndef PIECHART_H
#define PIECHART_H

#include "BarChartModel.h"
#include "AbstractChart.h"
#include "PieChartModel.h"
#include <QtWidgets/QApplication>
  #include <QtWidgets/QMainWindow>
  #include <QtCharts/QChartView>
  #include <QtCharts/QPieSeries>
  #include <QtCharts/QPieSlice>
#include "QtCharts/QChart"
#include <cmath>





class PieChart: public AbstractChart {
    Q_OBJECT
private:
    QList<QtCharts::QPieSlice*> *slices;
    void connectChart() const override;
public:
    explicit PieChart(PieChartModel *chart_model, QWidget *parent = nullptr);
    ~PieChart() override;
    void loadFromModel() override;
    void darkMode() override;
    void lightMode() override;
public slots:
    void updateChartSets() override;
    void deleteSetAt(int index) override;
    void updateDataOnSetAt(int index) override;
    void updateColors();
    void updateChart() override;
};


#endif // PIECHART_H
