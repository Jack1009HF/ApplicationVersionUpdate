#include "ApplicationVersionUpdate.h"
#include <QtWidgets/QApplication>

#include "VersionUpdate.h"
#define  AppTitle (QString)("ApplicationVersionUpdate_V"+VersionUpdate::GetVersion()) 

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ApplicationVersionUpdate w;
    w.setWindowTitle(AppTitle);
    w.show();
    return a.exec();
}
