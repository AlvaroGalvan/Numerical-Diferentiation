#include "difnum.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DifNum w;
    w.show();

    return a.exec();
}
