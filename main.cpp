#include "regmul.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    RegMul w;
    w.show();

    return a.exec();
}
