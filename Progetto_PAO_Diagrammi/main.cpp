#include <QApplication>
#include <QResource>
#include "MainWindow.h"
#include "QXmlStreamReader"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    QResource::registerResource("../Data/resources.rcc");
    QCoreApplication::setApplicationName("Applicazione_diagrammi");
    QCoreApplication::setOrganizationName("Teo");
    auto *main_window = new MainWindow;
    main_window->show();
    return QApplication::exec();
}
