/********************************************************************************
** Form generated from reading UI file 'tryf.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRYF_H
#define UI_TRYF_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Tryf
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QLabel *doctor_name_label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Tryf)
    {
        if (Tryf->objectName().isEmpty())
            Tryf->setObjectName(QStringLiteral("Tryf"));
        Tryf->resize(524, 337);
        Tryf->setStyleSheet(QStringLiteral(""));
        centralwidget = new QWidget(Tryf);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(120, 230, 89, 25));
        pushButton->setStyleSheet(QStringLiteral(""));
        doctor_name_label = new QLabel(centralwidget);
        doctor_name_label->setObjectName(QStringLiteral("doctor_name_label"));
        doctor_name_label->setGeometry(QRect(200, 60, 151, 71));
        Tryf->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Tryf);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 524, 22));
        Tryf->setMenuBar(menubar);
        statusbar = new QStatusBar(Tryf);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Tryf->setStatusBar(statusbar);

        retranslateUi(Tryf);

        QMetaObject::connectSlotsByName(Tryf);
    } // setupUi

    void retranslateUi(QMainWindow *Tryf)
    {
        Tryf->setWindowTitle(QApplication::translate("Tryf", "MainWindow", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Tryf", "PushButton", Q_NULLPTR));
        doctor_name_label->setText(QApplication::translate("Tryf", "TextLabel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Tryf: public Ui_Tryf {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRYF_H
