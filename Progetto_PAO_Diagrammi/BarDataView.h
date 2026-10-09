#ifndef BARDATAVIEW_H
#define BARDATAVIEW_H

#include "RowContainer.h"
#include "BarChartModel.h"
#include "AbstractDataView.h"
#include "QWidget"
#include "QLabel"
#include "QPushButton"
#include "QTabWidget"






class BarDataView: public AbstractDataView {
    Q_OBJECT
public:
    explicit BarDataView(AbstractModel *chart_model, QWidget *parent = nullptr);
    ~BarDataView() override;
    void connectContainerAt(int index) const;
private:
    QTabWidget *series_tab;
    QList<RowContainer*> *containers_list;
public slots:
    void loadDataViewFromModel();
    void removeRowFromAllContainersAt(int index);
    void upgradeTabs();
};

#endif // BARDATAVIEW_H
