#ifndef ADMINS_MANAGEMENT_H
#define ADMINS_MANAGEMENT_H
#include <QString>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>
#include <QtSql>

class admins_management
{
public:
    admins_management();
    admins_management(QString username, QString password);

    void set_current_admin_username(QString username);
    void set_current_admin_password(QString password);
    void set_new_admin_username(QString username);
    void set_new_admin_password(QString password);

    QString get_current_admin_username();
    QString get_current_admin_password();
    QString get_new_admin_username();
    QString get_new_admin_password();

    //dfydfghy
    bool login_current_admin();
    bool add_new_admin();
    bool delete_current_admin();

private:
    QString current_admin_username;
    QString current_admin_password;
    bool connected_to_database;
    QString new_admin_username;
    QString new_admin_password;
    QString database_name;
    QSqlDatabase db;


    void connect_to_database();

};

#endif // ADMINS_MANAGEMENT_H
