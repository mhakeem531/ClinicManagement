#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui -> setupUi(this);
    this -> setFixedSize(this -> size());
    this -> admin = new admins_management();
    this -> doctor_name = "HAKEEM";

    this -> app_setting = new QSettings("CLINIC_SYSTEM", "day_time");

    QString *x = new QString("<html><head/>"
                             "<body>"
                             "<p align=\"center\">"
                             "<span style=\" font-size:16pt; color:#ef2929;\">Wellcom to</span>"
                             "<span style=\" font-size:16pt; color:#f7f509;\">&quot;</span>"
                             "<span style=\" font-size:16pt; font-weight:600; color:#f3f3f3;\">"
                             "Dr." + this->doctor_name +
                             "</span>"
                             "<span style=\" font-size:16pt; color:#f7f509;\">&quot;</span>"
                             "<span style=\" font-size:16pt; color:#ef2929;\">Clinic</span>"
                             "<span style=\" font-size:16pt; font-weight:600;\">.</span>"
                             "</p>"
                             "</body>"
                             "</html>");
    ui -> doctor_name_label -> setText(*x);

    /**
     * to set background image
     */
   this -> setStyleSheet("#centralWidget {  border-image: url(:/images/inside_clinic2.jpg) 0 0 0 0 stretch stretch;}");
    /**
     * done
     */

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



}

void MainWindow::login_current_admin(QString username, QString password)
{
    this -> admin -> set_current_admin_username(username);
    this -> admin -> set_current_admin_password(password);

    if(this -> admin -> login_current_admin()){
        QMessageBox::information(this, "done", "welcom to Dr." + this -> doctor_name + " clinic", QMessageBox::Ok);
        settings_or_patients_managment();
    }
    else
    {
        QMessageBox::warning(this, "ERROR", "something went wrong!, "
                                            "\n make sure that enterd data is correct",
                             QMessageBox::Ok);
    }
}

void MainWindow::setup_new_admin(QString username, QString password)
{
    this -> admin -> set_new_admin_username(username);
    this -> admin -> set_new_admin_password(password);

    if(this -> admin -> add_new_admin()){
        QMessageBox::information(this, "done", "new admin has been added to the system", QMessageBox::Ok);

        QMessageBox::information(this, "done", "welcom to Dr." + this -> doctor_name + " clinic", QMessageBox::Ok);

        settings_or_patients_managment();

    }
    else
    {
        QMessageBox::warning(this, "ERROR", "something went wrong!, "
                                            "\n make sure that the selected username is unique",
                             QMessageBox::Ok);
    }
}

void MainWindow::settings_or_patients_managment()
{
   patients_management *p;
   ClinicDayTime *c;
    set_log_in_statues();
    QMessageBox msgBox;
    msgBox.setText(tr("Select destination"));
    QAbstractButton* setting_button = msgBox.addButton(tr("System Settings!"), QMessageBox::YesRole);
    QAbstractButton* managment_button = msgBox.addButton(tr("System Managment!"), QMessageBox::NoRole);

    msgBox.exec();

    if (msgBox.clickedButton() == setting_button) {
        this -> hide();
        c = new ClinicDayTime(this);
        c -> show();
        p = 0;
    }
    else if (msgBox.clickedButton() == managment_button) {
        this -> hide();
        p = new patients_management(this);
        p -> show();
        c = 0;
    }else {

    }
}

void MainWindow::set_log_in_statues()
{
    this -> app_setting -> beginGroup("login_statues");
    this -> app_setting -> setValue("login", false);
    this -> app_setting->endGroup();
}

MainWindow::~MainWindow()
{
    delete admin;
    delete ui;
}

void MainWindow::on_login_current_admin_button_clicked()
{
    QString username = ui -> current_admin_username_line_edit -> text().trimmed();
    QString password = ui -> current_admin_password_line_edit -> text().trimmed();

    ui -> new_admin_username_line_edit -> clear();
    ui -> new_admin_password_line_edit -> clear();
    ui -> new_admin_repassword_line_edit -> clear();
    ui -> current_admin_username_line_edit -> clear();
    ui -> current_admin_password_line_edit -> clear();

    if(!username.isEmpty() && !password.isEmpty()){
        this -> login_current_admin(username, password);
    }else{
        QMessageBox::warning(this, "ERROR", "please enter required data!!", QMessageBox::Ok);
    }
}

void MainWindow::on_setup_new_admin_button_clicked()
{
    QString username = ui -> new_admin_username_line_edit -> text().trimmed();
    QString password = ui -> new_admin_password_line_edit -> text().trimmed();
    QString repassword = ui -> new_admin_repassword_line_edit -> text().trimmed();

    ui -> new_admin_username_line_edit -> clear();
    ui -> new_admin_password_line_edit -> clear();
    ui -> new_admin_repassword_line_edit -> clear();
    ui -> current_admin_username_line_edit -> clear();
    ui -> current_admin_password_line_edit -> clear();

    qDebug() << password;
    qDebug() << repassword;
    QString message = "";
    if (username.isEmpty())
        message = "1-please set value for username,\n";
    else message = "1- ...done\n";

    if (password.isEmpty())
        message += "2-please set value for password,\n";
    else message += "2- ...done\n";

    if (repassword.isEmpty())
        message += "3-please set value for re-password,\n";
    else message += "3- ...done\n";

    if (password != repassword || repassword.isEmpty() || password.isEmpty())
        message += "4-two passwords should be the same";
    else message += "4- ...done\n";

    if(message == "1- ...done\n2- ...done\n3- ...done\n4- ...done\n"){
        this -> setup_new_admin(username, password);
    }else{
        QMessageBox::warning(this, "ERROR", message, QMessageBox::Ok);
    }

}

void MainWindow::on_delete_current_admin_button_clicked()
{
    DeleteAdminDialog delete_admin;
    delete_admin.setModal(true);
    delete_admin.exec();
}

void MainWindow::on_quite_button_clicked()
{
    this -> close();
}
