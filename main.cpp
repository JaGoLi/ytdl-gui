#include "ytdl.h"
#include "mainactions.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ytdl w;
    mainActions q;
    QCoreApplication::setApplicationName(QString("Youtube Downloader"));
    w.setWindowTitle( QCoreApplication::applicationName() );
    w.show();
    return a.exec();
}
