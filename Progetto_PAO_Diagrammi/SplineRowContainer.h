#ifndef SPLINEROWCONTAINER_H
#define SPLINEROWCONTAINER_H


#include "AbstractRowContainer.h"
#include "SplineDataRow.h"
class SplineRowContainer: public AbstractRowContainer {
    Q_OBJECT
private:
    AbstractModel *model;
public:
    explicit SplineRowContainer(AbstractModel *chart_model, QWidget *parent = nullptr);
    ~SplineRowContainer() override;
    void loadContainerFromModel();
public slots:
    void createNewRow() override;
};

#endif // SPLINEROWCONTAINER_H
