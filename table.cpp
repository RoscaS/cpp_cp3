#include "table.h"

const QList<double> DEFAULT_VALUES = {10, 25, 40, 25};


Table::Table(Diagram *diagram, QWidget *parent)
    : QWidget(parent), diagram(diagram) {

  setFixedSize(300, 200);
  setMaximumSize(200, QWIDGETSIZE_MAX);
  setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding);

  values = DEFAULT_VALUES;

  setupUi(this);
}

void Table::refresh() {

  diagram->clear();
  lst_values->clear();

  for (auto value : values) {
    lst_values->addItem(QString::number(value));
    diagram->addValue(value);
    qDebug("refresh");
  }

  emit changed(values);
}

void Table::on_btn_add_clicked() {
  if (!f_new->text().isEmpty()) {
    values << f_new->text().toDouble();
  }
  f_new->clear();
  refresh();
}

void Table::on_btn_delete_clicked() {
  if (lst_values->selectedItems().count()) {
    values.removeAt(lst_values->currentRow());
  }
  refresh();
}
void Table::on_btn_reset_clicked() {
  values.clear();
  refresh();
}
