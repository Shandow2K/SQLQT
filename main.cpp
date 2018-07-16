#include "widget.h"
#include <QApplication>
#include"odbchelper.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    OdbcHelper w;
    w.getPointId();


    return a.exec();
}
