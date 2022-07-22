#include "maininterface.h"
#include "ui_maininterface.h"

#include <QVBoxLayout>

mainInterface::mainInterface(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::mainInterface)
{
    ui->setupUi(this);

    iniConnect();
}

mainInterface::~mainInterface()
{
    delete ui;
}

// 初始化connect连接
void mainInterface::iniConnect()
{
//    Square* square = new Square();
    //    square = new Square();
    connect(ui->widget, &Square::sendDatass, [=](QString data){
        ui->lineEdit->setText(data);
        qDebug()<< "收到了信号";
    });

    connect(ui->pushButton, &QPushButton::clicked, [=](){
        ui->lineEdit->setText("data");
    });
}


