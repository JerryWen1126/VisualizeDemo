#include "vserver.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    VServer w;
    w.show();

    return a.exec();
}
