#ifndef PIEDATAVIEW_H
#define PIEDATAVIEW_H

#include "PieChartModel.h"
#include "RowContainer.h"
#include "AbstractDataView.h"
#include "QWidget"
#include "QLabel"
#include "QPushButton"



class PieDataView: public AbstractDataView {
    Q_OBJECT
private:
    RowContainer *rows_container;
public:
    explicit PieDataView(AbstractModel *chart_model, QWidget *parent = nullptr);
    ~PieDataView() override;
    void connectContainer() const;
public slots:
    void loadDataViewFromModel() override;
};

#endif // PIEDATAVIEW_H
