/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_7;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QLabel *doctor_name_label;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *verticalSpacer_5;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *login_current_admin_group_box;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_2;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *current_admin_username_line_edit;
    QSpacerItem *verticalSpacer_2;
    QLineEdit *current_admin_password_line_edit;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *login_current_admin_button;
    QSpacerItem *horizontalSpacer_4;
    QVBoxLayout *verticalLayout_7;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QVBoxLayout *verticalLayout_6;
    QLineEdit *new_admin_username_line_edit;
    QLineEdit *new_admin_password_line_edit;
    QLineEdit *new_admin_repassword_line_edit;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *setup_new_admin_button;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *quite_button;
    QSpacerItem *horizontalSpacer_9;
    QPushButton *delete_current_admin_button;
    QSpacerItem *verticalSpacer_6;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(696, 452);
        MainWindow->setMinimumSize(QSize(650, 320));
        MainWindow->setLayoutDirection(Qt::RightToLeft);
        MainWindow->setAutoFillBackground(false);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_8 = new QVBoxLayout(centralWidget);
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_7);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalSpacer = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        doctor_name_label = new QLabel(centralWidget);
        doctor_name_label->setObjectName(QStringLiteral("doctor_name_label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(doctor_name_label->sizePolicy().hasHeightForWidth());
        doctor_name_label->setSizePolicy(sizePolicy);
        doctor_name_label->setAutoFillBackground(false);
        doctor_name_label->setStyleSheet(QLatin1String("\n"
"background-color: qradialgradient(spread:reflect, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0.455446 rgba(235, 124, 0, 204), stop:1 rgba(255, 255, 255, 255));\n"
"border-color: rgb(24, 21, 168);"));
        doctor_name_label->setAlignment(Qt::AlignCenter);
        doctor_name_label->setWordWrap(false);
        doctor_name_label->setMargin(15);
        doctor_name_label->setTextInteractionFlags(Qt::LinksAccessibleByMouse);

        verticalLayout->addWidget(doctor_name_label, 0, Qt::AlignHCenter);


        horizontalLayout->addLayout(verticalLayout);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        horizontalLayout_7->addLayout(horizontalLayout);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_8);


        verticalLayout_8->addLayout(horizontalLayout_7);

        verticalSpacer_5 = new QSpacerItem(20, 25, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        login_current_admin_group_box = new QGroupBox(centralWidget);
        login_current_admin_group_box->setObjectName(QStringLiteral("login_current_admin_group_box"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(login_current_admin_group_box->sizePolicy().hasHeightForWidth());
        login_current_admin_group_box->setSizePolicy(sizePolicy1);
        QFont font;
        font.setFamily(QStringLiteral("URW Gothic L"));
        font.setPointSize(17);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        login_current_admin_group_box->setFont(font);
        login_current_admin_group_box->setStyleSheet(QLatin1String("background-color: rgba(251, 224, 10, 128);\n"
"color: rgb(253, 5, 5);\n"
"font: 17pt \"URW Gothic L\";"));
        login_current_admin_group_box->setAlignment(Qt::AlignCenter);
        login_current_admin_group_box->setFlat(true);
        horizontalLayout_2 = new QHBoxLayout(login_current_admin_group_box);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label = new QLabel(login_current_admin_group_box);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy2);

        verticalLayout_3->addWidget(label);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);

        label_2 = new QLabel(login_current_admin_group_box);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy2.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy2);

        verticalLayout_3->addWidget(label_2);


        horizontalLayout_2->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setSizeConstraint(QLayout::SetFixedSize);
        current_admin_username_line_edit = new QLineEdit(login_current_admin_group_box);
        current_admin_username_line_edit->setObjectName(QStringLiteral("current_admin_username_line_edit"));
        sizePolicy1.setHeightForWidth(current_admin_username_line_edit->sizePolicy().hasHeightForWidth());
        current_admin_username_line_edit->setSizePolicy(sizePolicy1);
        current_admin_username_line_edit->setFont(font);
        current_admin_username_line_edit->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(current_admin_username_line_edit);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        current_admin_password_line_edit = new QLineEdit(login_current_admin_group_box);
        current_admin_password_line_edit->setObjectName(QStringLiteral("current_admin_password_line_edit"));
        sizePolicy1.setHeightForWidth(current_admin_password_line_edit->sizePolicy().hasHeightForWidth());
        current_admin_password_line_edit->setSizePolicy(sizePolicy1);
        current_admin_password_line_edit->setFont(font);
        current_admin_password_line_edit->setEchoMode(QLineEdit::Password);
        current_admin_password_line_edit->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(current_admin_password_line_edit);


        horizontalLayout_2->addLayout(verticalLayout_2);


        verticalLayout_4->addWidget(login_current_admin_group_box);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        login_current_admin_button = new QPushButton(centralWidget);
        login_current_admin_button->setObjectName(QStringLiteral("login_current_admin_button"));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(login_current_admin_button->sizePolicy().hasHeightForWidth());
        login_current_admin_button->setSizePolicy(sizePolicy3);
        login_current_admin_button->setMinimumSize(QSize(121, 31));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        login_current_admin_button->setFont(font1);
        login_current_admin_button->setStyleSheet(QStringLiteral("background-color: rgb(115, 210, 22);"));
        login_current_admin_button->setFlat(false);

        horizontalLayout_3->addWidget(login_current_admin_button);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);


        verticalLayout_4->addLayout(horizontalLayout_3);


        horizontalLayout_6->addLayout(verticalLayout_4);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setFont(font);
        groupBox->setAutoFillBackground(false);
        groupBox->setStyleSheet(QLatin1String("background-color: rgba(251, 224, 10, 128);\n"
"color: rgb(253, 5, 5);\n"
"font: 17pt \"URW Gothic L\";"));
        groupBox->setAlignment(Qt::AlignCenter);
        horizontalLayout_4 = new QHBoxLayout(groupBox);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_5->addWidget(label_3);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_5->addWidget(label_4);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout_5->addWidget(label_5);


        horizontalLayout_4->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        new_admin_username_line_edit = new QLineEdit(groupBox);
        new_admin_username_line_edit->setObjectName(QStringLiteral("new_admin_username_line_edit"));
        sizePolicy1.setHeightForWidth(new_admin_username_line_edit->sizePolicy().hasHeightForWidth());
        new_admin_username_line_edit->setSizePolicy(sizePolicy1);
        new_admin_username_line_edit->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(new_admin_username_line_edit);

        new_admin_password_line_edit = new QLineEdit(groupBox);
        new_admin_password_line_edit->setObjectName(QStringLiteral("new_admin_password_line_edit"));
        sizePolicy1.setHeightForWidth(new_admin_password_line_edit->sizePolicy().hasHeightForWidth());
        new_admin_password_line_edit->setSizePolicy(sizePolicy1);
        new_admin_password_line_edit->setEchoMode(QLineEdit::Password);
        new_admin_password_line_edit->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(new_admin_password_line_edit);

        new_admin_repassword_line_edit = new QLineEdit(groupBox);
        new_admin_repassword_line_edit->setObjectName(QStringLiteral("new_admin_repassword_line_edit"));
        sizePolicy1.setHeightForWidth(new_admin_repassword_line_edit->sizePolicy().hasHeightForWidth());
        new_admin_repassword_line_edit->setSizePolicy(sizePolicy1);
        new_admin_repassword_line_edit->setEchoMode(QLineEdit::Password);
        new_admin_repassword_line_edit->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(new_admin_repassword_line_edit);


        horizontalLayout_4->addLayout(verticalLayout_6);


        verticalLayout_7->addWidget(groupBox);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);

        setup_new_admin_button = new QPushButton(centralWidget);
        setup_new_admin_button->setObjectName(QStringLiteral("setup_new_admin_button"));
        sizePolicy3.setHeightForWidth(setup_new_admin_button->sizePolicy().hasHeightForWidth());
        setup_new_admin_button->setSizePolicy(sizePolicy3);
        setup_new_admin_button->setMinimumSize(QSize(121, 31));
        setup_new_admin_button->setFont(font1);
        setup_new_admin_button->setStyleSheet(QStringLiteral("background-color: rgb(115, 210, 22);"));

        horizontalLayout_5->addWidget(setup_new_admin_button);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_6);


        verticalLayout_7->addLayout(horizontalLayout_5);


        horizontalLayout_6->addLayout(verticalLayout_7);


        verticalLayout_8->addLayout(horizontalLayout_6);

        verticalSpacer_4 = new QSpacerItem(20, 25, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_4);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        quite_button = new QPushButton(centralWidget);
        quite_button->setObjectName(QStringLiteral("quite_button"));
        sizePolicy3.setHeightForWidth(quite_button->sizePolicy().hasHeightForWidth());
        quite_button->setSizePolicy(sizePolicy3);
        quite_button->setMinimumSize(QSize(101, 31));
        quite_button->setFont(font1);
        quite_button->setStyleSheet(QLatin1String("background-color: rgb(115, 210, 22);\n"
""));

        horizontalLayout_8->addWidget(quite_button);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_9);

        delete_current_admin_button = new QPushButton(centralWidget);
        delete_current_admin_button->setObjectName(QStringLiteral("delete_current_admin_button"));
        sizePolicy3.setHeightForWidth(delete_current_admin_button->sizePolicy().hasHeightForWidth());
        delete_current_admin_button->setSizePolicy(sizePolicy3);
        delete_current_admin_button->setMinimumSize(QSize(101, 31));
        delete_current_admin_button->setFont(font1);
        delete_current_admin_button->setStyleSheet(QLatin1String("background-color: rgb(115, 210, 22);\n"
""));

        horizontalLayout_8->addWidget(delete_current_admin_button);


        verticalLayout_8->addLayout(horizontalLayout_8);

        verticalSpacer_6 = new QSpacerItem(20, 17, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_6);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 696, 22));
        MainWindow->setMenuBar(menuBar);
#ifndef QT_NO_SHORTCUT
        label->setBuddy(current_admin_username_line_edit);
        label_2->setBuddy(current_admin_password_line_edit);
        label_3->setBuddy(new_admin_username_line_edit);
        label_4->setBuddy(new_admin_password_line_edit);
        label_5->setBuddy(new_admin_repassword_line_edit);
#endif // QT_NO_SHORTCUT

        retranslateUi(MainWindow);

        login_current_admin_button->setDefault(true);
        setup_new_admin_button->setDefault(true);
        quite_button->setDefault(true);
        delete_current_admin_button->setDefault(true);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        doctor_name_label->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; color:#ef2929;\">Wellcom to</span><span style=\" font-size:16pt; color:#f7f509;\">&quot;</span><span style=\" font-size:16pt; font-weight:600; color:#f3f3f3;\">Dr.Ali Elhadad</span><span style=\" font-size:16pt; color:#f7f509;\">&quot;</span><span style=\" font-size:16pt; color:#ef2929;\">Clinic</span><span style=\" font-size:16pt; font-weight:600;\">.</span></p></body></html>", Q_NULLPTR));
        login_current_admin_group_box->setTitle(QApplication::translate("MainWindow", "\330\252\330\263\330\254\331\212\331\204 \330\257\330\256\331\210\331\204 \331\205\330\263\330\246\331\210\331\204 \330\255\330\247\331\204\331\212", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; font-weight:600; font-style:italic; color:#f90606;\">\330\245\330\263\331\205 \330\247\331\204\331\205\330\263\330\252\330\256\330\257\331\205</span></p></body></html>", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; font-weight:600; font-style:italic; color:#f90606;\">\331\203\331\204\331\205\330\251 \330\247\331\204\331\205\330\261\331\210\330\261</span></p></body></html>", Q_NULLPTR));
        login_current_admin_button->setText(QApplication::translate("MainWindow", "\330\252\330\263\330\254\331\212\331\204 \330\257\330\256\331\210\331\204", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindow", "\330\245\330\271\330\257\330\247\330\257 \331\205\330\263\330\246\331\210\331\204 \330\254\330\257\331\212\330\257", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; font-weight:600; font-style:italic; color:#f90606;\">\330\245\330\263\331\205 \330\247\331\204\331\205\330\263\330\252\330\256\330\257\331\205</span></p></body></html>", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; font-weight:600; font-style:italic; color:#f90606;\">\331\203\331\204\331\205\330\251 \330\247\331\204\331\205\330\261\331\210\330\261</span></p></body></html>", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; font-weight:600; font-style:italic; color:#f90606;\">\330\245\330\271\330\247\330\257\330\251 \331\203\331\204\331\205\330\251 \330\247\331\204\331\205\330\261\331\210\330\261</span></p></body></html>", Q_NULLPTR));
        setup_new_admin_button->setText(QApplication::translate("MainWindow", "\330\252\330\263\330\254\331\212\331\204", Q_NULLPTR));
        quite_button->setText(QApplication::translate("MainWindow", "\330\245\330\272\331\204\330\247\331\202", Q_NULLPTR));
        delete_current_admin_button->setText(QApplication::translate("MainWindow", "\330\255\330\260\331\201 \331\205\330\263\330\246\331\210\331\204", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
