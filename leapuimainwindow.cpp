#include "leapuimainwindow.h"
#include "ui_leapuimainwindow.h"

LeapUIMainWindow::LeapUIMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LeapUIMainWindow)
{
    ui->setupUi(this);
}

LeapUIMainWindow::~LeapUIMainWindow()
{
    delete ui;
}
