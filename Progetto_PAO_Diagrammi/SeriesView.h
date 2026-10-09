#ifndef SERIESVIEW_H
#define SERIESVIEW_H

#include "SeriesContainer.h"
#include "QWidget"
#include "QAbstractButton"
#include "QLabel"
#include "QBoxLayout"

class SeriesView: public QWidget {
    Q_OBJECT
private:
    AbstractModel *model;
    SeriesContainer *series_container;
    QPushButton *add_row;
    QPushButton *edit_button;
    QLabel *series_label;
    QVBoxLayout *layout;
    QHBoxLayout *buttons_layout;
public:
    explicit SeriesView(AbstractModel *chart_model, QWidget *parent = nullptr);
    ~SeriesView() override;
    void connectContainer() const;
public slots:
    void loadSeriesViewFromModel();
};

#endif // SERIESVIEW_H
