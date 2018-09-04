#include "mainwindow.h"
#include <QApplication>
#include "dailypatientinfo.h"
#include <clinicdaytime.h>
#include <QSettings>
#include <QDebug>
#include <patient.h>
#include "bookcommingappointment.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

//    BookCommingAppointment w;
//    w.show();

    QSettings *app_setting = new QSettings("CLINIC_SYSTEM", "day_time");
    app_setting -> beginGroup("login_statues");
    bool logout = app_setting -> value("login",false).toBool();
    app_setting->endGroup();

    qDebug() << logout;
    if(!logout){
      patients_management *p = new patients_management;
        p -> show();
    }else{
        qDebug() << logout;
        MainWindow *w = new MainWindow;
        w -> show();
    }

    return a.exec();
}
