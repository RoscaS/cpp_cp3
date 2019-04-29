#pragma once

#include <QtPrintSupport>
#include <QtWidgets>

class Diagram : public QWidget {

private:

  QList<double> values;

  QPrinter *printer;

public:
  static QList<QColor> colors;
  void addValue(double value);
  void clear();
  void print();

protected:
  void paintEvent(QPaintEvent *e);

private:
  void refresh(QPainter &paint);
};

