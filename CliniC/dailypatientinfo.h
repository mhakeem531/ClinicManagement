#ifndef DAILYPATIENTINFO_H
#define DAILYPATIENTINFO_H

#include <QDialog>
#include <QDesktopWidget>
#include <QMessageBox>
#include <QPainter>
#include <QPaintEvent>
#include <QDesktopWidget>
#include <patient.h>
#include <QSettings>
#include <QtCore>
#include <QGraphicsOpacityEffect>
namespace Ui {
class DailyPatientInfo;
}

class DailyPatientInfo : public QDialog
{
    Q_OBJECT

public:
    explicit DailyPatientInfo(QWidget *parent = 0);
    ~DailyPatientInfo();
   void paintEvent(QPaintEvent *e);
private slots:
    void on_cancel_add_new_patient_button_clicked();

    void on_add_new_daily_patient_button_clicked();

private:
    Ui::DailyPatientInfo *ui;
    void setup_ui_component();
    void get_new_patient_info();
    bool prepare_and_insert_new_daily_patient(QString name, QString phone_number, QString date_time);
    QString calculate_time();

    patient *new_patient;
    QSettings *app_setting;
    QString patient_appointment;


};

#endif // DAILYPATIENTINFO_H
