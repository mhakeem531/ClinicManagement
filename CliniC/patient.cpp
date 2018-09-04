#include "patient.h"

void patient::connect_to_database()
{
    this -> database_name = "__clinic_db__.db";
    this -> db = QSqlDatabase::addDatabase("QSQLITE");
    this -> db.setDatabaseName(this -> database_name);
    this -> connected_to_database = this -> db.open();
    this -> is_daily_patient = true;
}

patient::patient()
{
    this -> connect_to_database();
}

patient::patient( QString name, QString phone_number, QString detailed_rendezvous,int patient_number, bool is_daily_patient)
{
    this -> connect_to_database();

    //this -> id = id;
    this -> name = name;
    this -> phone_number = phone_number;
    this -> detailed_rendezvous = detailed_rendezvous;
    this -> patient_number = patient_number;
    this -> is_daily_patient = is_daily_patient;
}

void patient::set_patient_id(QString id)
{
    this -> id = id;
}

void patient::set_patine_name(QString name)
{
    this -> name = name;
}

void patient::set_patient_phone_number(QString phone_number)
{
    this -> phone_number = phone_number;
}

void patient::set_patient_detailed_rendezvous(QString detailed_rendezvous)
{
    this -> detailed_rendezvous = detailed_rendezvous;
}

patient patient::return_next_patient(QString current_patient_id)
{
    patient p;
    //this -> connected_to_database = this -> db.open();
     qDebug() << "form patient.cpp - fetch new comming one current_patient_id " + current_patient_id;
    if (this -> connected_to_database){
        qDebug() << "form patient.cpp - fetch new comming one";
        QSqlQuery query;
        query.prepare("SELECT * FROM daily_patients WHERE id > " + current_patient_id + " LIMIT 1;");
        query.exec();
       if(query.next()){
           qDebug() << "form patient.cpp - fetch new comming one-after execute";
           QString patient_number  = query.value(0).toString();
           QString patient_name = query.value(1).toString();
           QString patient_phone = query.value(2).toString();
           QString patient_appointment = query.value(3).toString();

           patient p;
           p.set_patient_id(patient_number);
           p.set_patine_name(patient_name);
           p.set_patient_phone_number(patient_phone);
           p.set_patient_detailed_rendezvous(patient_appointment);
           db.close();
           return p;
       }
    }

    //this -> db.close();
    return p;
}

bool patient::delete_current_patient(QString id)
{
    this -> connected_to_database = db.open();
    if (this -> connected_to_database){
        QSqlQuery query;
        query.prepare("DELETE FROM daily_patients WHERE id = ?");
        query.addBindValue(id);
        query.exec();
        if(query.numRowsAffected() > 0){
            db.close();
            return true;
        }
    }
    db.close();
    return false;
}

QString patient::get_patient_id()
{
    return  this -> id;
}

QString patient::get_patient_name()
{
    return this -> name;
}

QString patient::get_patient_phone_number()
{
    return this -> phone_number;
}

QString patient::get_patient_detailed_rendezvous()
{
    return this -> detailed_rendezvous;
}

int patient::get_booked_patient_number()
{
    return this -> patient_number;
}

int patient::patients_number_in_table()
{
    this -> connected_to_database = db.open();
    if (this -> connected_to_database){
        QSqlQuery query;
        query.prepare("SELECT COUNT(*) FROM daily_patients;");
        query.exec();
       if(query.next()){
           int num = query.value(0).toInt();
           //this -> db.close();
           return num;
       }
    }
    db.close();
    return 0;
}

int patient::booked_patients_number_in_selected_date(QString date)
{
    int number = 0;
    this -> connected_to_database = db.open();
    qDebug() << "form patient.cpp - booked_patients_number_in_selected_date ";
    if (this -> connected_to_database){
        qDebug() << "form patient.cpp - booked_patients_number_in_selected_date";
        QSqlQuery query;
      //  SELECT COUNT(*) FROM booked_patients WHERE _date == '2018/09/03';
        query.prepare("SELECT COUNT(*) FROM booked_patients WHERE _date == '" + date + "';");
        query.exec();
       if(query.next()){
           number = query.value(0).toInt();
           this -> db.close();
           return number;
       }
    }
    db.close();
    return 0;
}

bool patient::add_new_patient()
{
    this -> connected_to_database = this -> db.open();
    if(this -> is_daily_patient){
        //insert patient for this day

        if (this -> connected_to_database){
            QSqlQuery query;
            query.prepare("INSERT INTO daily_patients(name, phone_number, time_date) "
                          "VALUES (:name, :phone_number, :date)");
            query.bindValue(":name", this -> get_patient_name());
            query.bindValue(":phone_number", this -> get_patient_phone_number());
            query.bindValue(":date", this -> get_patient_detailed_rendezvous());

            bool x = query.exec();
            this -> db.close();
            return x;
        }
        else{
            this -> db.close();
            return false;
        }
    }else{
        qDebug() << "form patient.cpp - add_new_patient booked";
        qDebug() << this -> get_patient_name();
        qDebug() << this -> phone_number;
        qDebug() << this -> detailed_rendezvous;
        qDebug() << this -> patient_number;
        qDebug() << "=================**=====================";
        //TODO insert patient for comming rendezvous

        if (this -> connected_to_database){
            QSqlQuery query;
            query.prepare("INSERT INTO booked_patients(name, phone_number, _date, number) "
                          "VALUES (:name, :phone_number, :date, :number);");
            query.bindValue(":name", this -> get_patient_name());
            query.bindValue(":phone_number", this -> get_patient_phone_number());
            query.bindValue(":date", this -> get_patient_detailed_rendezvous());
            query.bindValue(":number", QString::number(this -> get_booked_patient_number()));

            bool x = query.exec();
            this -> db.close();
            return x;
        }
        else{
            this -> db.close();
            return false;
        }
    }
}

bool patient::empty_rest_daily_patients_table()
{
    this -> connected_to_database = this -> db.open();
    if (this -> connected_to_database){
        QSqlQuery query;
        query.prepare("DELETE FROM 'daily_patients';");
        qDebug() << "bool patient::empty_rest_daily_patients_table0";
        query.exec();
        qDebug() << "bool patient::empty_rest_daily_patients_table1";
        if(query.numRowsAffected() > 0){
            qDebug() << "bool patient::empty_rest_daily_patients_table";
            qDebug() << query.numRowsAffected();
            qDebug() << "===========================";
            query.prepare("UPDATE SQLITE_SEQUENCE SET SEQ=0 WHERE NAME='daily_patients';");
            query.exec();
            qDebug() << "bool patient::empty_rest_daily_patients_table";
            db.close();
            return true;
        }
    }

    this -> db.close();
    return false;
}


bool patient::empty_rest_booked_patients_table(QString current_date)
{
    this -> connected_to_database = this -> db.open();
    if (this -> connected_to_database){
        QSqlQuery query;
        query.prepare("DELETE FROM 'booked_patients' WHERE _date == '" + current_date + "';");
        qDebug() << "bool patient::empty_rest_booked_patients_table";
        query.exec();
        qDebug() << "bool patient::empty_rest_booked_patients_table";
        if(query.numRowsAffected() > 0){
            qDebug() << "bool patient::empty_rest_daily_patients_table";
            qDebug() << query.numRowsAffected();
            qDebug() << "===========================";
//            query.prepare("UPDATE SQLITE_SEQUENCE SET SEQ=0 WHERE NAME='booked_patients';");
//            query.exec();
//            qDebug() << "bool patient::empty_rest_booked_patients_table";
            db.close();
            return true;
        }
    }

    this -> db.close();
    return false;
}

QSqlQueryModel *patient::fetch_all_today_patients()
{
    QSqlQueryModel *model = new QSqlQueryModel();
    this -> connected_to_database = this -> db.open();
    QSqlQuery query;
    query.prepare("SELECT * FROM daily_patients");
    query.exec();
    model -> setQuery(query);
    this -> db.close();
    return  model;
}

QSqlQueryModel *patient::fetch_all_today_booked_patients(QString today_date)
{
    qDebug() << "fetch_all_today_booked_patients";

    QSqlQueryModel *model = new QSqlQueryModel();
    this -> connected_to_database = this -> db.open();
    QSqlQuery query;
    query.prepare("SELECT * FROM booked_patients WHERE _date == '" + today_date + "';");
    query.exec();
     qDebug() << "numRowsAffected" << query.numRowsAffected() << " date = " << today_date;
     qDebug() << "=======================";
    model -> setQuery(query);
    this -> db.close();
    return  model;
}
