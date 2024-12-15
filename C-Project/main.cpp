#include "logowanie.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    logowanie w;
    w.show();
    return a.exec();
}
