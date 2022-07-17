/********************************************************************************
** Form generated from reading UI file 'square.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SQUARE_H
#define UI_SQUARE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Square
{
public:

    void setupUi(QWidget *Square)
    {
        if (Square->objectName().isEmpty())
            Square->setObjectName(QStringLiteral("Square"));
        Square->resize(355, 304);
        Square->setStyleSheet(QStringLiteral("background-color: rgb(0, 255, 0)"));

        retranslateUi(Square);

        QMetaObject::connectSlotsByName(Square);
    } // setupUi

    void retranslateUi(QWidget *Square)
    {
        Square->setWindowTitle(QApplication::translate("Square", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Square: public Ui_Square {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SQUARE_H
