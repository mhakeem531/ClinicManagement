#ifndef SHOWDAILYPATIENTS_H
#define SHOWDAILYPATIENTS_H

#include <QDialog>
#include <QSqlQueryModel>
#include "patient.h"
namespace Ui {
class ShowDailyPatients;
}

class ShowDailyPatients : public QDialog
{
    Q_OBJECT

public:
    //added bool --->> true : display daily patients, false : display booked patient for today
    explicit ShowDailyPatients(QWidget *parent = 0, bool today_or_not = true);
    ~ShowDailyPatients();
    //void resizeEvent(QResizeEvent *event)

private slots:
    void on_pushButton_clicked();

private:
    Ui::ShowDailyPatients *ui;
    bool today_or_booked;

    void load_data_to_table();
};

#endif // SHOWDAILYPATIENTS_H
