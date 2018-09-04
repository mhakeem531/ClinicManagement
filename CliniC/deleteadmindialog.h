#ifndef DELETEADMINDIALOG_H
#define DELETEADMINDIALOG_H

#include <QDialog>
#include <QMessageBox>
#include "admins_management.h"
#include <QDebug>
#include <QPainter>
namespace Ui {
class DeleteAdminDialog;
}

class DeleteAdminDialog : public QDialog
{
    Q_OBJECT

public:
    explicit DeleteAdminDialog(QWidget *parent = 0);
    void paintEvent(QPaintEvent *e);
    ~DeleteAdminDialog();


private slots:
    void on_cancel_delete_admin_button_clicked();

    void on_submit_delete_admin_button_clicked();

private:
    Ui::DeleteAdminDialog *ui;
    void clear_dialog_data();
    admins_management *admin = NULL;
};

#endif // DELETEADMINDIALOG_H
