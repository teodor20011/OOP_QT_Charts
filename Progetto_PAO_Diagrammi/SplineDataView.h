#ifndef SPLINEDATAVIEW_H
#define SPLINEDATAVIEW_H

#include "SplineRowContainer.h"
#include "AbstractDataView.h"
class SplineDataView: public AbstractDataView {
    Q_OBJECT
private:
    SplineRowContainer *rows_container;
public:
    explicit SplineDataView(AbstractModel *chart_model, QWidget *parent = nullptr);
    ~SplineDataView() override;
    void connectContainer() const;
public slots:
    void loadDataViewFromModel() override;
};

#endif // SPLINEDATAVIEW_H
