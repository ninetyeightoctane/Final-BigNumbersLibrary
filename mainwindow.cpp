#include "mainwindow.h"
#include "ui_mainwindow.h"
#inlcude "BigNumbers.h"

// initial display value
int initDisplay = 0;

// Will define if this was the last math button clicked
bool divTrigger = false;
bool multTrigger = false;
bool addTrigger = false;
bool subTrigger = false;
bool modTrigger = false;

// Constructor
Main::Calc(QWidget *parent) :

    // Call the QMainWindow constructor
    QMainWindow(parent),

    // Create the UI class and assign it to the ui member
    ui(new Ui::Calc){

    // Setup the UI
    ui->setupUi(this);

    // Put 0 in Display
    ui->Display->setText(QString::number(initDisplay));

    }


Calc::~Calc()
{
    delete ui;
}

void Calc::NumPressed(){

    // loop to store first input digits in a vector
    // after calcButton is pressed breaks (calcButtonPressed = true)
    // then starts a new loop to store second input digits in a vector
}



void Calc::EqualButtonPressed(){
    if (addTrigger = true)
        ui->Display->setText(QString::text(MyBigNumbers::BigNumbers::Add(std::vector a, std::vector b));
    else if (subTrigger = true)
        ui->Display->setText(QString::text(MyBigNumbers::BigNumbers::Subtract(std::vector a, std::vector b));
    else if (multTrigger = true)
        ui->Display->setText(QString::text(MyBigNumbers::BigNumbers::Multiply(std::vector a, std::vector b));
    else if (dicTrigger = true)
        ui->Display->setText(QString::text(MyBigNumbers::BigNumbers::Divide(std::vector a, std::vector b));
    else if (modTrigger = true)
        ui->Display->setText(QString::text(MyBigNumbers::BigNumbers::Mod(std::vector a, std::vector b));

}
