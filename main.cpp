#include "mw_musicrenamerapp.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MW_MusicRenamerApp w;
    w.show();
    return a.exec();
}
