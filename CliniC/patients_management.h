#ifndef PATIENTS_MANAGEMENT_H
#define PATIENTS_MANAGEMENT_H

#include <QStyle>
#include <QPainter>
#include <QMainWindow>
#include <QMessageBox>
#include "mainwindow.h"
#include <QDesktopWidget>
#include "dailypatientinfo.h"
#include <QPaintEvent>
#include <QString>
#include <QStyle>
#include "clinicdaytime.h"
#include <QSettings>
#include "patient.h"
#include "showdailypatients.h"
#include <bookcommingappointment.h>

namespace Ui {
class patients_management;
}

class patients_management : public QMainWindow
{
    Q_OBJECT

public:
    explicit patients_management(QWidget *parent = 0);
    ~patients_management();

    void paintEvent(QPaintEvent *e);

private slots:
    void on_add_patient_today_button_clicked();

    void log_out();

    void display_next_patient();

    void on_show_today_patients_button_clicked();

    void on_empty_patient_table_button_clicked();

    void on_book_patient_button_clicked();

    void on_show_today_booked_patients_button_clicked();

private:
    Ui::patients_management *ui;
    QSettings *app_setting;
    QString current_patient_id = "0";

    QString prepare_lable(QString current_patient_id);

    void set_log_out_statues(bool state);
    void save_last_patient_number_setting(QString num);
    QString return_last_patient_number_setting();
    void free_tables();



};

#endif // PATIENTS_MANAGEMENT_H
