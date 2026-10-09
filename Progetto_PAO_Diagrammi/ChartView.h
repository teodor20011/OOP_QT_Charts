#ifndef CHARTVIEW_H
#define CHARTVIEW_H

#include "BarChartModel.h"
#include "AbstractChart.h"
#include "BarChart.h"
#include "PieChart.h"
#include "SplineChart.h"
#include "SelectColorButton.h"
#include "QWidget"
#include "QtCharts/QChart"
#include "QtCharts/QChartView"
#include "QtCharts/QBarLegendMarker"
#include "QtCharts/QBarCategoryAxis"
#include "QtCharts/QBarSeries"
#include "QtCharts/QBarSet"
#include "QVBoxLayout"
#include <cmath>
#include "QFileDialog"
#include "QStandardPaths"
#include "QComboBox"
#include "qlabel.h"




class ChartView : public QWidget {
 Q_OBJECT
 private:
  AbstractModel *model;
  QFont *title_font;
  QHBoxLayout *title_layout;
  QLabel *title_head;
  QLineEdit *title;
  QVBoxLayout *layout;
  QtCharts::QChartView *chart_view;
  AbstractChart *chart;
 public:
  explicit ChartView(AbstractModel *chart_model, QWidget *parent = nullptr);
  ~ChartView() override;
  void darkMode();
  void lightMode();
 public slots:
  void updateChartView();
  void saveChartAsImage();
  void changeChartTitle(const QString &new_title);
};

#endif // CHARTVIEW_H
