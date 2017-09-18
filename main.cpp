#include "newton_rap.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Newton_Rap w;
    w.show();

    return a.exec();
}
