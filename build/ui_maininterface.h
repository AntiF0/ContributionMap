/********************************************************************************
** Form generated from reading UI file 'maininterface.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAININTERFACE_H
#define UI_MAININTERFACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>
#include "square.h"

QT_BEGIN_NAMESPACE

class Ui_mainInterface
{
public:
    Square *widget;

    void setupUi(QWidget *mainInterface)
    {
        if (mainInterface->objectName().isEmpty())
            mainInterface->setObjectName(QStringLiteral("mainInterface"));
        mainInterface->resize(800, 600);
        widget = new Square(mainInterface);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(80, 100, 120, 80));

        retranslateUi(mainInterface);

        QMetaObject::connectSlotsByName(mainInterface);
    } // setupUi

    void retranslateUi(QWidget *mainInterface)
    {
        mainInterface->setWindowTitle(QApplication::translate("mainInterface", "mainInterface", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class mainInterface: public Ui_mainInterface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAININTERFACE_H
