#include "dailypatientinfo.h"
#include "ui_dailypatientinfo.h"

DailyPatientInfo::DailyPatientInfo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DailyPatientInfo)
{
    ui -> setupUi(this);
    this -> setFixedSize(this -> size());
    this -> new_patient = new patient();
    this -> app_setting = new QSettings("CLINIC_SYSTEM", "day_time");




    this -> patient_appointment = this -> calculate_time();
    this -> setup_ui_component();

}

DailyPatientInfo::~DailyPatientInfo()
{
    delete ui;
}

void DailyPatientInfo::paintEvent(QPaintEvent *e)
{
    QPainter painter(this);
    painter.drawPixmap(0, 0, QPixmap(":/images/patient_info_back.jpg").scaled(size()));
    QWidget::paintEvent(e);

}

void DailyPatientInfo::on_cancel_add_new_patient_button_clicked()
{
    this -> hide();
}

void DailyPatientInfo::on_add_new_daily_patient_button_clicked()
{
    this -> get_new_patient_info();
}

void DailyPatientInfo::setup_ui_component()
{
    QGraphicsOpacityEffect *eff = new QGraphicsOpacityEffect(this);
    this -> setGraphicsEffect(eff);
    QPropertyAnimation *a = new QPropertyAnimation(eff,"opacity");
    a->setDuration(1520);
    a->setStartValue(0);
    a->setEndValue(1);
    a->setEasingCurve(QEasingCurve::InBack);
    a->start(QPropertyAnimation::DeleteWhenStopped);


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

    this -> ui -> daily_patient_phone_number_line_edit -> setValidator(new QDoubleValidator(0, 100, 2, this));
    this -> ui -> daily_patient_phone_number_line_edit -> setMaxLength(12);
    ui -> complete_time_label -> setText(this -> patient_appointment);

   // this -> setStyleSheet("background-color: rgb(46, 52, 54);");

    /**
     * to set background image
     */
   this -> setStyleSheet("#centralWidget {  border-image: url(:/images/clinic_wellcom.jpg) 0 0 0 0 stretch stretch;}");
    /**
     * done
     */


//    QDateTime date = QDateTime::currentDateTime();
//    this -> ui -> dateTimeEdit -> setDateTime(date);
//    this -> ui -> dateTimeEdit -> setDisplayFormat("dd / MM / yyyy - hh:mm AP");
}

void DailyPatientInfo::get_new_patient_info()
{
    QString name = this -> ui -> daily_patient_name_line_edit -> text();
    QString phone = this -> ui -> daily_patient_phone_number_line_edit -> text();
   // QDateTime x = this -> ui -> dateTimeEdit ->dateTime();
//    QDate da = x.date();
//    QTime ti = x.time();
    //QString rendezvous =  x.toString("dd/MM/yyyy:hh:mm");

    if(name.isEmpty() || phone.isEmpty()){
        QMessageBox::warning(this,
                                 "ERROR",
                                 "ENTER ALL REQUIRED INFO\n " ,
                                 QMessageBox::Ok);
    }else if(phone.size() < 11 || phone.size() > 13 || name.size() < 6){
        QMessageBox::warning(this,
                                 "ERROR",
                                 "ENTER CORRECT INFO\n " ,
                                 QMessageBox::Ok);
    }
    else{
        if (this -> prepare_and_insert_new_daily_patient(name, phone, this -> patient_appointment)){

            QMessageBox::information(this,
                                     "new one", "name = " + name
                                     + "\n"
                                     + "phone = " + phone
                                     + "\n "
                                     + "rendezvous = " + this -> patient_appointment
                                     + "\n " ,
                                     QMessageBox::Ok);
             this -> hide();
        }else{
            QMessageBox::warning(this, "add again","add again" ,QMessageBox::Ok);
        }

    }
}

bool DailyPatientInfo::prepare_and_insert_new_daily_patient(QString name, QString phone_number, QString date_time)
{
    this -> new_patient -> set_patine_name(name);
    this -> new_patient -> set_patient_phone_number(phone_number);
    this -> new_patient -> set_patient_detailed_rendezvous(date_time);
    return this -> new_patient -> add_new_patient();

}

QString DailyPatientInfo::calculate_time()
{
    int num_in_table = this -> new_patient -> patients_number_in_table();
    this -> app_setting -> beginGroup("rendezvous");
    double interview_time =  this -> app_setting -> value("INTERVIEW_TIME").toDouble();
    double beginning_clock = this -> app_setting -> value("DAY_BEGINNING").toDouble();
    qDebug() << "DailyPatientInfo::calculate_time";
    qDebug() << "interview_time = " << interview_time;
    qDebug() << "beginning_clock = " << beginning_clock;
    qDebug() << "num_in_table = " << num_in_table;

    this -> app_setting->endGroup();

    for(int i = 1; i <= num_in_table; i++){
        beginning_clock += interview_time;
    }

    if(beginning_clock > 12){ beginning_clock -= 12; }
    double secs = beginning_clock * 60.0 * 60.0;

    QTime time_for_patient(0,0);

    time_for_patient = time_for_patient.addSecs(int(secs));

    QString today_date = QDate::currentDate().toString("yyyy-MM-dd");

    QString x = today_date + " :: " + time_for_patient.toString();
    qDebug() << "DailyPatientInfo::calculate_time appointemtn = " << x;
    qDebug() << "==================================";
    return x;

}


