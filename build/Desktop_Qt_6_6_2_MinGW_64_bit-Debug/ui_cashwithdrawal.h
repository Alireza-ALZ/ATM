/********************************************************************************
** Form generated from reading UI file 'cashwithdrawal.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CASHWITHDRAWAL_H
#define UI_CASHWITHDRAWAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_cashWithdrawal
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QLabel *label;
    QLineEdit *cashInput;
    QPushButton *cashWithdrawalButton;
    QPushButton *backButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *cashWithdrawal)
    {
        if (cashWithdrawal->objectName().isEmpty())
            cashWithdrawal->setObjectName("cashWithdrawal");
        cashWithdrawal->resize(600, 400);
        cashWithdrawal->setStyleSheet(QString::fromUtf8("QMainWindow {\n"
"	background-color : rgb(166,167,255);\n"
"}"));
        centralwidget = new QWidget(cashWithdrawal);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8("QWidget {\n"
"	background-color : rgb(166,167,255);\n"
"}"));
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(130, 30, 331, 181));
        widget->setStyleSheet(QString::fromUtf8("QWidget {\n"
"	background-color : rgb(255, 251, 201);\n"
"	border-radius : 10px;\n"
"}"));
        label = new QLabel(widget);
        label->setObjectName("label");
        label->setGeometry(QRect(50, 20, 221, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Microsoft Himalaya")});
        font.setPointSize(22);
        label->setFont(font);
        label->setCursor(QCursor(Qt::IBeamCursor));
        label->setAlignment(Qt::AlignCenter);
        cashInput = new QLineEdit(widget);
        cashInput->setObjectName("cashInput");
        cashInput->setGeometry(QRect(10, 90, 311, 31));
        cashInput->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	background-color : rgb(255, 255, 255);\n"
"	border-radius : 10px;\n"
"	border : 1px solid rgb(0, 0, 0);\n"
"}\n"
"QLineEdit:focus {\n"
"    border: 2px solid rgb(0, 85, 255);\n"
"}"));
        cashWithdrawalButton = new QPushButton(centralwidget);
        cashWithdrawalButton->setObjectName("cashWithdrawalButton");
        cashWithdrawalButton->setGeometry(QRect(240, 230, 111, 41));
        cashWithdrawalButton->setCursor(QCursor(Qt::PointingHandCursor));
        cashWithdrawalButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color : rgb(240, 240, 240);\n"
"	border-radius : 10px;\n"
"	border : 1px solid rgb(0, 0, 0);\n"
"}"));
        backButton = new QPushButton(centralwidget);
        backButton->setObjectName("backButton");
        backButton->setGeometry(QRect(260, 300, 75, 24));
        backButton->setCursor(QCursor(Qt::PointingHandCursor));
        backButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color : rgb(255, 0, 4);\n"
"	border-radius : 10px;\n"
"	border : 1px solid rgb(0, 0, 0);\n"
"}"));
        cashWithdrawal->setCentralWidget(centralwidget);
        menubar = new QMenuBar(cashWithdrawal);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 600, 22));
        cashWithdrawal->setMenuBar(menubar);
        statusbar = new QStatusBar(cashWithdrawal);
        statusbar->setObjectName("statusbar");
        cashWithdrawal->setStatusBar(statusbar);

        retranslateUi(cashWithdrawal);

        QMetaObject::connectSlotsByName(cashWithdrawal);
    } // setupUi

    void retranslateUi(QMainWindow *cashWithdrawal)
    {
        cashWithdrawal->setWindowTitle(QCoreApplication::translate("cashWithdrawal", "Cash Withdrawal", nullptr));
        label->setText(QCoreApplication::translate("cashWithdrawal", "Enter Cash", nullptr));
        cashInput->setPlaceholderText(QCoreApplication::translate("cashWithdrawal", "Enter Cash You Want", nullptr));
        cashWithdrawalButton->setText(QCoreApplication::translate("cashWithdrawal", "Cash Withdrawal", nullptr));
        backButton->setText(QCoreApplication::translate("cashWithdrawal", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class cashWithdrawal: public Ui_cashWithdrawal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CASHWITHDRAWAL_H
