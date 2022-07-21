#include "maininterface.h"
#include "ui_maininterface.h"

#include <QVBoxLayout>

mainInterface::mainInterface(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::mainInterface)
{
    ui->setupUi(this);
    ui->widget->show();

    connect(square, &Square::sendData, [=](QString data){
        ui->lineEdit->setText(data);
    });
}

mainInterface::~mainInterface()
{
    delete ui;
}

