/********************************************************************************
** Form generated from reading UI file 'dailypatientinfo.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DAILYPATIENTINFO_H
#define UI_DAILYPATIENTINFO_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
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

class Ui_DailyPatientInfo
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
    QLineEdit *daily_patient_name_line_edit;
    QLineEdit *daily_patient_phone_number_line_edit;
    QSpacerItem *horizontalSpacer_9;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_12;
    QFrame *line;
    QSpacerItem *horizontalSpacer_11;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_6;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_7;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_8;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_2;
    QLabel *complete_time_label;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *cancel_add_new_patient_button;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *add_new_daily_patient_button;

    void setupUi(QDialog *DailyPatientInfo)
    {
        if (DailyPatientInfo->objectName().isEmpty())
            DailyPatientInfo->setObjectName(QStringLiteral("DailyPatientInfo"));
        DailyPatientInfo->resize(511, 378);
        DailyPatientInfo->setLayoutDirection(Qt::RightToLeft);
        DailyPatientInfo->setStyleSheet(QStringLiteral(""));
        verticalLayout_4 = new QVBoxLayout(DailyPatientInfo);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_4->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_10 = new QSpacerItem(28, 18, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_10);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(DailyPatientInfo);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMinimumSize(QSize(105, 30));
        label->setStyleSheet(QStringLiteral("font: 57 oblique 17pt \"Tlwg Typo\";"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(DailyPatientInfo);
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
        daily_patient_name_line_edit = new QLineEdit(DailyPatientInfo);
        daily_patient_name_line_edit->setObjectName(QStringLiteral("daily_patient_name_line_edit"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(daily_patient_name_line_edit->sizePolicy().hasHeightForWidth());
        daily_patient_name_line_edit->setSizePolicy(sizePolicy1);
        daily_patient_name_line_edit->setMinimumSize(QSize(231, 37));
        QFont font;
        font.setFamily(QStringLiteral("URW Palladio L"));
        font.setPointSize(17);
        font.setBold(false);
        font.setItalic(true);
        font.setWeight(50);
        daily_patient_name_line_edit->setFont(font);
        daily_patient_name_line_edit->setAutoFillBackground(false);
        daily_patient_name_line_edit->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
"font: italic 17pt \"URW Palladio L\";\n"
"background-color: rgba(255, 245, 3, 112);\n"
"border-radius: 15px;"));
        daily_patient_name_line_edit->setLocale(QLocale(QLocale::Arabic, QLocale::Egypt));
        daily_patient_name_line_edit->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(daily_patient_name_line_edit);

        daily_patient_phone_number_line_edit = new QLineEdit(DailyPatientInfo);
        daily_patient_phone_number_line_edit->setObjectName(QStringLiteral("daily_patient_phone_number_line_edit"));
        sizePolicy1.setHeightForWidth(daily_patient_phone_number_line_edit->sizePolicy().hasHeightForWidth());
        daily_patient_phone_number_line_edit->setSizePolicy(sizePolicy1);
        daily_patient_phone_number_line_edit->setMinimumSize(QSize(231, 37));
        daily_patient_phone_number_line_edit->setFont(font);
        daily_patient_phone_number_line_edit->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
"font: italic 17pt \"URW Palladio L\";\n"
"background-color: rgba(255, 245, 3, 112);\n"
"border-radius: 15px;"));
        daily_patient_phone_number_line_edit->setMaxLength(32767);
        daily_patient_phone_number_line_edit->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(daily_patient_phone_number_line_edit);


        horizontalLayout->addLayout(verticalLayout_3);

        horizontalSpacer_9 = new QSpacerItem(25, 18, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_9);


        verticalLayout_4->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_12 = new QSpacerItem(25, 18, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_12);

        line = new QFrame(DailyPatientInfo);
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
        label_3 = new QLabel(DailyPatientInfo);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setStyleSheet(QLatin1String("background-color: rgba(251, 0, 0, 64);\n"
"font: 14pt \"URW Gothic L\";\n"
"color: rgb(248, 238, 9);\n"
"border-radius: 15px;"));

        verticalLayout_2->addWidget(label_3);

        label_4 = new QLabel(DailyPatientInfo);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setStyleSheet(QLatin1String("background-color: rgba(159, 44, 15, 112);\n"
"font: 57 italic 16pt \"URW Chancery L\";\n"
"color: rgb(248, 238, 9);\n"
"border-radius: 15px;"));

        verticalLayout_2->addWidget(label_4);


        horizontalLayout_6->addLayout(verticalLayout_2);

        horizontalSpacer_7 = new QSpacerItem(108, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_7);


        verticalLayout_4->addLayout(horizontalLayout_6);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_8 = new QSpacerItem(66, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_8);

        label_5 = new QLabel(DailyPatientInfo);
        label_5->setObjectName(QStringLiteral("label_5"));
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);
        label_5->setMinimumSize(QSize(79, 30));
        label_5->setStyleSheet(QStringLiteral("font: 57 oblique 17pt \"Tlwg Typo\";"));

        horizontalLayout_3->addWidget(label_5);

        horizontalSpacer_2 = new QSpacerItem(42, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        complete_time_label = new QLabel(DailyPatientInfo);
        complete_time_label->setObjectName(QStringLiteral("complete_time_label"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(complete_time_label->sizePolicy().hasHeightForWidth());
        complete_time_label->setSizePolicy(sizePolicy2);
        complete_time_label->setMinimumSize(QSize(192, 31));
        complete_time_label->setStyleSheet(QLatin1String("color: rgb(166, 9, 9);\n"
"font: italic 16pt \"URW Palladio L\";\n"
"background-color: rgba(255, 245, 3, 112);\n"
"border-radius: 15px;"));

        horizontalLayout_3->addWidget(complete_time_label);

        horizontalSpacer_4 = new QSpacerItem(96, 41, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);


        verticalLayout_4->addLayout(horizontalLayout_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        cancel_add_new_patient_button = new QPushButton(DailyPatientInfo);
        cancel_add_new_patient_button->setObjectName(QStringLiteral("cancel_add_new_patient_button"));

        horizontalLayout_5->addWidget(cancel_add_new_patient_button);

        horizontalSpacer_5 = new QSpacerItem(228, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);

        add_new_daily_patient_button = new QPushButton(DailyPatientInfo);
        add_new_daily_patient_button->setObjectName(QStringLiteral("add_new_daily_patient_button"));

        horizontalLayout_5->addWidget(add_new_daily_patient_button);


        verticalLayout_4->addLayout(horizontalLayout_5);

        QWidget::setTabOrder(daily_patient_name_line_edit, daily_patient_phone_number_line_edit);
        QWidget::setTabOrder(daily_patient_phone_number_line_edit, add_new_daily_patient_button);
        QWidget::setTabOrder(add_new_daily_patient_button, cancel_add_new_patient_button);

        retranslateUi(DailyPatientInfo);
        QObject::connect(daily_patient_name_line_edit, SIGNAL(textChanged(QString)), label_3, SLOT(setText(QString)));
        QObject::connect(daily_patient_phone_number_line_edit, SIGNAL(textChanged(QString)), label_4, SLOT(setText(QString)));

        QMetaObject::connectSlotsByName(DailyPatientInfo);
    } // setupUi

    void retranslateUi(QDialog *DailyPatientInfo)
    {
        DailyPatientInfo->setWindowTitle(QApplication::translate("DailyPatientInfo", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("DailyPatientInfo", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt; font-weight:600; color:#000000;\">\330\247\331\204\330\245\330\263\331\205</span></p></body></html>", Q_NULLPTR));
        label_2->setText(QApplication::translate("DailyPatientInfo", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt; font-weight:600; font-style:italic; color:#000000;\">\330\261\331\202\331\205 \330\247\331\204\331\207\330\247\330\252\331\201</span></p></body></html>", Q_NULLPTR));
        daily_patient_name_line_edit->setInputMask(QString());
        daily_patient_phone_number_line_edit->setInputMask(QString());
        label_3->setText(QApplication::translate("DailyPatientInfo", "<html><head/><body><p align=\"right\"><span style=\" font-size:18pt;\">\330\247\331\204\330\245\330\263\331\205</span></p></body></html>", Q_NULLPTR));
        label_4->setText(QApplication::translate("DailyPatientInfo", "<html><head/><body><p align=\"right\">\330\247\331\204\331\207\330\247\330\252\331\201</p></body></html>", Q_NULLPTR));
        label_5->setText(QApplication::translate("DailyPatientInfo", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt; font-weight:600; color:#ffffff;\">\330\247\331\204\331\205\331\212\330\271\330\247\330\257</span></p></body></html>", Q_NULLPTR));
        complete_time_label->setText(QApplication::translate("DailyPatientInfo", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt;\">TextLabel</span></p></body></html>", Q_NULLPTR));
        cancel_add_new_patient_button->setText(QApplication::translate("DailyPatientInfo", "Cancel", Q_NULLPTR));
        add_new_daily_patient_button->setText(QApplication::translate("DailyPatientInfo", "Ok", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DailyPatientInfo: public Ui_DailyPatientInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DAILYPATIENTINFO_H
