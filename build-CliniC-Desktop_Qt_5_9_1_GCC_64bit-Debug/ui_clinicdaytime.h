/********************************************************************************
** Form generated from reading UI file 'clinicdaytime.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLINICDAYTIME_H
#define UI_CLINICDAYTIME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ClinicDayTime
{
public:
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QComboBox *choose_hour_combo;
    QSpacerItem *verticalSpacer_2;
    QFrame *line;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer_4;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *quarter_radio;
    QSpacerItem *horizontalSpacer_2;
    QRadioButton *half_radio;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_3;
    QRadioButton *one_hour_radio;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer_5;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *cancel_setting_button;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *save_settings_button;
    QSpacerItem *horizontalSpacer_7;

    void setupUi(QDialog *ClinicDayTime)
    {
        if (ClinicDayTime->objectName().isEmpty())
            ClinicDayTime->setObjectName(QStringLiteral("ClinicDayTime"));
        ClinicDayTime->setEnabled(true);
        ClinicDayTime->resize(654, 389);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ClinicDayTime->sizePolicy().hasHeightForWidth());
        ClinicDayTime->setSizePolicy(sizePolicy);
        verticalLayout_4 = new QVBoxLayout(ClinicDayTime);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(ClinicDayTime);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(169, 20));
        label->setStyleSheet(QLatin1String("background-color: rgba(255, 245, 3, 112);\n"
"border-radius: 10px;"));

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(17, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        choose_hour_combo = new QComboBox(ClinicDayTime);
        choose_hour_combo->setObjectName(QStringLiteral("choose_hour_combo"));
        choose_hour_combo->setMinimumSize(QSize(79, 31));
        choose_hour_combo->setStyleSheet(QStringLiteral(""));

        horizontalLayout->addWidget(choose_hour_combo);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);


        horizontalLayout_4->addLayout(verticalLayout_2);

        line = new QFrame(ClinicDayTime);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout_4->addWidget(line);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_4);

        groupBox = new QGroupBox(ClinicDayTime);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setMinimumSize(QSize(0, 250));
        groupBox->setStyleSheet(QLatin1String("font: oblique 13pt \"Umpush\";\n"
"background-color: rgba(255, 245, 3, 112);"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        quarter_radio = new QRadioButton(groupBox);
        quarter_radio->setObjectName(QStringLiteral("quarter_radio"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(quarter_radio->sizePolicy().hasHeightForWidth());
        quarter_radio->setSizePolicy(sizePolicy1);
        quarter_radio->setMinimumSize(QSize(111, 31));
        quarter_radio->setStyleSheet(QLatin1String("background-color: rgb(15, 179, 0);\n"
"color: #a60909;\n"
"border-radius: 10px;"));

        horizontalLayout_2->addWidget(quarter_radio);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        half_radio = new QRadioButton(groupBox);
        half_radio->setObjectName(QStringLiteral("half_radio"));
        sizePolicy1.setHeightForWidth(half_radio->sizePolicy().hasHeightForWidth());
        half_radio->setSizePolicy(sizePolicy1);
        half_radio->setMinimumSize(QSize(111, 31));
        half_radio->setStyleSheet(QLatin1String("background-color: rgb(15, 179, 0);\n"
"color: #a60909;\n"
"border-radius: 10px;"));

        horizontalLayout_2->addWidget(half_radio);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        one_hour_radio = new QRadioButton(groupBox);
        one_hour_radio->setObjectName(QStringLiteral("one_hour_radio"));
        sizePolicy1.setHeightForWidth(one_hour_radio->sizePolicy().hasHeightForWidth());
        one_hour_radio->setSizePolicy(sizePolicy1);
        one_hour_radio->setMinimumSize(QSize(111, 31));
        one_hour_radio->setStyleSheet(QLatin1String("background-color: rgb(15, 179, 0);\n"
"color: #a60909;\n"
"border-radius: 10px;"));

        horizontalLayout_3->addWidget(one_hour_radio);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_3);


        verticalLayout_3->addWidget(groupBox);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);


        horizontalLayout_4->addLayout(verticalLayout_3);


        verticalLayout_4->addLayout(horizontalLayout_4);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_4->addItem(verticalSpacer_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalSpacer_6 = new QSpacerItem(348, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        cancel_setting_button = new QPushButton(ClinicDayTime);
        cancel_setting_button->setObjectName(QStringLiteral("cancel_setting_button"));
        cancel_setting_button->setMinimumSize(QSize(90, 30));
        cancel_setting_button->setStyleSheet(QLatin1String("border-radius: 10px;\n"
"background-color: rgba(255, 245, 3, 112);\n"
"color: rgb(166, 9, 9);"));

        horizontalLayout_5->addWidget(cancel_setting_button);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);

        save_settings_button = new QPushButton(ClinicDayTime);
        save_settings_button->setObjectName(QStringLiteral("save_settings_button"));
        save_settings_button->setMinimumSize(QSize(90, 30));
        save_settings_button->setStyleSheet(QLatin1String("border-radius: 10px;\n"
"background-color: rgba(255, 245, 3, 112);\n"
"color: rgb(166, 9, 9);"));

        horizontalLayout_5->addWidget(save_settings_button);


        horizontalLayout_6->addLayout(horizontalLayout_5);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_7);


        verticalLayout_4->addLayout(horizontalLayout_6);


        retranslateUi(ClinicDayTime);

        QMetaObject::connectSlotsByName(ClinicDayTime);
    } // setupUi

    void retranslateUi(QDialog *ClinicDayTime)
    {
        ClinicDayTime->setWindowTitle(QApplication::translate("ClinicDayTime", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("ClinicDayTime", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; color:#a60909;\">Day will start at:</span></p></body></html>", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("ClinicDayTime", "interview time", Q_NULLPTR));
        quarter_radio->setText(QApplication::translate("ClinicDayTime", "1/4 hour", Q_NULLPTR));
        half_radio->setText(QApplication::translate("ClinicDayTime", "1/2 hour", Q_NULLPTR));
        one_hour_radio->setText(QApplication::translate("ClinicDayTime", "1 hour", Q_NULLPTR));
        cancel_setting_button->setText(QApplication::translate("ClinicDayTime", "Cancel", Q_NULLPTR));
        save_settings_button->setText(QApplication::translate("ClinicDayTime", "OK", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ClinicDayTime: public Ui_ClinicDayTime {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLINICDAYTIME_H
