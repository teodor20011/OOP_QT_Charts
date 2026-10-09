#ifndef ABSTRACTCHART_H
#define ABSTRACTCHART_H

#include "AbstractModel.h"
#include "QtCharts/QChart"

using namespace QtCharts;

enum class ChartType;

class AbstractChart: public QChart {
    Q_OBJECT
protected:
    AbstractModel *model;
    QAbstractSeries *series;
    virtual void connectChart() const;
public:
    AbstractChart(AbstractModel *chart_model, QWidget *parent = nullptr);
    ~AbstractChart() override;
    virtual void loadFromModel() = 0;
    virtual void darkMode();
    virtual void lightMode();
public slots:
    virtual void updateChartSets() = 0;
    virtual void deleteSetAt(int index) = 0;
    virtual void updateDataOnSetAt(int index) = 0;
    virtual void updateChart() = 0;
};


#endif // ABSTRACTCHART_H
