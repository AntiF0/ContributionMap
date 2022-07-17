#include "maininterface.h"
#include "ui_maininterface.h"
#include "square.h"

#include <QVBoxLayout>

mainInterface::mainInterface(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::mainInterface)
{
    ui->setupUi(this);
//    ui->widget->show();
}

mainInterface::~mainInterface()
{
    delete ui;
}

