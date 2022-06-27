#include "painter.h"
#include "ui_painter.h"

Painter::Painter(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Painter)
{
    ui->setupUi(this);
}

Painter::~Painter()
{
    delete ui;
}

void Painter::paintEvent(QPaintEvent *event)
{
    // Crear el objeto painter. Establecer el formulario como su lienzo
    QPainter pintor(this);

    // establecer un color a su pincel
    pintor.setPen(Qt::blue);

    // Dibujar una linea
    pintor.drawLine(100, 100, 200, 200);

    // Cambiar el color del pincel
    pintor.setPen(Qt::red);

    // Establecer un tipo y tamaño de letra
    pintor.setFont(QFont("Arial",30));

    // Dibujar un texto
    pintor.drawText(250,150,"Picaso");

    // Crear un nuevo pincel
    QPen pincel;
    pincel.setColor(Qt::green);
    pincel.setWidth(10);
    pincel.setCapStyle(Qt::RoundCap);

    // Utilizar el nuevo pincel
    pintor.setPen(pincel);

    // Establecer una brocha
    pintor.setBrush(Qt::black);

    // Dibujar un rectangulo
    pintor.drawRect(400, 100, 100, 100);

    // Crear un nuevo color
    QColor miColor(255,221,129,128);

    // Crear un nuevo pincel
    QPen pincel2;
    pincel2.setColor(Qt::yellow);
    pincel2.setWidth(5);
    pincel2.setStyle(Qt::DotLine);

    // Establecer el nuevo pincel
    pintor.setPen(pincel2);

    // Cambiar la brocha
    pintor.setBrush(miColor);

    // Dibuar un circulo
    pintor.drawEllipse(450, 100, 100, 100);

}

