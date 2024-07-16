/********************************************************************************
** Form generated from reading UI file 'information.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFORMATION_H
#define UI_INFORMATION_H

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

class Ui_Information
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *showName;
    QLineEdit *showCardNumber;
    QLineEdit *showBalance;
    QLineEdit *showTax;
    QPushButton *backButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Information)
    {
        if (Information->objectName().isEmpty())
            Information->setObjectName("Information");
        Information->resize(600, 400);
        centralwidget = new QWidget(Information);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8("QWidget {\n"
"	background-color : rgb(166,167,255);\n"
"}\n"
""));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(220, 20, 141, 51));
        QFont font;
        font.setFamilies({QString::fromUtf8("Microsoft Himalaya")});
        font.setPointSize(24);
        label->setFont(font);
        label->setCursor(QCursor(Qt::IBeamCursor));
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	background-color : rgb(240, 240, 240);\n"
"	border-radius : 10px;\n"
"	border: 1px solid rgb(0, 0, 0);\n"
"}"));
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(70, 100, 71, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Microsoft Himalaya")});
        font1.setPointSize(20);
        label_2->setFont(font1);
        label_2->setCursor(QCursor(Qt::IBeamCursor));
        label_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	background-color : rgb(255, 251, 201);\n"
"	border-radius : 10px;\n"
"	border: 1px solid rgb(0, 0, 0);\n"
"}"));
        label_2->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(50, 150, 111, 41));
        label_3->setFont(font1);
        label_3->setCursor(QCursor(Qt::IBeamCursor));
        label_3->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	background-color : rgb(255, 251, 201);\n"
"	border-radius : 10px;\n"
"	border: 1px solid rgb(0, 0, 0);\n"
"}"));
        label_3->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(60, 200, 81, 41));
        label_4->setFont(font1);
        label_4->setCursor(QCursor(Qt::IBeamCursor));
        label_4->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	background-color : rgb(255, 251, 201);\n"
"	border-radius : 10px;\n"
"	border: 1px solid rgb(0, 0, 0);\n"
"}"));
        label_4->setAlignment(Qt::AlignCenter);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(70, 250, 61, 41));
        label_5->setFont(font1);
        label_5->setCursor(QCursor(Qt::IBeamCursor));
        label_5->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	background-color : rgb(255, 251, 201);\n"
"	border-radius : 10px;\n"
"	border: 1px solid rgb(0, 0, 0);\n"
"}"));
        label_5->setAlignment(Qt::AlignCenter);
        showName = new QLineEdit(centralwidget);
        showName->setObjectName("showName");
        showName->setGeometry(QRect(240, 100, 321, 31));
        showName->setFont(font1);
        showName->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	background-color : rgb(255, 255, 255);\n"
"	border-radius : 10px;\n"
"	border : 2px solid rgb(0, 85, 255);\n"
"}"));
        showName->setAlignment(Qt::AlignCenter);
        showName->setReadOnly(true);
        showCardNumber = new QLineEdit(centralwidget);
        showCardNumber->setObjectName("showCardNumber");
        showCardNumber->setGeometry(QRect(240, 150, 321, 31));
        showCardNumber->setFont(font1);
        showCardNumber->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	background-color : rgb(255, 255, 255);\n"
"	border-radius : 10px;\n"
"	border : 2px solid rgb(0, 85, 255);\n"
"}"));
        showCardNumber->setAlignment(Qt::AlignCenter);
        showCardNumber->setReadOnly(true);
        showBalance = new QLineEdit(centralwidget);
        showBalance->setObjectName("showBalance");
        showBalance->setGeometry(QRect(240, 200, 321, 31));
        showBalance->setFont(font1);
        showBalance->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	background-color : rgb(255, 255, 255);\n"
"	border-radius : 10px;\n"
"	border : 2px solid rgb(0, 85, 255);\n"
"}"));
        showBalance->setAlignment(Qt::AlignCenter);
        showBalance->setReadOnly(true);
        showTax = new QLineEdit(centralwidget);
        showTax->setObjectName("showTax");
        showTax->setGeometry(QRect(240, 250, 321, 31));
        showTax->setFont(font1);
        showTax->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	background-color : rgb(255, 255, 255);\n"
"	border-radius : 10px;\n"
"	border : 2px solid rgb(0, 85, 255);\n"
"}"));
        showTax->setAlignment(Qt::AlignCenter);
        showTax->setReadOnly(true);
        backButton = new QPushButton(centralwidget);
        backButton->setObjectName("backButton");
        backButton->setGeometry(QRect(240, 310, 75, 24));
        backButton->setCursor(QCursor(Qt::PointingHandCursor));
        backButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color : rgb(255, 0, 4);\n"
"	border-radius : 10px;\n"
"	border : 1px solid rgb(0, 0, 0);\n"
"}"));
        Information->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Information);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 600, 22));
        Information->setMenuBar(menubar);
        statusbar = new QStatusBar(Information);
        statusbar->setObjectName("statusbar");
        Information->setStatusBar(statusbar);

        retranslateUi(Information);

        QMetaObject::connectSlotsByName(Information);
    } // setupUi

    void retranslateUi(QMainWindow *Information)
    {
        Information->setWindowTitle(QCoreApplication::translate("Information", "Information", nullptr));
        label->setText(QCoreApplication::translate("Information", "Information", nullptr));
        label_2->setText(QCoreApplication::translate("Information", "Name", nullptr));
        label_3->setText(QCoreApplication::translate("Information", "Card Number", nullptr));
        label_4->setText(QCoreApplication::translate("Information", "Balance", nullptr));
        label_5->setText(QCoreApplication::translate("Information", "Tax", nullptr));
        backButton->setText(QCoreApplication::translate("Information", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Information: public Ui_Information {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFORMATION_H
