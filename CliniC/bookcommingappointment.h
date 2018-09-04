#ifndef BOOKCOMMINGAPPOINTMENT_H
#define BOOKCOMMINGAPPOINTMENT_H

#include <QDialog>
#include <QDesktopWidget>
#include <QPaintEvent>
#include <QPainter>
#include <QtCore>
#include "patients_management.h"
#include <QString>
#include "patient.h"
#include <QGraphicsOpacityEffect>
namespace Ui {
class BookCommingAppointment;
}

class BookCommingAppointment : public QDialog
{
    Q_OBJECT

public:
    explicit BookCommingAppointment(QWidget *parent = 0);
    void paintEvent(QPaintEvent *e);
    ~BookCommingAppointment();

private slots:
    void on_add_new_booked_patient_button_pressed();

    void on_add_new_booked_patient_button_released();

    void on_cancel_add_new_patient_button_pressed();

    void on_cancel_add_new_patient_button_released();
    void setDateLabel(QDate);

    void on_cancel_add_new_patient_button_clicked();

    void on_add_new_booked_patient_button_clicked();
    void set_patient_number_label(QDate date);

private:
    Ui::BookCommingAppointment *ui;
    int patient_number;

    void setup_ui_components();
    bool check_enterd_data(QString name, QString phone, QString data);
    void clear_ui();
};

#endif // BOOKCOMMINGAPPOINTMENT_H
