#ifndef SERIESCONTAINER_H
#define SERIESCONTAINER_H


#include "AbstractRowContainer.h"
#include "SeriesRow.h"


class SeriesContainer: public AbstractRowContainer {
    Q_OBJECT
private:
    AbstractModel *model;
public:
    explicit SeriesContainer(AbstractModel *chart_model, QWidget *parent = nullptr);
    ~SeriesContainer() override;
    void loadContainerFromModel();
public slots:
    void createNewRow() override;
};


#endif // SERIESCONTAINER_H
