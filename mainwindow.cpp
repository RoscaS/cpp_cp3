#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent ) : QMainWindow(parent) {
  setupUi(this);
  table = new Table{diagram};
  vl_data->addWidget(table);

  diagram = new Diagram{};
  vl_diagram->addWidget(diagram);
}

void MainWindow::about() {
  QMessageBox::information(this, tr("A Propos"), tr("Sol Rosca: 19 mars 9:45"));
}



