#include "mainwindow.h"
#include "cod_cores.h"
#include "resistorcalc.h"
#include "ui_mainwindow.h"
#include "user_login.h"
#include <QObject>
#include "add_component.h"
#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setStyle("fusion");

    User_Login w;
    w.show();
    return a.exec();
}



