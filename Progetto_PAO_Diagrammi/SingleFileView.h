#ifndef SINGLEFILEVIEW_H
#define SINGLEFILEVIEW_H


#include "BarDataView.h"
#include "ChartView.h"
#include <QToolBar>
#include "SeriesContainer.h"
#include "QWidget"
#include "QTabWidget"
#include "QHBoxLayout"
#include "BarChartModel.h"
#include "PieDataView.h"
#include "SeriesView.h"
#include "SplineChartModel.h"
#include "QTabBar"
#include "QFileInfo"
#include "QFileDialog"
#include <QStandardPaths>
#include <QSettings>
#include "SplineDataView.h"








class SingleFileView : public QWidget {
 Q_OBJECT
 private:
  ChartType chart_type;
  AbstractDataView *data_view;
  SeriesView *series_view;
  ChartView *chart_view;
  AbstractModel *model;
  QHBoxLayout *views_layout;
  QVBoxLayout *file_layout;
  QString *file_path;
  QToolBar *tool_bar;
  QAction *save_action;
  QAction *save_as_action;
  QAction *save_chart_as_image;
  QAction *dark_mode_action;
  QAction *light_mode_action;
  bool light_mode;
  void buildBarView();
  void buildPieView();
  void buildSplineView();
  void buildView();
  void readSettings();
 public:
  explicit SingleFileView(const QString &file_path, ChartType type, QWidget *parent = nullptr);
  ~SingleFileView() override;
  QString getFilePath() const;
  void saveSettings() const;
 public slots:
  void saveSingleFileToXML(QXmlStreamWriter *stream) const;
  void saveSingleFileToJson(QJsonObject *json) const;
  void loadSingleFile(QString *file_path);
  void save();
  void enableDarkMode();
  void enableLightMode();
 signals:
  void saveSingleFileAs(const QString &path);
};


#endif // SINGLEFILEVIEW_H
