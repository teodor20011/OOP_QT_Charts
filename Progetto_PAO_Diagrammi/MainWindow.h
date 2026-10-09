#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "QMainWindow"
#include "CurrentFilesView.h"
#include "MainMenuBar.h"
#include "QAction"
#include "QSettings"
#include "QFileDialog"
#include "QMessageBox"
#include "QInputDialog"
#include "QErrorMessage"


class MainWindow : public QMainWindow {
 Q_OBJECT
 public:
  MainWindow();
  ~MainWindow() override;
  CurrentFilesView *data_tab;
 private:
  MainMenuBar *main_menu_bar;
  QAction *new_project_action;
  QAction *save;
  QAction *save_all;
  QAction *load;
  void writeSettings() const;
  void readSettings();
  void closeEvent(QCloseEvent *event) override;
 public slots:
  void openOrCreateDialog();
  void saveAll() const;
  bool loadFile();
  bool createNewProject();
 signals:
  void quit();
};

#endif // MAINWINDOW_H
