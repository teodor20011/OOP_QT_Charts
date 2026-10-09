#ifndef ROWCONTAINER_H
#define ROWCONTAINER_H

#include "AbstractRowContainer.h"
#include "BarChartModel.h"
#include "QWidget"
#include "DataRow.h"
#include "QScrollArea"
#include "QDebug"




class RowContainer: public AbstractRowContainer {
    Q_OBJECT
private:
    AbstractModel *model;
    int container_index;
public:
    explicit RowContainer(AbstractModel *chart_model, QWidget *parent = nullptr);
    explicit RowContainer(bool on_load, int index, AbstractModel *chart_model, QWidget *parent = nullptr);
    ~RowContainer() override;
    void loadContainerFromModel();
    void removeFromLayoutAt(int index);
public slots:
    void createNewRow() override;
    void removeNodeFromList() override;
    void removeRowAt(int index) override;
    void changeColorsButtonAt(int index);
    signals:
    void creatingARow();
    void removingARowAt();
};


#endif // ROWCONTAINER_H
