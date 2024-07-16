/********************************************************************************
** Form generated from reading UI file 'changepassword.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGEPASSWORD_H
#define UI_CHANGEPASSWORD_H

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

class Ui_ChangePassword
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QLabel *label;
    QLineEdit *oldPasswordInput;
    QLineEdit *newPasswordInput;
    QPushButton *changePasswordButton;
    QPushButton *backButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ChangePassword)
    {
        if (ChangePassword->objectName().isEmpty())
            ChangePassword->setObjectName("ChangePassword");
        ChangePassword->resize(600, 400);
        ChangePassword->setStyleSheet(QString::fromUtf8("QMainWindow {\n"
"	background-color : rgb(166,167,255);\n"
"}"));
        centralwidget = new QWidget(ChangePassword);
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
        label->setGeometry(QRect(50, 10, 241, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Microsoft Himalaya")});
        font.setPointSize(22);
        label->setFont(font);
        label->setCursor(QCursor(Qt::IBeamCursor));
        label->setAlignment(Qt::AlignCenter);
        oldPasswordInput = new QLineEdit(widget);
        oldPasswordInput->setObjectName("oldPasswordInput");
        oldPasswordInput->setGeometry(QRect(10, 70, 311, 31));
        oldPasswordInput->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	background-color : rgb(255, 255, 255);\n"
"	border-radius : 10px;\n"
"	border : 1px solid rgb(0, 0, 0);\n"
"}\n"
"QLineEdit:focus {\n"
"    border: 2px solid rgb(0, 85, 255);\n"
"}"));
        newPasswordInput = new QLineEdit(widget);
        newPasswordInput->setObjectName("newPasswordInput");
        newPasswordInput->setGeometry(QRect(10, 120, 311, 31));
        newPasswordInput->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	background-color : rgb(255, 255, 255);\n"
"	border-radius : 10px;\n"
"	border : 1px solid rgb(0, 0, 0);\n"
"}\n"
"QLineEdit:focus {\n"
"    border: 2px solid rgb(0, 85, 255);\n"
"}"));
        changePasswordButton = new QPushButton(centralwidget);
        changePasswordButton->setObjectName("changePasswordButton");
        changePasswordButton->setGeometry(QRect(240, 240, 111, 41));
        changePasswordButton->setCursor(QCursor(Qt::PointingHandCursor));
        changePasswordButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color : rgb(240, 240, 240);\n"
"	border-radius : 10px;\n"
"	border : 1px solid rgb(0, 0, 0);\n"
"}"));
        backButton = new QPushButton(centralwidget);
        backButton->setObjectName("backButton");
        backButton->setGeometry(QRect(260, 310, 75, 24));
        backButton->setCursor(QCursor(Qt::PointingHandCursor));
        backButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color : rgb(255, 0, 4);\n"
"	border-radius : 10px;\n"
"	border : 1px solid rgb(0, 0, 0);\n"
"}"));
        ChangePassword->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ChangePassword);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 600, 22));
        ChangePassword->setMenuBar(menubar);
        statusbar = new QStatusBar(ChangePassword);
        statusbar->setObjectName("statusbar");
        ChangePassword->setStatusBar(statusbar);

        retranslateUi(ChangePassword);

        QMetaObject::connectSlotsByName(ChangePassword);
    } // setupUi

    void retranslateUi(QMainWindow *ChangePassword)
    {
        ChangePassword->setWindowTitle(QCoreApplication::translate("ChangePassword", "Change Password", nullptr));
        label->setText(QCoreApplication::translate("ChangePassword", "Enter Old & New Password", nullptr));
        oldPasswordInput->setPlaceholderText(QCoreApplication::translate("ChangePassword", "Enter Old Password", nullptr));
        newPasswordInput->setPlaceholderText(QCoreApplication::translate("ChangePassword", "Enter New Password", nullptr));
        changePasswordButton->setText(QCoreApplication::translate("ChangePassword", "Change Password", nullptr));
        backButton->setText(QCoreApplication::translate("ChangePassword", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChangePassword: public Ui_ChangePassword {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGEPASSWORD_H
