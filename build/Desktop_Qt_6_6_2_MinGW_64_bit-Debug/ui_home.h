/********************************************************************************
** Form generated from reading UI file 'home.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOME_H
#define UI_HOME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Home
{
public:
    QWidget *centralwidget;
    QLabel *helloMessage;
    QPushButton *moneyTransferButton;
    QPushButton *payTaxButton;
    QPushButton *informationButton;
    QPushButton *cashWithdrawalButton;
    QPushButton *balanceButton;
    QPushButton *changePasswordButton;
    QPushButton *logoutButton;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *console;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Home)
    {
        if (Home->objectName().isEmpty())
            Home->setObjectName("Home");
        Home->resize(800, 600);
        Home->setStyleSheet(QString::fromUtf8("QMainWindow {\n"
"	background-color : rgb(166,167,255);\n"
"}"));
        centralwidget = new QWidget(Home);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8("QWidget {\n"
"	background-color : rgb(166,167,255);\n"
"}"));
        helloMessage = new QLabel(centralwidget);
        helloMessage->setObjectName("helloMessage");
        helloMessage->setGeometry(QRect(250, 20, 301, 61));
        QFont font;
        font.setFamilies({QString::fromUtf8("Microsoft Himalaya")});
        font.setPointSize(36);
        helloMessage->setFont(font);
        helloMessage->setCursor(QCursor(Qt::IBeamCursor));
        helloMessage->setAlignment(Qt::AlignCenter);
        moneyTransferButton = new QPushButton(centralwidget);
        moneyTransferButton->setObjectName("moneyTransferButton");
        moneyTransferButton->setGeometry(QRect(570, 150, 121, 51));
        moneyTransferButton->setCursor(QCursor(Qt::PointingHandCursor));
        moneyTransferButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color : rgb(255, 251, 201);\n"
"	border-radius : 10px;\n"
"	border : 1px solid rgb(0, 0, 0);\n"
"}"));
        payTaxButton = new QPushButton(centralwidget);
        payTaxButton->setObjectName("payTaxButton");
        payTaxButton->setGeometry(QRect(570, 250, 121, 51));
        payTaxButton->setCursor(QCursor(Qt::PointingHandCursor));
        payTaxButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color : rgb(255, 251, 201);\n"
"	border-radius : 10px;\n"
"	border : 1px solid rgb(0, 0, 0);\n"
"}"));
        informationButton = new QPushButton(centralwidget);
        informationButton->setObjectName("informationButton");
        informationButton->setGeometry(QRect(570, 350, 121, 51));
        informationButton->setCursor(QCursor(Qt::PointingHandCursor));
        informationButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color : rgb(255, 251, 201);\n"
"	border-radius : 10px;\n"
"	border : 1px solid rgb(0, 0, 0);\n"
"}"));
        cashWithdrawalButton = new QPushButton(centralwidget);
        cashWithdrawalButton->setObjectName("cashWithdrawalButton");
        cashWithdrawalButton->setGeometry(QRect(120, 150, 121, 51));
        cashWithdrawalButton->setCursor(QCursor(Qt::PointingHandCursor));
        cashWithdrawalButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color : rgb(255, 251, 201);\n"
"	border-radius : 10px;\n"
"	border : 1px solid rgb(0, 0, 0);\n"
"}"));
        balanceButton = new QPushButton(centralwidget);
        balanceButton->setObjectName("balanceButton");
        balanceButton->setGeometry(QRect(120, 250, 121, 51));
        balanceButton->setCursor(QCursor(Qt::PointingHandCursor));
        balanceButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color : rgb(255, 251, 201);\n"
"	border-radius : 10px;\n"
"	border : 1px solid rgb(0, 0, 0);\n"
"}"));
        changePasswordButton = new QPushButton(centralwidget);
        changePasswordButton->setObjectName("changePasswordButton");
        changePasswordButton->setGeometry(QRect(120, 350, 121, 51));
        changePasswordButton->setCursor(QCursor(Qt::PointingHandCursor));
        changePasswordButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color : rgb(255, 251, 201);\n"
"	border-radius : 10px;\n"
"	border : 1px solid rgb(0, 0, 0);\n"
"}"));
        logoutButton = new QPushButton(centralwidget);
        logoutButton->setObjectName("logoutButton");
        logoutButton->setGeometry(QRect(360, 440, 91, 31));
        logoutButton->setCursor(QCursor(Qt::PointingHandCursor));
        logoutButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color : rgb(255, 0, 4);\n"
"	border-radius : 10px;\n"
"	border : 1px solid rgb(0, 0, 0);\n"
"}"));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 150, 61, 61));
        label->setPixmap(QPixmap(QString::fromUtf8(":/Images/Images/Right Hand Pointer.png")));
        label->setScaledContents(true);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 250, 61, 61));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/Images/Images/Right Hand Pointer.png")));
        label_2->setScaledContents(true);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(30, 350, 61, 61));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/Images/Images/Right Hand Pointer.png")));
        label_3->setScaledContents(true);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(710, 140, 61, 61));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/Images/Images/Left Hand Pointer.png")));
        label_4->setScaledContents(true);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(710, 250, 61, 61));
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/Images/Images/Left Hand Pointer.png")));
        label_5->setScaledContents(true);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(710, 350, 61, 61));
        label_6->setPixmap(QPixmap(QString::fromUtf8(":/Images/Images/Left Hand Pointer.png")));
        label_6->setScaledContents(true);
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(280, 100, 251, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Microsoft Himalaya")});
        font1.setPointSize(22);
        label_7->setFont(font1);
        label_7->setCursor(QCursor(Qt::IBeamCursor));
        label_7->setAlignment(Qt::AlignCenter);
        console = new QLabel(centralwidget);
        console->setObjectName("console");
        console->setGeometry(QRect(190, 480, 431, 41));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Microsoft Himalaya")});
        font2.setPointSize(24);
        console->setFont(font2);
        console->setAlignment(Qt::AlignCenter);
        Home->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Home);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        Home->setMenuBar(menubar);
        statusbar = new QStatusBar(Home);
        statusbar->setObjectName("statusbar");
        Home->setStatusBar(statusbar);

        retranslateUi(Home);

        QMetaObject::connectSlotsByName(Home);
    } // setupUi

    void retranslateUi(QMainWindow *Home)
    {
        Home->setWindowTitle(QCoreApplication::translate("Home", "Home", nullptr));
        helloMessage->setText(QString());
        moneyTransferButton->setText(QCoreApplication::translate("Home", "Money Transfer", nullptr));
        payTaxButton->setText(QCoreApplication::translate("Home", "Pay Tax", nullptr));
        informationButton->setText(QCoreApplication::translate("Home", "Information", nullptr));
        cashWithdrawalButton->setText(QCoreApplication::translate("Home", "Cash Withdrawal", nullptr));
        balanceButton->setText(QCoreApplication::translate("Home", "Balance", nullptr));
        changePasswordButton->setText(QCoreApplication::translate("Home", "Change Password", nullptr));
        logoutButton->setText(QCoreApplication::translate("Home", "Logout", nullptr));
        label->setText(QString());
        label_2->setText(QString());
        label_3->setText(QString());
        label_4->setText(QString());
        label_5->setText(QString());
        label_6->setText(QString());
        label_7->setText(QCoreApplication::translate("Home", "Please Select Your Order", nullptr));
        console->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Home: public Ui_Home {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOME_H
