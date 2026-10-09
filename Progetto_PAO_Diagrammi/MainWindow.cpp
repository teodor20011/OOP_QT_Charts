#include <QJsonDocument>
#include <QCoreApplication>
#include "MainWindow.h"


MainWindow::MainWindow() {
  data_tab = new CurrentFilesView(this);
  main_menu_bar = new MainMenuBar(this);
  setCentralWidget(data_tab);
  setMenuBar(main_menu_bar);
  QDir dir(QStandardPaths::writableLocation(QStandardPaths::DocumentsLocation));
  dir.mkdir("Chart Creator Projects");
  new_project_action = new QAction(tr("Crea un nuovo file"));
  connect(new_project_action, &QAction::triggered, this, &MainWindow::createNewProject);
  main_menu_bar->file_menu->addAction(new_project_action);
  save = new QAction(tr("Salva"));
  connect(save, &QAction::triggered, data_tab, &CurrentFilesView::saveFileAtCurrentIndex);
  main_menu_bar->file_menu->addAction(save);
  save_all = new QAction(tr("Salva tutto"));
  connect(save_all, &QAction::triggered, this, &MainWindow::saveAll);
  main_menu_bar->file_menu->addAction(save_all);
  load = new QAction(tr("Carica file"));
  connect(load, &QAction::triggered, this, &MainWindow::loadFile);
  main_menu_bar->file_menu->addAction(load);



  main_menu_bar->file_menu->insertSeparator(save);
  main_menu_bar->file_menu->insertSeparator(load);




  connect(data_tab, &CurrentFilesView::noFileOpened, this, &MainWindow::openOrCreateDialog);
  connect(this, &MainWindow::quit, this, &QCoreApplication::quit, Qt::ConnectionType::QueuedConnection);




  setWindowTitle("Applicazione diagrammi");
  readSettings();
  show();
  data_tab->checkForFiles();
}
MainWindow::~MainWindow() {
  delete data_tab;
  delete main_menu_bar;
  delete new_project_action;
  delete save;
  delete save_all;
  delete load;

}

void MainWindow::writeSettings() const {
  QSettings settings;

  settings.beginGroup("MainWindow");
  settings.setValue("size", size());
  settings.setValue("pos", pos());
  settings.endGroup();
}
void MainWindow::readSettings() {
  QSettings settings;

  settings.beginGroup("MainWindow");
  resize(settings.value("size", QSize(1100, 700)).toSize());
  move(settings.value("pos", QPoint(200, 200)).toPoint());
  settings.endGroup();
}
void MainWindow::closeEvent(QCloseEvent *event) {
  data_tab->saveSettings();
  delete data_tab;
  writeSettings();
  event->accept();
}





void MainWindow::openOrCreateDialog() {
  bool resolved = false;
  QMessageBox message_box;
  auto *create_button = new QPushButton(tr("Crea"));
  auto *open_button = new QPushButton(tr("Apri"));
  auto *exit_button = new QPushButton(tr("Chiudi"));
  message_box.setText(tr("Non ci sono file aperti"));
  message_box.setInformativeText(tr("Seleziona una voce:"));
  message_box.addButton(exit_button, QMessageBox::RejectRole);
  message_box.addButton(create_button, QMessageBox::AcceptRole);
  message_box.addButton(open_button, QMessageBox::AcceptRole);
  message_box.setDefaultButton(open_button);
  while (!resolved) {
    int result = message_box.exec();

    if (message_box.clickedButton() == nullptr || result == QDialog::Rejected) {
      resolved = true;
      emit quit();
    } else {
      if (message_box.clickedButton() == open_button) {
        resolved = loadFile();
      } else {
        resolved = createNewProject();
      }
    }
  }
  delete create_button;
  delete open_button;
}

void MainWindow::saveAll() const {
  data_tab->saveAllFiles();
}

bool MainWindow::loadFile() {

#ifdef __linux__
  QString file_path = QFileDialog::getOpenFileName(this, tr("Apri un file"),
                                                   QStandardPaths::writableLocation(QStandardPaths::DocumentsLocation)
                                                       + "/Chart Creator Projects",
                                                   tr("JSON files (*.json);;XML files (*.xml)"),
                                                   nullptr,
                                                   QFileDialog::DontUseNativeDialog);
#else
  QString file_path = QFileDialog::getOpenFileName(this, tr("Apri un file"),
                                                   QStandardPaths::writableLocation(QStandardPaths::DocumentsLocation)
                                                   +"/Chart Creator Projects",
                                                   tr("JSON files (*.json);;XML files (*.xml)"));
#endif
  if (file_path != "") {
    data_tab->loadTab(&file_path);
    data_tab->setCurrentIndex(data_tab->count() - 1);
    return true;
  } else {
    return false;
  }
}
bool MainWindow::createNewProject() {
  QStringList project_types;
  ChartType chart_type;
  project_types << tr("A barre") << tr("A torta") << tr("A linea");
  bool selected;
  QString type_selected = QInputDialog::getItem(this, tr("Seleziona un tipo di diagramma"),
                                                tr("Tipi di diagrammi"), project_types,
                                                0, false, &selected);

  if (selected && !type_selected.isEmpty()) {
    if (type_selected == "A barre") {
      chart_type = ChartType::BarChart;
    } else {
      if (type_selected == "A torta") {
        chart_type = ChartType::PieChart;
      } else {
        if (type_selected == "A linea") {
          chart_type = ChartType::SplineChart;
        }
      }
    }
  } else {
    return false;
  }

  QString file_name = QInputDialog::getText(this, tr("Inserisci il titolo del file"),
                                            tr("Nome file"), QLineEdit::Normal,
                                            tr("Diagramma"));
  if (file_name == "") {
    return false;
  }

  if (!file_name.endsWith(".xml") || !file_name.endsWith(".json")) {
    file_name.append(".json");
  }

#ifdef __linux__
  QString dir_path = QFileDialog::getExistingDirectory(this,
                                                       tr("Scegli la posizione del file"),
                                                       QStandardPaths::writableLocation(
                                                           QStandardPaths::DocumentsLocation)
                                                           + "/Chart Creator Projects",
                                                       QFileDialog::ShowDirsOnly |
                                                           QFileDialog::DontUseNativeDialog);
#else
  QString dir_path = QFileDialog::getExistingDirectory(this,
                                                                       tr("Scegli la posizione del file"),
                                                                       QStandardPaths::writableLocation(
                                                                               QStandardPaths::DocumentsLocation)
                                                                       + "/Chart Creator Projects",
                                                                       QFileDialog::ShowDirsOnly);
#endif
  if (dir_path != "") {
    QString file_path = dir_path.append("/" + file_name);
    QFile file(file_path);
    if (file.exists()) {
      QString suffix = QFileInfo(file).suffix();
      dir_path.remove(file_name);
      file_name.remove("." + suffix);
      file_name.append(tr("(copy)") + "." + suffix);
      file_path = dir_path.append(file_name);
      file.setFileName(file_path);

      if (!file.open(QFile::ReadOnly)) {
        QMessageBox error_message(QMessageBox::Icon::Critical,
                                  tr("Errore"),
                                  tr("Non e' possibile creare il file"),
                                  QMessageBox::StandardButton::Ok,
                                  this);
        return false;
      } else {
        file.close();
      }
    } else {
      if (!file.open(QFile::ReadOnly)) {
        QErrorMessage error;
        error.showMessage(tr("Non e' possibile creare il file"));
      } else {
        file.close();
      }
    }

    data_tab->createAnEmptyTab(file_path, chart_type);
    data_tab->setCurrentIndex(data_tab->count() - 1);
    data_tab->saveFileAtCurrentIndex();
    return true;
  } else {
    return false;
  }
}

