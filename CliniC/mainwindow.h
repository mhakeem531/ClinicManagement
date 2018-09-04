#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QString>
#include <QPainter>
#include <QStyle>
#include <QDesktopWidget>
#include <QMessageBox>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>
#include <QtSql>
#include "admins_management.h"
#include "deleteadmindialog.h"
#include "patients_management.h"
#include "clinicdaytime.h"
#include <QSettings>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);

    ~MainWindow();

private slots:
    void on_login_current_admin_button_clicked();

    void on_setup_new_admin_button_clicked();

    void on_delete_current_admin_button_clicked();

    void on_quite_button_clicked();

private:
    Ui::MainWindow *ui;
    admins_management *admin;
    QString doctor_name;
    QSettings *app_setting;

    void login_current_admin(QString username, QString password);
    void setup_new_admin(QString username, QString password);
    void settings_or_patients_managment();
    void set_log_in_statues();


};

#endif // MAINWINDOW_H
