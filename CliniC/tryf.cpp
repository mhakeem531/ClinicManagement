#include "tryf.h"
#include "ui_tryf.h"
#include <QDesktopWidget>
Tryf::Tryf(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Tryf)
{
    ui->setupUi(this);
    ui -> setupUi(this);
    this -> setFixedSize(this -> size());
    QString doctor_name = "HAKEEM";

    QString *x = new QString("<html><head/>"
                             "<body>"
                             "<p align=\"center\">"
                             "<span style=\" font-size:16pt; color:#ef2929;\">Wellcom to</span>"
                             "<span style=\" font-size:16pt; color:#f7f509;\">&quot;</span>"
                             "<span style=\" font-size:16pt; font-weight:600; color:#f3f3f3;\">"
                             "Dr." + doctor_name +
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

Tryf::~Tryf()
{
    delete ui;
}
