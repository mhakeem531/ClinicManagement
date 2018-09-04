/********************************************************************************
** Form generated from reading UI file 'deleteadmindialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETEADMINDIALOG_H
#define UI_DELETEADMINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DeleteAdminDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *username_delete_line_edit;
    QLineEdit *password_delete_line_edit;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *cancel_delete_admin_button;
    QPushButton *submit_delete_admin_button;

    void setupUi(QDialog *DeleteAdminDialog)
    {
        if (DeleteAdminDialog->objectName().isEmpty())
            DeleteAdminDialog->setObjectName(QStringLiteral("DeleteAdminDialog"));
        DeleteAdminDialog->resize(354, 147);
        DeleteAdminDialog->setLayoutDirection(Qt::LeftToRight);
        DeleteAdminDialog->setStyleSheet(QStringLiteral(""));
        verticalLayout_3 = new QVBoxLayout(DeleteAdminDialog);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        username_delete_line_edit = new QLineEdit(DeleteAdminDialog);
        username_delete_line_edit->setObjectName(QStringLiteral("username_delete_line_edit"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(username_delete_line_edit->sizePolicy().hasHeightForWidth());
        username_delete_line_edit->setSizePolicy(sizePolicy);
        username_delete_line_edit->setStyleSheet(QStringLiteral("background-color: rgba(251, 0, 0, 64);"));
        username_delete_line_edit->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(username_delete_line_edit);

        password_delete_line_edit = new QLineEdit(DeleteAdminDialog);
        password_delete_line_edit->setObjectName(QStringLiteral("password_delete_line_edit"));
        sizePolicy.setHeightForWidth(password_delete_line_edit->sizePolicy().hasHeightForWidth());
        password_delete_line_edit->setSizePolicy(sizePolicy);
        password_delete_line_edit->setStyleSheet(QStringLiteral("background-color: rgba(251, 0, 0, 64);"));
        password_delete_line_edit->setEchoMode(QLineEdit::Password);
        password_delete_line_edit->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(password_delete_line_edit);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(DeleteAdminDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QLatin1String("background-color: rgba(255, 245, 3, 112);\n"
"border-color: rgba(192, 12, 12, 157);"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(DeleteAdminDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QLatin1String("background-color: rgba(255, 245, 3, 112);\n"
"border-color: rgba(192, 12, 12, 157);"));

        verticalLayout->addWidget(label_2);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_3->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 28, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        cancel_delete_admin_button = new QPushButton(DeleteAdminDialog);
        cancel_delete_admin_button->setObjectName(QStringLiteral("cancel_delete_admin_button"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(cancel_delete_admin_button->sizePolicy().hasHeightForWidth());
        cancel_delete_admin_button->setSizePolicy(sizePolicy1);
        cancel_delete_admin_button->setStyleSheet(QStringLiteral("background-color: rgba(251, 0, 0, 64);"));
        cancel_delete_admin_button->setAutoDefault(false);

        horizontalLayout_3->addWidget(cancel_delete_admin_button);

        submit_delete_admin_button = new QPushButton(DeleteAdminDialog);
        submit_delete_admin_button->setObjectName(QStringLiteral("submit_delete_admin_button"));
        sizePolicy1.setHeightForWidth(submit_delete_admin_button->sizePolicy().hasHeightForWidth());
        submit_delete_admin_button->setSizePolicy(sizePolicy1);
        submit_delete_admin_button->setStyleSheet(QStringLiteral("background-color: rgba(251, 0, 0, 64);"));
        submit_delete_admin_button->setAutoDefault(false);

        horizontalLayout_3->addWidget(submit_delete_admin_button);


        verticalLayout_3->addLayout(horizontalLayout_3);


        retranslateUi(DeleteAdminDialog);

        cancel_delete_admin_button->setDefault(true);
        submit_delete_admin_button->setDefault(true);


        QMetaObject::connectSlotsByName(DeleteAdminDialog);
    } // setupUi

    void retranslateUi(QDialog *DeleteAdminDialog)
    {
        DeleteAdminDialog->setWindowTitle(QApplication::translate("DeleteAdminDialog", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("DeleteAdminDialog", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; color:#a60909;\">\330\245\330\263\331\205 \330\247\331\204\331\205\330\263\330\252\330\256\330\257\331\205</span></p></body></html>", Q_NULLPTR));
        label_2->setText(QApplication::translate("DeleteAdminDialog", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; color:#a60909;\">\331\203\331\204\331\205\330\251 \330\247\331\204\331\205\330\261\331\210\330\261</span></p></body></html>", Q_NULLPTR));
        cancel_delete_admin_button->setText(QApplication::translate("DeleteAdminDialog", "\330\245\330\247\331\204\330\272\330\247\330\241", Q_NULLPTR));
        submit_delete_admin_button->setText(QApplication::translate("DeleteAdminDialog", "\330\255\330\260\331\201", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DeleteAdminDialog: public Ui_DeleteAdminDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETEADMINDIALOG_H
