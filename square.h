#ifndef SQUARE_H
#define SQUARE_H

#include <QWidget>
#include <QDebug>

namespace Ui {
class Square;
}

class Square : public QWidget
{
    Q_OBJECT

public:
    explicit Square(QWidget *parent = nullptr);
    ~Square();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Square *ui;

signals:
    void sendDatass(QString);
};

#endif // SQUARE_H
