#ifndef MAININTERFACE_H
#define MAININTERFACE_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class mainInterface; }
QT_END_NAMESPACE

class mainInterface : public QWidget
{
    Q_OBJECT

public:
    mainInterface(QWidget *parent = nullptr);
    ~mainInterface();

private:
    Ui::mainInterface *ui;
    void iniInterface();
};
#endif // MAININTERFACE_H