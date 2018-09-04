/********************************************************************************
** Form generated from reading UI file 'patients_management.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PATIENTS_MANAGEMENT_H
#define UI_PATIENTS_MANAGEMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "clickablelabel.h"

QT_BEGIN_NAMESPACE

class Ui_patients_management
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *doctor_name_label;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    ClickableLabel *label_2;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QPushButton *add_patient_today_button;
    QPushButton *book_patient_button;
    QPushButton *show_today_patients_button;
    QPushButton *show_today_booked_patients_button;
    QPushButton *empty_patient_table_button;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QLabel *patient_details_label;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_5;
    ClickableLabel *next_patient_label;
    QSpacerItem *horizontalSpacer_5;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *patients_management)
    {
        if (patients_management->objectName().isEmpty())
            patients_management->setObjectName(QStringLiteral("patients_management"));
        patients_management->resize(961, 590);
        patients_management->setLayoutDirection(Qt::RightToLeft);
        patients_management->setAutoFillBackground(true);
        patients_management->setStyleSheet(QStringLiteral(""));
        centralwidget = new QWidget(patients_management);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout_4 = new QVBoxLayout(centralwidget);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        doctor_name_label = new QLabel(centralwidget);
        doctor_name_label->setObjectName(QStringLiteral("doctor_name_label"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(doctor_name_label->sizePolicy().hasHeightForWidth());
        doctor_name_label->setSizePolicy(sizePolicy);
        doctor_name_label->setAutoFillBackground(false);
        doctor_name_label->setStyleSheet(QLatin1String("font: 75 italic 11pt \"URW Chancery L\";\n"
"background-color: qradialgradient(spread:reflect, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0.455446 rgba(235, 124, 0, 204), stop:1 rgba(255, 255, 255, 255));\n"
"border-color: rgb(24, 21, 168);\n"
"border-radius: 25px;"));
        doctor_name_label->setAlignment(Qt::AlignCenter);
        doctor_name_label->setWordWrap(false);
        doctor_name_label->setMargin(15);
        doctor_name_label->setTextInteractionFlags(Qt::LinksAccessibleByMouse);

        horizontalLayout->addWidget(doctor_name_label);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        horizontalLayout_4->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_2 = new ClickableLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setMinimumSize(QSize(71, 91));
        label_2->setStyleSheet(QStringLiteral("image: url(:/images/logout_big.png);"));

        horizontalLayout_3->addWidget(label_2);

        horizontalSpacer_4 = new QSpacerItem(78, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);


        horizontalLayout_4->addLayout(horizontalLayout_3);


        verticalLayout_4->addLayout(horizontalLayout_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy1);
        groupBox->setMinimumSize(QSize(240, 271));
        groupBox->setStyleSheet(QLatin1String("\n"
"background-color: rgba(246, 178, 4, 175);\n"
"font: 75 italic 13pt \"URW Bookman L\";\n"
"gridline-color: rgb(162, 17, 113);\n"
"color: rgb(248, 9, 9);\n"
"text-align: center;"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        add_patient_today_button = new QPushButton(groupBox);
        add_patient_today_button->setObjectName(QStringLiteral("add_patient_today_button"));
        add_patient_today_button->setStyleSheet(QLatin1String("height:25px;\n"
""));

        verticalLayout->addWidget(add_patient_today_button);

        book_patient_button = new QPushButton(groupBox);
        book_patient_button->setObjectName(QStringLiteral("book_patient_button"));
        book_patient_button->setStyleSheet(QLatin1String("margin-top:10px;\n"
"height:30px;\n"
""));

        verticalLayout->addWidget(book_patient_button);

        show_today_patients_button = new QPushButton(groupBox);
        show_today_patients_button->setObjectName(QStringLiteral("show_today_patients_button"));
        show_today_patients_button->setStyleSheet(QLatin1String("margin-top:10px;\n"
"height:30px;"));

        verticalLayout->addWidget(show_today_patients_button);

        show_today_booked_patients_button = new QPushButton(groupBox);
        show_today_booked_patients_button->setObjectName(QStringLiteral("show_today_booked_patients_button"));
        show_today_booked_patients_button->setStyleSheet(QLatin1String("margin-top:10px;\n"
"height:30px;"));

        verticalLayout->addWidget(show_today_booked_patients_button);

        empty_patient_table_button = new QPushButton(groupBox);
        empty_patient_table_button->setObjectName(QStringLiteral("empty_patient_table_button"));
        empty_patient_table_button->setStyleSheet(QLatin1String("margin-top:10px;\n"
"height:30px;"));

        verticalLayout->addWidget(empty_patient_table_button);


        verticalLayout_3->addWidget(groupBox);

        verticalSpacer_5 = new QSpacerItem(20, 28, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_5);


        horizontalLayout_2->addLayout(verticalLayout_3);

        horizontalSpacer_3 = new QSpacerItem(168, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::MinimumExpanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(1);
        sizePolicy2.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy2);
        label->setStyleSheet(QLatin1String("font: 75 11pt \"URW Palladio L\";\n"
"border-color: rgb(24, 21, 168);\n"
"background-color: rgb(193, 125, 17);\n"
"border-radius: 25px;"));

        verticalLayout_2->addWidget(label);

        verticalSpacer = new QSpacerItem(20, 28, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer);

        patient_details_label = new QLabel(centralwidget);
        patient_details_label->setObjectName(QStringLiteral("patient_details_label"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(5);
        sizePolicy3.setHeightForWidth(patient_details_label->sizePolicy().hasHeightForWidth());
        patient_details_label->setSizePolicy(sizePolicy3);
        patient_details_label->setStyleSheet(QLatin1String("font: 75 11pt \"URW Palladio L\";\n"
"background-color: rgba(246, 178, 4, 175);\n"
"border-color: rgb(24, 21, 168);\n"
"border-radius: 25px;"));

        verticalLayout_2->addWidget(patient_details_label);


        horizontalLayout_2->addLayout(verticalLayout_2);


        verticalLayout_4->addLayout(horizontalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 38, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_4->addItem(verticalSpacer_2);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalSpacer_6 = new QSpacerItem(698, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        next_patient_label = new ClickableLabel(centralwidget);
        next_patient_label->setObjectName(QStringLiteral("next_patient_label"));
        next_patient_label->setMinimumSize(QSize(121, 91));
        next_patient_label->setStyleSheet(QStringLiteral("image: url(:/images/next_icon.png);"));

        horizontalLayout_5->addWidget(next_patient_label);

        horizontalSpacer_5 = new QSpacerItem(128, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);


        horizontalLayout_6->addLayout(horizontalLayout_5);


        verticalLayout_4->addLayout(horizontalLayout_6);

        patients_management->setCentralWidget(centralwidget);
        menuBar = new QMenuBar(patients_management);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 961, 22));
        patients_management->setMenuBar(menuBar);

        retranslateUi(patients_management);

        add_patient_today_button->setDefault(true);
        book_patient_button->setDefault(true);
        show_today_patients_button->setDefault(true);
        show_today_booked_patients_button->setDefault(true);
        empty_patient_table_button->setDefault(true);


        QMetaObject::connectSlotsByName(patients_management);
    } // setupUi

    void retranslateUi(QMainWindow *patients_management)
    {
        patients_management->setWindowTitle(QApplication::translate("patients_management", "MainWindow", Q_NULLPTR));
        doctor_name_label->setText(QApplication::translate("patients_management", "<html><head/><body><p align=\"center\"><span style=\" font-size:22pt; font-weight:600; color:#a21171;\">\330\245\330\257\330\247\330\261\331\207 \331\205\331\210\330\247\330\271\331\212\330\257\331\205\330\261\330\266\331\212 \330\247\331\204\330\271\331\212\330\247\330\257\331\207</span></p></body></html>", Q_NULLPTR));
        label_2->setText(QString());
        groupBox->setTitle(QApplication::translate("patients_management", "\330\245\330\256\330\252\330\261 \330\247\331\204\330\243\331\205\330\261 \330\247\331\204\331\205\331\206\330\247\330\263\330\250", Q_NULLPTR));
        add_patient_today_button->setText(QApplication::translate("patients_management", "\330\245\330\266\330\247\331\201\331\207 \331\205\331\210\330\271\330\257 \331\205\330\261\331\212\330\266 \330\254\330\257\331\212\330\257", Q_NULLPTR));
        book_patient_button->setText(QApplication::translate("patients_management", "\330\245\330\266\330\247\331\201\331\207 \330\255\330\254\330\262 \331\204\331\205\330\261\331\212\330\266 \330\254\330\257\331\212\330\257", Q_NULLPTR));
        show_today_patients_button->setText(QApplication::translate("patients_management", "\330\271\330\261\330\266 \331\205\331\210\330\247\330\271\331\212\330\257 \331\205\330\261\330\266\331\212 \330\247\331\204\331\212\331\210\331\205", Q_NULLPTR));
        show_today_booked_patients_button->setText(QApplication::translate("patients_management", "\330\271\330\261\330\266\331\212 \330\255\330\254\330\262 \331\205\330\261\330\266\331\212 \330\247\331\204\331\212\331\210\331\205", Q_NULLPTR));
        empty_patient_table_button->setText(QApplication::translate("patients_management", "\330\252\331\207\331\212\330\246\331\207 \330\250\331\212\330\247\331\206\330\247\330\252 \330\247\331\204\331\205\330\261\330\266\331\212", Q_NULLPTR));
        label->setText(QApplication::translate("patients_management", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt; font-weight:600; color:#a40000;\">\330\250\331\212\330\247\331\206\330\247\330\252 \330\247\331\204\331\205\330\261\331\212\330\266 \330\247\331\204\330\252\330\247\331\204\331\212</span></p></body></html>", Q_NULLPTR));
        patient_details_label->setText(QApplication::translate("patients_management", "<html><head/><body><p align=\"center\"><span style=\" font-size:22pt; font-weight:600; font-style:italic; text-decoration: underline; color:#ffffff;\">patient Details</span></p><p align=\"center\"><span style=\" font-size:22pt; font-weight:600; font-style:italic; color:#5a0b98;\">name</span><span style=\" font-size:22pt; font-weight:600; color:#cc0000;\"> : </span></p><p align=\"center\"><span style=\" font-size:22pt; font-weight:600; font-style:italic; color:#5a0b98;\">phone</span><span style=\" font-size:22pt; font-weight:600; color:#cc0000;\"> : </span></p><p align=\"center\"><span style=\" font-size:22pt; font-weight:600; font-style:italic; color:#5a0b98;\">num</span><span style=\" font-size:22pt; font-weight:600; color:#cc0000;\"> : </span></p></body></html>", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        next_patient_label->setToolTip(QApplication::translate("patients_management", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-style:italic; color:#fd0505;\">\330\250\331\212\330\247\331\206\330\247\330\252 \330\247\331\204\331\205\330\261\331\212\330\266 \330\247\331\204\330\252\330\247\331\204\331\212</span></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        next_patient_label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class patients_management: public Ui_patients_management {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PATIENTS_MANAGEMENT_H
