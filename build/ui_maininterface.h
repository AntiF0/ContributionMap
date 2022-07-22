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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include "square.h"

QT_BEGIN_NAMESPACE

class Ui_mainInterface
{
public:
    Square *widget;
    QLineEdit *lineEdit;
    QPushButton *pushButton;

    void setupUi(QWidget *mainInterface)
    {
        if (mainInterface->objectName().isEmpty())
            mainInterface->setObjectName(QStringLiteral("mainInterface"));
        mainInterface->resize(800, 600);
        widget = new Square(mainInterface);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(60, 140, 300, 300));
        lineEdit = new QLineEdit(mainInterface);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(400, 260, 251, 21));
        pushButton = new QPushButton(mainInterface);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(490, 430, 111, 41));

        retranslateUi(mainInterface);

        QMetaObject::connectSlotsByName(mainInterface);
    } // setupUi

    void retranslateUi(QWidget *mainInterface)
    {
        mainInterface->setWindowTitle(QApplication::translate("mainInterface", "mainInterface", Q_NULLPTR));
        pushButton->setText(QApplication::translate("mainInterface", "\347\202\271\345\207\273", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class mainInterface: public Ui_mainInterface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAININTERFACE_H
