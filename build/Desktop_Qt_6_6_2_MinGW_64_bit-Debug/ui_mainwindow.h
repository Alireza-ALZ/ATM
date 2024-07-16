/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

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

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *welcome;
    QWidget *loginBox;
    QLineEdit *passwordInput;
    QPushButton *loginButton;
    QLabel *label;
    QLabel *label_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        MainWindow->setStyleSheet(QString::fromUtf8("QMainWindow {\n"
"	background-color : rgb(166,167,255);\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8("QWidget {\n"
"	background-color : rgb(166,167,255);\n"
"}"));
        welcome = new QLabel(centralwidget);
        welcome->setObjectName("welcome");
        welcome->setGeometry(QRect(190, 40, 411, 121));
        QFont font;
        font.setFamilies({QString::fromUtf8("Microsoft Himalaya")});
        font.setPointSize(48);
        welcome->setFont(font);
        welcome->setCursor(QCursor(Qt::IBeamCursor));
        welcome->setAlignment(Qt::AlignCenter);
        loginBox = new QWidget(centralwidget);
        loginBox->setObjectName("loginBox");
        loginBox->setGeometry(QRect(370, 210, 371, 231));
        loginBox->setStyleSheet(QString::fromUtf8("QWidget {\n"
"	background-color : rgb(255, 251, 201);\n"
"	border-radius : 10px;\n"
"}"));
        passwordInput = new QLineEdit(loginBox);
        passwordInput->setObjectName("passwordInput");
        passwordInput->setGeometry(QRect(10, 90, 351, 41));
        passwordInput->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	background-color : rgb(255, 255, 255);\n"
"	border-radius : 10px;\n"
"	border : 1px solid rgb(0, 0, 0);\n"
"}\n"
"QLineEdit:focus {\n"
"    border: 2px solid rgb(0, 85, 255);\n"
"}"));
        loginButton = new QPushButton(loginBox);
        loginButton->setObjectName("loginButton");
        loginButton->setGeometry(QRect(140, 160, 91, 31));
        loginButton->setCursor(QCursor(Qt::PointingHandCursor));
        loginButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color : rgb(240, 240, 240);\n"
"	border-radius : 10px;\n"
"	border : 1px solid rgb(0, 0, 0);\n"
"}"));
        label = new QLabel(loginBox);
        label->setObjectName("label");
        label->setGeometry(QRect(40, 30, 301, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Microsoft Himalaya")});
        font1.setPointSize(24);
        label->setFont(font1);
        label->setCursor(QCursor(Qt::IBeamCursor));
        label->setLayoutDirection(Qt::LeftToRight);
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(60, 210, 221, 231));
        label_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	border-radius : 10px;\n"
"}"));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/Images/Images/Login.jpg")));
        label_2->setScaledContents(true);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "ATM", nullptr));
        welcome->setText(QCoreApplication::translate("MainWindow", "Welcome To ATM App", nullptr));
        passwordInput->setPlaceholderText(QCoreApplication::translate("MainWindow", "Enter Password", nullptr));
        loginButton->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Enter Password Of Your Account", nullptr));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
