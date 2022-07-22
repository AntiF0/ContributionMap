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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Square
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *Square)
    {
        if (Square->objectName().isEmpty())
            Square->setObjectName(QStringLiteral("Square"));
        Square->resize(300, 300);
        Square->setStyleSheet(QStringLiteral(""));
        pushButton = new QPushButton(Square);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 20, 31, 28));
        pushButton_2 = new QPushButton(Square);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(70, 20, 31, 28));

        retranslateUi(Square);

        QMetaObject::connectSlotsByName(Square);
    } // setupUi

    void retranslateUi(QWidget *Square)
    {
        Square->setWindowTitle(QApplication::translate("Square", "Form", Q_NULLPTR));
        pushButton->setText(QString());
        pushButton_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Square: public Ui_Square {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SQUARE_H
