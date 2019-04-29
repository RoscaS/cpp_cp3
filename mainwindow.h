#pragma once

#include "table.h"
#include "ui_mainwindow.h"

class MainWindow : public QMainWindow, private Ui::mainwindow {
Q_OBJECT

private:
  Diagram *diagram;
  Table *table;

public:
  explicit MainWindow(QWidget *parent = nullptr);

private:

private slots:
  void about();

public slots:
  void on_a_exit_triggered() { close(); }
  void on_a_about_triggered() { about(); }
  void on_a_print_triggered() { diagram->print(); }
};

