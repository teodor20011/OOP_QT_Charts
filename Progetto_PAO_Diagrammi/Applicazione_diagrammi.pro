QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    AbstractChart.cpp \
    AbstractDataView.cpp \
    AbstractModel.cpp \
    AbstractRow.cpp \
    AbstractRowContainer.cpp \
    BarChart.cpp \
    BarChartModel.cpp \
    BarDataView.cpp \
    ChartView.cpp \
    CurrentFilesView.cpp \
    DataRow.cpp \
    MainMenuBar.cpp \
    PieChart.cpp \
    PieChartModel.cpp \
    PieDataView.cpp \
    RiotApi.cpp \
    RowContainer.cpp \
    SelectColorButton.cpp \
    SeriesContainer.cpp \
    SeriesRow.cpp \
    SeriesView.cpp \
    SingleFileView.cpp \
    SplineChart.cpp \
    SplineChartModel.cpp \
    SplineDataRow.cpp \
    SplineDataView.cpp \
    SplineRowContainer.cpp \
    main.cpp \
    MainWindow.cpp

HEADERS += \
    AbstractChart.h \
    AbstractDataView.h \
    AbstractModel.h \
    AbstractRow.h \
    AbstractRowContainer.h \
    BarChart.h \
    BarChartModel.h \
    BarDataView.h \
    ChartView.h \
    CurrentFilesView.h \
    DataRow.h \
    MainMenuBar.h \
    MainWindow.h \
    PieChart.h \
    PieChartModel.h \
    PieDataView.h \
    RiotApi.h \
    RowContainer.h \
    SelectColorButton.h \
    SeriesContainer.h \
    SeriesRow.h \
    SeriesView.h \
    SingleFileView.h \
    SplineChart.h \
    SplineChartModel.h \
    SplineDataRow.h \
    SplineDataView.h \
    SplineRowContainer.h

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
