#ifndef CALC_H
#define CALC_H

#include <QMainWindow>

// Use the standard UI namespace which is tied to the .ui file
namespace Ui {
class Calc;
}

class Calc : public QMainWindow
{
    // Declares our class as a QObject which is the base class
    // for all Qt objects
    // QObjects handle events
    Q_OBJECT

public:

    explicit Calc(QWidget *parent = 0);
    ~Calc();

private:
    Ui::Calc *ui;

private slots :
    void NumPressed();
    void calcButtonPressed();
    void EqualButtonPressed();
};
