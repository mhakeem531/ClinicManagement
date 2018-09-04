/********************************************************************************
** Form generated from reading UI file 'showdailypatients.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWDAILYPATIENTS_H
#define UI_SHOWDAILYPATIENTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ShowDailyPatients
{
public:
    QVBoxLayout *verticalLayout;
    QTableView *today_patients_tabel;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;

    void setupUi(QDialog *ShowDailyPatients)
    {
        if (ShowDailyPatients->objectName().isEmpty())
            ShowDailyPatients->setObjectName(QStringLiteral("ShowDailyPatients"));
        ShowDailyPatients->resize(704, 373);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ShowDailyPatients->sizePolicy().hasHeightForWidth());
        ShowDailyPatients->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(ShowDailyPatients);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        today_patients_tabel = new QTableView(ShowDailyPatients);
        today_patients_tabel->setObjectName(QStringLiteral("today_patients_tabel"));

        verticalLayout->addWidget(today_patients_tabel);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(438, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton = new QPushButton(ShowDailyPatients);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(ShowDailyPatients);

        QMetaObject::connectSlotsByName(ShowDailyPatients);
    } // setupUi

    void retranslateUi(QDialog *ShowDailyPatients)
    {
        ShowDailyPatients->setWindowTitle(QApplication::translate("ShowDailyPatients", "Dialog", Q_NULLPTR));
        pushButton->setText(QApplication::translate("ShowDailyPatients", "Ok", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ShowDailyPatients: public Ui_ShowDailyPatients {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWDAILYPATIENTS_H
