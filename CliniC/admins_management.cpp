#include "admins_management.h"

admins_management::admins_management()
{
    this -> connect_to_database();
}

admins_management::admins_management(QString username, QString password)
{
    this -> connect_to_database();

    this -> current_admin_username = username;
    this -> current_admin_password = password; 
}

void admins_management::set_current_admin_username(QString username)
{
    this -> current_admin_username = username;
}

void admins_management::set_current_admin_password(QString password)
{
    this -> current_admin_password = password;
}

void admins_management::set_new_admin_username(QString username)
{
    this -> new_admin_username = username;
}

void admins_management::set_new_admin_password(QString password)
{
    this -> new_admin_password = password;
}


QString admins_management::get_current_admin_username()
{
    return this -> current_admin_username;
}

QString admins_management::get_current_admin_password()
{
    return this -> current_admin_password;
}

QString admins_management::get_new_admin_username()
{
    return this -> new_admin_username;
}

QString admins_management::get_new_admin_password()
{
    return this -> new_admin_password;
}

bool admins_management::add_new_admin()
{
    if (this -> connected_to_database)
    {
        QSqlQuery query;
        query.prepare("INSERT INTO admin(username, password) "
                      "VALUES (:username, :password)");
        query.bindValue(":username", this->get_new_admin_username());
        query.bindValue(":password", this->get_new_admin_password());
        return query.exec();
    }
    else
    {
        return false;
    }




}

bool admins_management::delete_current_admin()
{

    if (this -> connected_to_database)
    {
        QSqlQuery query;
        query.prepare("DELETE FROM admin WHERE username = ? AND password = ?");
        query.addBindValue(this -> get_current_admin_username());
        query.addBindValue(this -> get_current_admin_password());
        query.exec();
        if(query.numRowsAffected() > 0){
            return true;
        }
    }
    return false;
}

void admins_management::connect_to_database()
{
    this -> database_name = "__clinic_db__.db";
    this -> db = QSqlDatabase::addDatabase("QSQLITE");
    this -> db.setDatabaseName(this -> database_name);
    this -> connected_to_database = db.open();
}

bool admins_management::login_current_admin()
{
    if(this -> connected_to_database){
        qDebug() << "from login_current_admin";
        qDebug() << this -> get_current_admin_username();
        qDebug() << this -> get_current_admin_password();

        QString query_statement = "SELECT username, password FROM admin WHERE "
                                  "username = '" + this -> get_current_admin_username()
                + "' AND password = '" + this -> get_current_admin_password()
                + "';";
        if (this -> connected_to_database)
        {
            QSqlQuery query;
            query.exec(query_statement);
            if (query.first())
            {
                return true;
            }
        }
    }
    return false;
}

