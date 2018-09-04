#include "patients_management.h"
#include "ui_patients_management.h"
#include "mainwindow.h"

patients_management::patients_management(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::patients_management)
{
    ui->setupUi(this);
    this -> setWindowTitle("patient managment");
    this -> setFixedSize(size());


    this -> app_setting = new QSettings("CLINIC_SYSTEM", "day_time");
    this -> current_patient_id = this -> return_last_patient_number_setting();

   // this -> prepare_lable(this -> current_patient_id);

    /**
     * to center a window on the screen
     *
     * background-color: rgba(251, 224, 10, 128);
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
    connect(this -> ui -> label_2, SIGNAL(clicked()), this, SLOT(log_out()));
    connect(this -> ui -> next_patient_label, SIGNAL(clicked()), this, SLOT(display_next_patient()));

}

patients_management::~patients_management()
{
    delete ui;
}

void patients_management::paintEvent(QPaintEvent *e)
{
    QPainter painter(this);
    painter.drawPixmap(0, 0, QPixmap(":/images/wooden_back1.jpg").scaled(size()));
    QWidget::paintEvent(e);
}

void patients_management::on_add_patient_today_button_clicked()
{
    DailyPatientInfo *w = new DailyPatientInfo(this);
    w -> setModal(true);
    w -> show();
}

void patients_management::log_out()
{
    int x =  QMessageBox::question(
                this,
                tr("Log out"),
                tr("are you sure!"),
                QMessageBox::Yes |
                QMessageBox::No );
    if(x == QMessageBox::Yes){

        patient p;
        if(p.patients_number_in_table() <= 0){
            this -> hide();
            MainWindow *w = new MainWindow();
            w -> show();
            set_log_out_statues(true);
            save_last_patient_number_setting("0");
        }else{
            QMessageBox::information(this, "attention", "go and rest tables first", QMessageBox::Ok);
        }
    }
    else {set_log_out_statues(false);}
}

void patients_management::set_log_out_statues(bool state){
    this -> app_setting -> beginGroup("login_statues");
    this -> app_setting -> setValue("login", state);
    this -> app_setting->endGroup();
}

void patients_management::save_last_patient_number_setting(QString num)
{
    this -> app_setting -> beginGroup("last_patient_number");
    this -> app_setting -> setValue("LAST_PATIENT", num);
    qDebug() << " patients_management::save_last_patient_number_setting ";
    qDebug() << num;
    qDebug() << "==============";
    this -> app_setting->endGroup();
}

QString patients_management::return_last_patient_number_setting()
{
    this -> app_setting -> beginGroup("last_patient_number");
    QString num = this -> app_setting -> value("LAST_PATIENT","0").toString();
    qDebug() << "patients_management::return_last_patient_number_setting";
    qDebug() << num;
    this -> app_setting->endGroup();
    return num;
}



void patients_management::display_next_patient()
{
    /**
     * this function will put data of next patient to label and dalete the current one from data base by its id(number)
     */
    qDebug() << "current_patient_id-before " ;
    qDebug() << this -> current_patient_id;

   QString patient_id =  this -> prepare_lable(this -> current_patient_id);
   if(!patient_id.isEmpty()) { current_patient_id = patient_id; }

   else { this -> save_last_patient_number_setting(current_patient_id);}

   qDebug() << "from patient_managment.cpp-display_next_patient";
   qDebug() << "patient_id ";
   qDebug() << patient_id;
   qDebug() << "current_patient_id " ;
   qDebug() << current_patient_id;

  /* patient p;
  if(p.delete_current_patient(currnet_patient_id)){
      QMessageBox::information(this, "good", "patient deleted", QMessageBox::Ok);
  }*/

}

QString patients_management::prepare_lable(QString current_patient_id)
{
    patient p;

    p = p.return_next_patient(current_patient_id);
    QString name = p.get_patient_name();
    QString phone = p.get_patient_phone_number();
    QString number = p.get_patient_id();
    QString time = p.get_patient_detailed_rendezvous();

    QString x = "<html><head/><body>"
                "<p align=\"center\">"
                "<span style=\" font-size:22pt; font-weight:600; "
                "font-style:italic; text-decoration: underline; "
                "color:#ffffff;\">patient Details</span>"
                "</p>"
                "<p align=\"center\"><span style=\" font-size:22pt; "
                "font-weight:600; font-style:italic; color:#5a0b98;\">"
                "name</span><span style=\" font-size:22pt; "
                "font-weight:600; color:#cc0000;\"> : " + name + "</span>"
                "</p>"
                "<p align=\"center\">"
                "<span style=\" font-size:22pt; font-weight:600; font-style:italic; color:#5a0b98;\">phone</span>"
                "<span style=\" font-size:22pt; font-weight:600; color:#cc0000;\"> : " + phone + "</span>"
                "</p>"
                "<p align=\"center\"><span style=\" font-size:22pt; font-weight:600; "
                "font-style:italic; color:#5a0b98;\">time</span>"
                "<span style=\" font-size:22pt; font-weight:600; color:#cc0000;\"> : </span>"
                "<span style=\" font-size:22pt; font-weight:600; text-decoration: underline; color:#cc0000;\">" + time + "</span>"
                "</p>"
                "<p align=\"center\"><span style=\" font-size:22pt; font-weight:600; "
                "font-style:italic; color:#5a0b98;\">num</span>"
                "<span style=\" font-size:22pt; font-weight:600; color:#cc0000;\"> : </span>"
                "<span style=\" font-size:22pt; font-weight:600; text-decoration: underline; color:#cc0000;\">" + number + "</span>"
                "</p></body></html>";
    if(!number.isEmpty()) { this -> ui -> patient_details_label -> setText(x); }
    else {
        x = "<html><head/><body>"
            "<p align=\"center\">"
            "<span style=\" font-size:22pt; font-weight:600; "
            "font-style:italic; text-decoration: underline; "
            "color:#ffffff;\">patient Details</span>"
            "</p>"
            "<p align=\"center\"><span style=\" font-size:22pt; "
            "font-weight:600; color:#cc0000;\"> : DONE </span>"
            "</p></body></html>";
        this -> ui -> patient_details_label -> setText(x);
    }

    return number;
}

void patients_management::on_show_today_patients_button_clicked()
{
    ShowDailyPatients *w = new ShowDailyPatients(this);
    w -> setModal(true);
    w -> show();
}

void patients_management::on_empty_patient_table_button_clicked()
{
    //TODO here delete data from daily patient table and set PK to begine from 1;
    this -> free_tables();
//    QMessageBox msgBox;
//    msgBox.setText(tr("select patients type to free their data!"));
//    QAbstractButton* daily_button = msgBox.addButton(tr("daily patients!"), QMessageBox::YesRole);
//    QAbstractButton* booked_button = msgBox.addButton(tr("booked patients!"), QMessageBox::NoRole);

//    msgBox.exec();

//    if (msgBox.clickedButton() == daily_button) {
//        patient p;
//        if(p.patients_number_in_table() > 0){
//            if(p.empty_rest_daily_patients_table()) { QMessageBox::information(this, "DONE", "DONE", QMessageBox::Ok);
//        }
//    }
//    else if (msgBox.clickedButton() == booked_button) {

//    }else {

//        }
//    }
}

void patients_management::free_tables()
{
    //TODO here add another condtion to check if in booked table any rows to delete them also
    patient p;
    if(p.patients_number_in_table() > 0 || p.booked_patients_number_in_selected_date(QDate::currentDate().toString("yyyy/MM/dd")) > 0){

        QMessageBox msgBox;
        msgBox.setText(tr("select patients type to free their data!"));
        QAbstractButton* daily_button = msgBox.addButton(tr("daily patients!"), QMessageBox::YesRole);
        QAbstractButton* booked_button = msgBox.addButton(tr("booked patients!"), QMessageBox::NoRole);
        QAbstractButton* cancel = msgBox.addButton(tr("Cancel"), QMessageBox::RejectRole);
        msgBox.setStandardButtons(0);
        msgBox.exec();

        if (msgBox.clickedButton() == daily_button) {

                qDebug() << "patients_management::free_tables";
                qDebug() << p.patients_number_in_table();

                if(p.empty_rest_daily_patients_table()) {
                    QMessageBox::information(this, "DONE", "DONE", QMessageBox::Ok);
                    save_last_patient_number_setting("0");
                    this -> current_patient_id = "0";
                    prepare_lable("0");
                }

        }
        else if (msgBox.clickedButton() == booked_button) {
                if(p.empty_rest_booked_patients_table(QDate::currentDate().toString("yyyy/MM/dd"))){
                    QMessageBox::information(this, "DONE", "DONE", QMessageBox::Ok);
                }
        }else {
            qDebug() << "-------------------no seletecd---------------";
        }
    }
}

void patients_management::on_book_patient_button_clicked()
{
    BookCommingAppointment *book_for_patient = new BookCommingAppointment(this);

    book_for_patient -> setModal(true);
    book_for_patient -> show();
}

void patients_management::on_show_today_booked_patients_button_clicked()
{
    ShowDailyPatients *w = new ShowDailyPatients(this, false);
    w -> setModal(true);
    w -> show();

}
