#include "square.h"
#include "ui_square.h"

Square::Square(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Square)
{
    ui->setupUi(this);
}

Square::~Square()
{
    delete ui;

}

void Square::on_pushButton_clicked()
{
    QString data = "日期";
    emit sendData(data);
}
