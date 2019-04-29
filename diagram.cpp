#include <iostream>
#include "diagram.h"

QList<QColor> Diagram::colors = {
    Qt::green,
    Qt::blue,
    Qt::red,
};


void Diagram::paintEvent(QPaintEvent *e) {
  QPainter paint(this);
  refresh(paint);
}

void Diagram::addValue(double value) {
  values.append(value);
  update();
}

void Diagram::clear() {
  values.clear();
  update();
}

void Diagram::print() {
  QPrintDialog dialog(printer, this);
  if (dialog.exec() == QDialog::Accepted) {
    QPainter paint(printer);
    paint.setWindow(0, 0, width(), height());
    refresh(paint);
  }
}

void Diagram::refresh(QPainter &paint) {

  if (values.length()) {
    double cX = width()/4;
    double cY = height()/4;

    paint.setPen(QPen(Qt::black));
    paint.setBrush(Qt::red);

    QRectF r{cX, cY, 250, 250};


    double startAngle = 0;
    int colorIndex = 0;

    for (auto const value : values) {
      colorIndex = colorIndex == 3 ? 0 : colorIndex;
      paint.setBrush(colors.at(colorIndex));


      double angle = (360 * value) / 100;
      paint.drawPie(r, startAngle * 60, angle * 60);
      startAngle = angle;
    }
  }

}


