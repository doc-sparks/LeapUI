#include "leapuimainwindow.h"
#include <QApplication>
#include "/opt/LeapSDK/include/Leap.h"

int main(int argc, char *argv[])
{
    Leap::Controller controller;

    QApplication a(argc, argv);
    LeapUIMainWindow w;
    w.show();

    return a.exec();
}
