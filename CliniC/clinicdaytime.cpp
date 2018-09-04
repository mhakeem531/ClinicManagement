#include "clinicdaytime.h"
#include "ui_clinicdaytime.h"

ClinicDayTime::ClinicDayTime(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ClinicDayTime)
{
    ui->setupUi(this);

    this -> app_setting = new QSettings("CLINIC_SYSTEM", "day_time");


    this -> setWindowTitle("Clinic Date Time");
    this -> setFixedSize(size());
    /**
     * to center a window on the screen
     */
    this -> setGeometry(
        QStyle::alignedRect(
            Qt::LeftToRight,
            Qt::AlignCenter,
            this -> size(),
            qApp->desktop() -> availableGeometry()));
    /**
     * done
     */

    ui-> choose_hour_combo -> setStyleSheet("background-color: rgb(134, 89, 45); \
                                          color: rgb(51, 51, 0); \
                                          border-color: rgb(102, 20, 0); \
                                          selection-background-color: rgb(255, 255, 0);");



    this -> ui -> quarter_radio -> setChecked(true);
    this -> interview_time = "0.25";
    QStringList list;
    list << "09 AM";
    list << "10 AM";
    list << "11 AM";
    list << "12 PM";
    list << "01 PM";
    list << "02 PM";
    list << "03 PM";
    list << "04 PM";
    list << "05 PM";
    list << "06 PM";
    list << "07 PM";
    list << "08 PM";
    list << "09 PM";


    ui -> choose_hour_combo ->addItems(list);
    ui -> choose_hour_combo -> setCurrentIndex(7);
    this -> day_begining = "4";

}

void ClinicDayTime::paintEvent(QPaintEvent *e)
{
    QPainter painter(this);
    painter.drawPixmap(0, 0, QPixmap(":/images/settings_back.jpg").scaled(size()));
    QWidget::paintEvent(e);
}

ClinicDayTime::~ClinicDayTime()
{
    delete ui;
}

void ClinicDayTime::on_save_settings_button_pressed()
{

    this -> ui -> save_settings_button -> setStyleSheet("border-radius: 10px;\
                                                        background-color: rgb(230, 138, 0);\
                                                        color: rgb(166, 9, 9);");
}

void ClinicDayTime::on_save_settings_button_released()
{
    this -> ui -> save_settings_button -> setStyleSheet("border-radius: 10px;\
                                                        background-color: rgba(255, 245, 3, 112);\
                                                        color: rgb(166, 9, 9);");
}

void ClinicDayTime::on_cancel_setting_button_pressed()
{
    this -> ui -> cancel_setting_button -> setStyleSheet("border-radius: 10px;\
                                                        background-color: rgb(230, 138, 0);\
                                                        color: rgb(166, 9, 9);");
}

void ClinicDayTime::on_cancel_setting_button_released()
{
    this -> ui -> cancel_setting_button -> setStyleSheet("border-radius: 10px;\
                                                        background-color: rgba(255, 245, 3, 112);\
                                                        color: rgb(166, 9, 9);");
}

void ClinicDayTime::on_quarter_radio_clicked()
{
    this -> interview_time = "0.25";
}

void ClinicDayTime::on_half_radio_clicked()
{
     this -> interview_time = "0.5";
}

void ClinicDayTime::on_one_hour_radio_clicked()
{
     this -> interview_time = "0.1";
}

void ClinicDayTime::on_choose_hour_combo_currentIndexChanged(int index)
{
   switch(index){
       case 0:
       this -> day_begining = "9";
       break;
   case 1:
       this -> day_begining = "10";
       break;
   case 2:
       this -> day_begining = "11";
       break;
   case 3:
       this -> day_begining = "12";
       break;
   case 4:
       this -> day_begining = "1";
       break;
   case 5:
       this -> day_begining = "2";
       break;
   case 6:
       this -> day_begining = "3";
       break;
   case 7:
       this -> day_begining = "4";
       break;
   case 8:
       this -> day_begining = "5";
       break;
   case 9:
       this -> day_begining = "6";
       break;
   case 10:
       this -> day_begining = "7";
       break;
   case 11:
       this -> day_begining = "8";
       break;
   case 12:
       this -> day_begining = "9";
       break;
   default:
       this -> day_begining = "4";
       break;

   }
}

void ClinicDayTime::on_save_settings_button_clicked()
{
    if(this -> day_begining != NULL && this -> interview_time != NULL)
    QMessageBox::information(this, "DONE", "Interview Time = " + this -> interview_time
                                        + "\n Day Will Begine At : " + this -> day_begining,
                         QMessageBox::Ok);

    this -> save_system_settings();

    patients_management *p = new patients_management;
    this -> hide();
    p -> show();
}

void ClinicDayTime::on_cancel_setting_button_clicked()
{
    patients_management *p = new patients_management;
    this -> hide();
    p -> show();
}

void ClinicDayTime::save_system_settings()
{
    this -> app_setting -> beginGroup("rendezvous");
    this -> app_setting -> setValue("INTERVIEW_TIME", this -> interview_time);
    this -> app_setting -> setValue("DAY_BEGINNING", this -> day_begining);
    this -> app_setting->endGroup();
}
