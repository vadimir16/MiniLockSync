#include <QApplication>
#include <QTranslator>
#include <QLocale>

#include "mainwindow.h"
#include "window.h"
#include "steerer.h"


#include "login.hpp"
#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    //Translation
    QTranslator editTranslator;
    QString filename;
    filename = QString("MiniLockSync_%1").arg(QLocale::system().name());
    editTranslator.load(filename, qApp->applicationDirPath()); ///!!!!!!!!!!!!!!!!!! ToDo
    a.installTranslator(&editTranslator);


    a.setQuitOnLastWindowClosed(false);
    MainWindow w;
    login l;
    l.show();



    //w.show();

    return a.exec();
}
