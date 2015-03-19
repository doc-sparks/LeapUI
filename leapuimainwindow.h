#ifndef LEAPUIMAINWINDOW_H
#define LEAPUIMAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class LeapUIMainWindow;
}

class LeapUIMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit LeapUIMainWindow(QWidget *parent = 0);
    ~LeapUIMainWindow();

private:
    Ui::LeapUIMainWindow *ui;
};

#endif // LEAPUIMAINWINDOW_H
