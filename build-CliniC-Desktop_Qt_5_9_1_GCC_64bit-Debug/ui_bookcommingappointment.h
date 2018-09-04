/********************************************************************************
** Form generated from reading UI file 'bookcommingappointment.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOOKCOMMINGAPPOINTMENT_H
#define UI_BOOKCOMMINGAPPOINTMENT_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_BookCommingAppointment
{
public:
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_10;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *book_patient_name_line_edit;
    QLineEdit *book_patient_phone_number_line_edit;
    QSpacerItem *horizontalSpacer_9;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_8;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_2;
    QDateEdit *pick_date;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_12;
    QFrame *line;
    QSpacerItem *horizontalSpacer_11;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_6;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QLabel *label_7;
    QLabel *booked_date_label;
    QLabel *booked_patient_number_label;
    QSpacerItem *horizontalSpacer_7;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *cancel_add_new_patient_button;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *add_new_booked_patient_button;

    void setupUi(QDialog *BookCommingAppointment)
    {
        if (BookCommingAppointment->objectName().isEmpty())
            BookCommingAppointment->setObjectName(QStringLiteral("BookCommingAppointment"));
        BookCommingAppointment->resize(511, 439);
        BookCommingAppointment->setLayoutDirection(Qt::RightToLeft);
        verticalLayout_4 = new QVBoxLayout(BookCommingAppointment);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalSpacer = new QSpacerItem(20, 47, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_4->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_10 = new QSpacerItem(28, 18, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_10);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(BookCommingAppointment);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMinimumSize(QSize(105, 30));
        label->setStyleSheet(QStringLiteral("font: 57 oblique 17pt \"Tlwg Typo\";"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(BookCommingAppointment);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setMinimumSize(QSize(105, 32));

        verticalLayout->addWidget(label_2);


        horizontalLayout->addLayout(verticalLayout);

        horizontalSpacer = new QSpacerItem(68, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        book_patient_name_line_edit = new QLineEdit(BookCommingAppointment);
        book_patient_name_line_edit->setObjectName(QStringLiteral("book_patient_name_line_edit"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(book_patient_name_line_edit->sizePolicy().hasHeightForWidth());
        book_patient_name_line_edit->setSizePolicy(sizePolicy1);
        book_patient_name_line_edit->setMinimumSize(QSize(231, 37));
        QFont font;
        font.setFamily(QStringLiteral("Waree"));
        font.setPointSize(15);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        book_patient_name_line_edit->setFont(font);
        book_patient_name_line_edit->setAutoFillBackground(false);
        book_patient_name_line_edit->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
"background-color: rgba(255, 245, 3, 112);\n"
"border-radius: 15px;\n"
"font: 15pt \"Waree\";"));
        book_patient_name_line_edit->setLocale(QLocale(QLocale::Arabic, QLocale::Egypt));
        book_patient_name_line_edit->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(book_patient_name_line_edit);

        book_patient_phone_number_line_edit = new QLineEdit(BookCommingAppointment);
        book_patient_phone_number_line_edit->setObjectName(QStringLiteral("book_patient_phone_number_line_edit"));
        sizePolicy1.setHeightForWidth(book_patient_phone_number_line_edit->sizePolicy().hasHeightForWidth());
        book_patient_phone_number_line_edit->setSizePolicy(sizePolicy1);
        book_patient_phone_number_line_edit->setMinimumSize(QSize(231, 37));
        QFont font1;
        font1.setFamily(QStringLiteral("URW Chancery L"));
        font1.setPointSize(20);
        font1.setBold(false);
        font1.setItalic(true);
        font1.setWeight(7);
        book_patient_phone_number_line_edit->setFont(font1);
        book_patient_phone_number_line_edit->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
"font: 57 italic 20pt \"URW Chancery L\";\n"
"background-color: rgba(255, 245, 3, 112);\n"
"border-radius: 15px;"));
        book_patient_phone_number_line_edit->setMaxLength(12);
        book_patient_phone_number_line_edit->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(book_patient_phone_number_line_edit);


        horizontalLayout->addLayout(verticalLayout_3);

        horizontalSpacer_9 = new QSpacerItem(25, 18, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_9);


        verticalLayout_4->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_8 = new QSpacerItem(28, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_8);

        label_5 = new QLabel(BookCommingAppointment);
        label_5->setObjectName(QStringLiteral("label_5"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy2);
        label_5->setMinimumSize(QSize(111, 34));
        label_5->setStyleSheet(QStringLiteral("font: 57 oblique 17pt \"Tlwg Typo\";"));

        horizontalLayout_3->addWidget(label_5);

        horizontalSpacer_2 = new QSpacerItem(69, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        pick_date = new QDateEdit(BookCommingAppointment);
        pick_date->setObjectName(QStringLiteral("pick_date"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(pick_date->sizePolicy().hasHeightForWidth());
        pick_date->setSizePolicy(sizePolicy3);
        pick_date->setMinimumSize(QSize(171, 26));
        pick_date->setLayoutDirection(Qt::LeftToRight);
        pick_date->setAutoFillBackground(false);
        pick_date->setStyleSheet(QLatin1String("background-image: url(:/images/hours_combo_back.jpg);\n"
"background-color: rgb(151, 58, 5);\n"
"\n"
"font: 13pt \"Ubuntu\";\n"
"border-width:4px;\n"
"color: rgb(255, 172, 5);\n"
"\n"
"\n"
"selection-color: rgb(231, 144, 10);\n"
"selection-background-color: rgba(252, 108, 1, 48);"));
        pick_date->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        pick_date->setCalendarPopup(true);

        horizontalLayout_3->addWidget(pick_date);

        horizontalSpacer_4 = new QSpacerItem(69, 41, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);


        verticalLayout_4->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_12 = new QSpacerItem(25, 18, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_12);

        line = new QFrame(BookCommingAppointment);
        line->setObjectName(QStringLiteral("line"));
        line->setMinimumSize(QSize(424, 5));
        line->setStyleSheet(QStringLiteral("background-image: url(:/images/wooden_back1.jpg);"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout_2->addWidget(line);

        horizontalSpacer_11 = new QSpacerItem(25, 18, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_11);


        verticalLayout_4->addLayout(horizontalLayout_2);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalSpacer_6 = new QSpacerItem(108, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_6);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_3 = new QLabel(BookCommingAppointment);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setStyleSheet(QLatin1String("background-color: rgba(251, 0, 0, 64);\n"
"color: rgb(248, 238, 9);\n"
"border-radius: 15px;\n"
"font: 57 italic 20pt \"URW Chancery L\";\n"
"padding: 0px 10px 0px 10px;"));

        verticalLayout_2->addWidget(label_3);

        label_7 = new QLabel(BookCommingAppointment);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setStyleSheet(QLatin1String("border-radius: 15px;\n"
"background-color: rgba(159, 44, 15, 112);\n"
"padding: 0px 10px 0px 10px;\n"
"color: rgb(248, 238, 9);\n"
"font: 57 italic 20pt \"URW Chancery L\";"));

        verticalLayout_2->addWidget(label_7);

        booked_date_label = new QLabel(BookCommingAppointment);
        booked_date_label->setObjectName(QStringLiteral("booked_date_label"));
        booked_date_label->setStyleSheet(QLatin1String("background-color: rgba(144, 46, 5, 66);\n"
"font: 57 italic 20pt \"URW Chancery L\";\n"
"color: rgb(248, 238, 9);\n"
"border-radius: 15px;\n"
"padding: 0px 10px 0px 10px;"));

        verticalLayout_2->addWidget(booked_date_label);

        booked_patient_number_label = new QLabel(BookCommingAppointment);
        booked_patient_number_label->setObjectName(QStringLiteral("booked_patient_number_label"));
        booked_patient_number_label->setStyleSheet(QLatin1String("background-color: rgba(148, 11, 72, 111);\n"
"font: 57 italic 20pt \"URW Chancery L\";\n"
"color: rgb(248, 238, 9);\n"
"border-radius: 15px;\n"
"padding: 0px 10px 0px 10px;"));

        verticalLayout_2->addWidget(booked_patient_number_label);


        horizontalLayout_6->addLayout(verticalLayout_2);

        horizontalSpacer_7 = new QSpacerItem(108, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_7);


        verticalLayout_4->addLayout(horizontalLayout_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        cancel_add_new_patient_button = new QPushButton(BookCommingAppointment);
        cancel_add_new_patient_button->setObjectName(QStringLiteral("cancel_add_new_patient_button"));

        horizontalLayout_5->addWidget(cancel_add_new_patient_button);

        horizontalSpacer_5 = new QSpacerItem(228, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);

        add_new_booked_patient_button = new QPushButton(BookCommingAppointment);
        add_new_booked_patient_button->setObjectName(QStringLiteral("add_new_booked_patient_button"));

        horizontalLayout_5->addWidget(add_new_booked_patient_button);


        verticalLayout_4->addLayout(horizontalLayout_5);


        retranslateUi(BookCommingAppointment);
        QObject::connect(book_patient_name_line_edit, SIGNAL(textChanged(QString)), label_3, SLOT(setText(QString)));
        QObject::connect(book_patient_phone_number_line_edit, SIGNAL(textChanged(QString)), label_7, SLOT(setText(QString)));

        QMetaObject::connectSlotsByName(BookCommingAppointment);
    } // setupUi

    void retranslateUi(QDialog *BookCommingAppointment)
    {
        BookCommingAppointment->setWindowTitle(QApplication::translate("BookCommingAppointment", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("BookCommingAppointment", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt; font-weight:600; color:#000000;\">\330\247\331\204\330\245\330\263\331\205</span></p></body></html>", Q_NULLPTR));
        label_2->setText(QApplication::translate("BookCommingAppointment", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt; font-weight:600; font-style:italic; color:#000000;\">\330\261\331\202\331\205 \330\247\331\204\331\207\330\247\330\252\331\201</span></p></body></html>", Q_NULLPTR));
        book_patient_name_line_edit->setInputMask(QString());
        book_patient_phone_number_line_edit->setInputMask(QString());
        label_5->setText(QApplication::translate("BookCommingAppointment", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt; font-weight:600; color:#ffffff;\">\330\247\331\204\331\205\331\212\330\271\330\247\330\257</span></p></body></html>", Q_NULLPTR));
        pick_date->setDisplayFormat(QApplication::translate("BookCommingAppointment", "yyyy-MM-dd", Q_NULLPTR));
        label_3->setText(QApplication::translate("BookCommingAppointment", "\n"
"\n"
"\n"
"<html><head/><body><p align=\"right\"><span style=\" font-size:18pt;\">\330\247\331\204\330\245\330\263\331\205</span></p></body></html>", Q_NULLPTR));
        label_7->setText(QApplication::translate("BookCommingAppointment", "<html><head/><body><p align=\"right\"><span style=\" font-size:18pt;\">\330\247\331\204\331\207\330\247\330\252\331\201</span></p></body></html>", Q_NULLPTR));
        booked_date_label->setText(QApplication::translate("BookCommingAppointment", "<html><head/><body><p align=\"right\"><span style=\" font-size:18pt;\">\330\247\331\204\331\205\331\210\330\271\330\257</span></p></body></html>", Q_NULLPTR));
        booked_patient_number_label->setText(QApplication::translate("BookCommingAppointment", "<html><head/><body><p align=\"right\"><span style=\" font-size:18pt;\">\330\247\331\204\330\261\331\202\331\205</span></p></body></html>", Q_NULLPTR));
        cancel_add_new_patient_button->setText(QApplication::translate("BookCommingAppointment", "Cancel", Q_NULLPTR));
        add_new_booked_patient_button->setText(QApplication::translate("BookCommingAppointment", "Ok", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class BookCommingAppointment: public Ui_BookCommingAppointment {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOKCOMMINGAPPOINTMENT_H
