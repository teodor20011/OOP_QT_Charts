#ifndef SERIESROW_H
#define SERIESROW_H


#include "AbstractRow.h"
#include "BarChartModel.h"
#include "QLineEdit"
#include "QDebug"



class SeriesRow: public AbstractRow {
private:
    int model_index;
    BarChartModel *model;
    QLineEdit *series_name;
public:
    explicit SeriesRow(BarChartModel *chart_model, QWidget *parent = nullptr);
    explicit SeriesRow(int index, BarChartModel *chart_model, QWidget *parent = nullptr);
    ~SeriesRow() override;
public slots:
    void setIndex(int i);
    void saveRow(QXmlStreamWriter *stream) const override;
    void loadRow(QXmlStreamReader *stream) override;
    void saveSerieToModel(const QString& new_serie) const;
    void loadRowFromModel() override;
    void changeIndex(int index);
};


#endif // SERIESROW_H
