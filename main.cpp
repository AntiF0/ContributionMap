#include "maininterface.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    mainInterface w;
    w.show();
    return a.exec();
}
