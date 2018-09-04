/*
 * this class to show a dialig to admin of the system
 * throw this dialog he will make some settings to the system
 * which will which hour of day the doctor will start interviews with patients
 * and how long will be the one interview
 * admin can skip them to keep every thing as was in the first time;
*/
#ifndef CLINICDAYTIME_H
#define CLINICDAYTIME_H

#include <QDialog>
#include <QtCore>
#include <QDebug>
#include <QSettings>
#include <QPainter>
#include <QPaintEvent>
#include <QStringList>
#include <QString>
#include <QMessageBox>
#include "patients_management.h"

namespace Ui {
class ClinicDayTime;
}

class ClinicDayTime : public QDialog
{
    Q_OBJECT

public:
    explicit ClinicDayTime(QWidget *parent = 0);
    void paintEvent(QPaintEvent *e);
    ~ClinicDayTime();

private slots:
    void on_save_settings_button_pressed();

    void on_save_settings_button_released();

    void on_cancel_setting_button_pressed();

    void on_cancel_setting_button_released();

    void on_quarter_radio_clicked();

    void on_half_radio_clicked();

    void on_one_hour_radio_clicked();

    void on_save_settings_button_clicked();

    void on_choose_hour_combo_currentIndexChanged(int index);

    void on_cancel_setting_button_clicked();

private:
    Ui::ClinicDayTime *ui;
    QString interview_time = NULL; //it's value will be "0.25" OR "0.5" OR "1"
    QString day_begining = NULL;
  //  patients_management *p;
    QSettings *app_setting;

    void save_system_settings();

};

#endif // CLINICDAYTIME_H
