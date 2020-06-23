#include "RVideoRecorder.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    RVideoRecorder w;
    w.show();
    return a.exec();
}
