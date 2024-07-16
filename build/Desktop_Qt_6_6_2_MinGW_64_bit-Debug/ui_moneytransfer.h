/********************************************************************************
** Form generated from reading UI file 'moneytransfer.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MONEYTRANSFER_H
#define UI_MONEYTRANSFER_H

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

class Ui_MoneyTransfer
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QLabel *label;
    QLineEdit *cardNumberInput;
    QLineEdit *cashInput;
    QPushButton *transferButton;
    QPushButton *backButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MoneyTransfer)
    {
        if (MoneyTransfer->objectName().isEmpty())
            MoneyTransfer->setObjectName("MoneyTransfer");
        MoneyTransfer->resize(600, 400);
        MoneyTransfer->setStyleSheet(QString::fromUtf8("QMainWindow {\n"
"	background-color : rgb(166,167,255);\n"
"}"));
        centralwidget = new QWidget(MoneyTransfer);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8("QWidget {\n"
"	background-color : rgb(166,167,255);\n"
"}"));
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(130, 40, 331, 181));
        widget->setStyleSheet(QString::fromUtf8("QWidget {\n"
"	background-color : rgb(255, 251, 201);\n"
"	border-radius : 10px;\n"
"}"));
        label = new QLabel(widget);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 10, 241, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Microsoft Himalaya")});
        font.setPointSize(22);
        label->setFont(font);
        label->setCursor(QCursor(Qt::IBeamCursor));
        label->setAlignment(Qt::AlignCenter);
        cardNumberInput = new QLineEdit(widget);
        cardNumberInput->setObjectName("cardNumberInput");
        cardNumberInput->setGeometry(QRect(10, 70, 311, 31));
        cardNumberInput->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	background-color : rgb(255, 255, 255);\n"
"	border-radius : 10px;\n"
"	border : 1px solid rgb(0, 0, 0);\n"
"}\n"
"QLineEdit:focus {\n"
"    border: 2px solid rgb(0, 85, 255);\n"
"}"));
        cashInput = new QLineEdit(widget);
        cashInput->setObjectName("cashInput");
        cashInput->setGeometry(QRect(10, 120, 311, 31));
        cashInput->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	background-color : rgb(255, 255, 255);\n"
"	border-radius : 10px;\n"
"	border : 1px solid rgb(0, 0, 0);\n"
"}\n"
"QLineEdit:focus {\n"
"    border: 2px solid rgb(0, 85, 255);\n"
"}"));
        transferButton = new QPushButton(centralwidget);
        transferButton->setObjectName("transferButton");
        transferButton->setGeometry(QRect(230, 240, 111, 41));
        transferButton->setCursor(QCursor(Qt::PointingHandCursor));
        transferButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color : rgb(240, 240, 240);\n"
"	border-radius : 10px;\n"
"	border : 1px solid rgb(0, 0, 0);\n"
"}"));
        backButton = new QPushButton(centralwidget);
        backButton->setObjectName("backButton");
        backButton->setGeometry(QRect(250, 300, 75, 24));
        backButton->setCursor(QCursor(Qt::PointingHandCursor));
        backButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color : rgb(255, 0, 4);\n"
"	border-radius : 10px;\n"
"	border : 1px solid rgb(0, 0, 0);\n"
"}"));
        MoneyTransfer->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MoneyTransfer);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 600, 22));
        MoneyTransfer->setMenuBar(menubar);
        statusbar = new QStatusBar(MoneyTransfer);
        statusbar->setObjectName("statusbar");
        MoneyTransfer->setStatusBar(statusbar);

        retranslateUi(MoneyTransfer);

        QMetaObject::connectSlotsByName(MoneyTransfer);
    } // setupUi

    void retranslateUi(QMainWindow *MoneyTransfer)
    {
        MoneyTransfer->setWindowTitle(QCoreApplication::translate("MoneyTransfer", "Money Transfer", nullptr));
        label->setText(QCoreApplication::translate("MoneyTransfer", "Enter Card Number & Cash", nullptr));
        cardNumberInput->setPlaceholderText(QCoreApplication::translate("MoneyTransfer", "Enter Card Number", nullptr));
        cashInput->setPlaceholderText(QCoreApplication::translate("MoneyTransfer", "Enter Cash", nullptr));
        transferButton->setText(QCoreApplication::translate("MoneyTransfer", "Transfer", nullptr));
        backButton->setText(QCoreApplication::translate("MoneyTransfer", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MoneyTransfer: public Ui_MoneyTransfer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MONEYTRANSFER_H
