#include "vclient.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    vClient w;
    w.show();

    return a.exec();
}
