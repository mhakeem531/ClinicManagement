#include "bookcommingappointment.h"
#include "ui_bookcommingappointment.h"

BookCommingAppointment::BookCommingAppointment(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::BookCommingAppointment)
{
    ui -> setupUi(this);
    this -> setup_ui_components();
    this -> patient_number = 0;

}

void BookCommingAppointment::setup_ui_components()
{
    this -> setFixedSize(this -> size());
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
    ui -> pick_date -> setDate(QDate::currentDate());
    QString button_style = "  QPushButton {\
            color: yellow;\
            width: 100px;\
            height: 30px;\
            background: url(:/images/wooden_back1.jpg) ;\
            border-top: 3px transparent;\
            border-bottom: 3px transparent;\
            border-right: 10px transparent;\
            border-left: 10px transparent;\
            border-radius: 10px;\
        }";

    ui -> add_new_booked_patient_button -> setStyleSheet(button_style);
    ui -> cancel_add_new_patient_button -> setStyleSheet(button_style);



    this -> ui -> book_patient_phone_number_line_edit -> setValidator(new QDoubleValidator(0, 100, 2, this));
    this -> ui -> booked_date_label -> setText((QDate::currentDate()).toString("yyyy/MM/dd"));


    connect(this -> ui -> pick_date, SIGNAL(dateChanged(QDate)), this, SLOT(setDateLabel(QDate)));
    connect(this -> ui -> pick_date, SIGNAL(dateChanged(QDate)), this, SLOT(set_patient_number_label(QDate)));


}


void BookCommingAppointment::paintEvent(QPaintEvent *e)
{
    QPainter painter(this);
    painter.drawPixmap(0, 0, QPixmap(":/images/patient_info_back.jpg").scaled(size()));
    QWidget::paintEvent(e);

}

BookCommingAppointment::~BookCommingAppointment()
{
    delete ui;
}

void BookCommingAppointment::on_add_new_booked_patient_button_pressed()
{

    QString button_style = "  QPushButton {\
            color: gray;\
            width: 100px;\
            height: 30px;\
            background: url(:/images/wooden_back1.jpg) ;\
            border-top: 3px transparent;\
            border-bottom: 3px transparent;\
            border-right: 10px transparent;\
            border-left: 10px transparent;\
            border-radius: 10px;\
        }";

    ui -> add_new_booked_patient_button -> setStyleSheet(button_style);

}

void BookCommingAppointment::on_add_new_booked_patient_button_released()
{
    QString button_style = "  QPushButton {\
            color: yellow;\
            width: 100px;\
            height: 30px;\
            background: url(:/images/wooden_back1.jpg) ;\
            border-top: 3px transparent;\
            border-bottom: 3px transparent;\
            border-right: 10px transparent;\
            border-left: 10px transparent;\
            border-radius: 10px ;\
        }";

    ui -> add_new_booked_patient_button -> setStyleSheet(button_style);
}

void BookCommingAppointment::on_cancel_add_new_patient_button_pressed()
{
    QString button_style = "  QPushButton {\
            color: gray;\
            width: 100px;\
            height: 30px;\
            background: url(:/images/wooden_back1.jpg) ;\
            border-top: 3px transparent;\
            border-bottom: 3px transparent;\
            border-right: 10px transparent;\
            border-left: 10px transparent;\
            border-radius: 10px ;\
        }";

    ui -> cancel_add_new_patient_button -> setStyleSheet(button_style);
}

void BookCommingAppointment::on_cancel_add_new_patient_button_released()
{
    QString button_style = "  QPushButton {\
            color: yellow;\
            width: 100px;\
            height: 30px;\
            background: url(:/images/wooden_back1.jpg) ;\
            border-top: 3px transparent;\
            border-bottom: 3px transparent;\
            border-right: 10px transparent;\
            border-left: 10px transparent;\
            border-radius: 10px ;\
        }";
    ui -> cancel_add_new_patient_button -> setStyleSheet(button_style);
}


void BookCommingAppointment::setDateLabel(QDate selected_date)
{

    this -> ui -> booked_date_label -> setText(selected_date.toString("yyyy/MM/dd"));
}

void BookCommingAppointment::on_cancel_add_new_patient_button_clicked()
{
    this -> hide();
}


void BookCommingAppointment::on_add_new_booked_patient_button_clicked()
{
    QString name = this -> ui -> book_patient_name_line_edit -> text();
    QString phone = this -> ui -> book_patient_phone_number_line_edit -> text();
    QString date = this -> ui -> booked_date_label -> text();
    //TODO now insert new booked patient



    if(this -> check_enterd_data(name, phone, date)){
        patient *p = new patient(name, phone, date, this -> patient_number, false);
        if(p -> add_new_patient()){
            QMessageBox::information(this,
                                     "DONE",
                                     "Added Successfully\n " ,
                                     QMessageBox::Ok);
            clear_ui();
            qDebug() << "=============number is ======================";
            qDebug() << QString::number(p -> booked_patients_number_in_selected_date(date));
            qDebug() << "===================================";
        }else{
            QMessageBox::warning(this,
                                     "ERROR",
                                     "can't be added\n " ,
                                     QMessageBox::Ok);
        }
    }
}

void BookCommingAppointment::set_patient_number_label(QDate date)
{

    patient p;
    QString string_date = date.toString("yyyy/MM/dd");
    QString today_date = QDate::currentDate().toString("yyyy/MM/dd");
    this -> patient_number = p.booked_patients_number_in_selected_date(string_date) + 1;

    QString text = "<html><head/>"
                   "<body>"
                   "<p align=\"right\">"
                   "<span style=\" font-size:18pt;\">الرقم  : "
                   " " + QString::number(this -> patient_number) + " "
                   "</span></p></body></html>";

    if(string_date == today_date){
        text = "<html><head/>"
                           "<body>"
                           "<p align=\"right\">"
                           "<span style=\" font-size:18pt;\">الرقم  : 0"
                           "</span></p></body></html>";
    }



    this -> ui -> booked_patient_number_label -> setText(text);
}

bool BookCommingAppointment::check_enterd_data(QString name, QString phone, QString date)
{
    if(name.isEmpty() || phone.isEmpty() || date.isEmpty()){
        QMessageBox::warning(this,
                                 "ERROR",
                                 "ENTER ALL REQUIRED INFO\n " ,
                                 QMessageBox::Ok);
        return false;
    }else if(phone.size() < 11 || phone.size() > 13 || name.size() < 6){
        QMessageBox::warning(this,
                                 "ERROR",
                                 "ENTER CORRECT INFO\n " ,
                                 QMessageBox::Ok);
        return false;
    }

    return true;
}

void BookCommingAppointment::clear_ui()
{
    this -> ui -> book_patient_name_line_edit -> clear();
    this -> ui -> book_patient_phone_number_line_edit -> clear();
    this -> ui -> pick_date -> setDate(QDate::currentDate());
}
