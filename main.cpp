#include <iostream>
#include "mainwindow.h"

int main(int argc, char *argv[]) {
  QApplication app(argc, argv);
  MainWindow w;
  w.setFixedSize(800, 550);
  w.show();

  return app.exec();
}
