#pragma once

#include "diagram.h"
#include "ui_table.h"

class Table : public QWidget, private Ui::table {
Q_OBJECT


private:
  Diagram *diagram;
  QList<double> values;

public:
  explicit Table(Diagram* diagram, QWidget *parent = nullptr);

private:
  void refresh();


signals:
  void changed(QList<double> &);

public slots:
  void on_btn_add_clicked();
  void on_btn_delete_clicked();
  void on_btn_reset_clicked();

};

