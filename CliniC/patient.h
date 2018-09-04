#ifndef PATIENT_H
#define PATIENT_H

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QString>
#include <QDebug>
#include <QtSql>
#include <QSqlQueryModel>

class patient
{

private:
    QString id;
    QString name;
    QString phone_number;
    QString detailed_rendezvous;
    QString database_name;
    QSqlDatabase db;
    bool connected_to_database;
    bool is_daily_patient;
    int patient_number;


    void connect_to_database();


public:
    patient();
    patient(QString name, QString phone_number, QString detailed_rendezvous,int patient_number, bool is_daily_patient);

    void set_patient_id(QString id);
    void set_patine_name(QString name);
    void set_patient_phone_number(QString phone_number);
    void set_patient_detailed_rendezvous(QString detailed_rendezvous);
    patient return_next_patient(QString current_patient_id);
    bool delete_current_patient(QString id);


    QString get_patient_id();
    QString get_patient_name();
    QString get_patient_phone_number();
    QString get_patient_detailed_rendezvous();
    int get_booked_patient_number();
    int patients_number_in_table();
    int booked_patients_number_in_selected_date(QString date);
    bool add_new_patient();
    bool empty_rest_booked_patients_table(QString current_date);
    bool empty_rest_daily_patients_table();

    QSqlQueryModel *fetch_all_today_patients();
    QSqlQueryModel *fetch_all_today_booked_patients(QString today_date);
};

#endif // PATIENT_H
