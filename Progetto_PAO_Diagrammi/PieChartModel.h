#ifndef PIECHARTMODEL_H
#define PIECHARTMODEL_H


#include "AbstractModel.h"
#include "AbstractChart.h"

class PieChartModel : public AbstractModel {
 Q_OBJECT
 private:
  void saveChartType(QXmlStreamWriter *stream) const override;
  void saveChartTypeToJson(QJsonObject *json) const override;
 public:
  PieChartModel();
  ~PieChartModel() override;
  ChartType getChartType() const override;
 public slots:
  void saveModelToXML(QXmlStreamWriter *stream) const override;
  void saveModelToJson(QJsonObject *json) const override;

};


#endif // PIECHARTMODEL_H
