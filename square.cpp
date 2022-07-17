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
