#include "deleteadmindialog.h"
#include "ui_deleteadmindialog.h"

DeleteAdminDialog::DeleteAdminDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DeleteAdminDialog)
{
    ui->setupUi(this);
    this -> setFixedSize(this -> size());
//border-color: rgb(247, 245, 9);
//    background-color: rgb(196, 210, 237);

   //  this -> setStyleSheet("background-color: rgba(249, 6, 6, 155);");
}

void DeleteAdminDialog::paintEvent(QPaintEvent *e)
{
    QPainter painter(this);
        painter.drawPixmap(0, 0, QPixmap(":/images/wooden2.jpg").scaled(size()));
        QWidget::paintEvent(e);
}


void DeleteAdminDialog::clear_dialog_data()
{
    ui -> username_delete_line_edit -> clear();
    ui -> password_delete_line_edit -> clear();


}

void DeleteAdminDialog::on_cancel_delete_admin_button_clicked()
{
    this -> clear_dialog_data();
    this -> hide();
}

void DeleteAdminDialog::on_submit_delete_admin_button_clicked()
{
    QString username = ui -> username_delete_line_edit -> text().trimmed();
    QString password = ui -> password_delete_line_edit -> text().trimmed();

    if(username.isEmpty() || password.isEmpty()){
        QMessageBox::warning(this, "ERROR", "ENTER ALL REQUIRED DATA", QMessageBox::Ok);
    }else{
        clear_dialog_data();
        this -> admin = new admins_management(username, password);
        if(this -> admin -> delete_current_admin()){
            this -> hide();
            QMessageBox::information(this, "DONE", "admin has been deleted", QMessageBox::Ok);
        }else{
            QMessageBox::warning(this, "ERROR", "something went wrong", QMessageBox::Ok);
        }
    }

}


DeleteAdminDialog::~DeleteAdminDialog()
{
    qDebug() << "destructor";
    delete ui;
    if(admin != NULL){
        delete  admin;
        qDebug() << "ADMIN";
    }
}
