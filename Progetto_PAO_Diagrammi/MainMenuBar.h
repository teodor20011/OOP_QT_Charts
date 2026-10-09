#ifndef MAINMENUBAR_H
#define MAINMENUBAR_H


#include "QAction"
#include "QMenuBar"
#include "QMenu"
#include "QIcon"





class MainMenuBar: public QMenuBar {
    Q_OBJECT
    friend class MainWindow;
public:
    MainMenuBar(QWidget* = nullptr);
private:
    QMenu *file_menu;
};

#endif // MAINMENUBAR_H
