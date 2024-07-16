#ifndef CHANGEPASSWORD_H
#define CHANGEPASSWORD_H

#include "mainwindow.h"
#include <QMainWindow>
#include <QJsonObject>
#include <QJsonArray>
#include <QDir>
#include <QFile>
#include <QJsonDocument>
#include <QMediaPlayer>
#include <QAudioOutput>
#include <QByteArray>
#include <qDebug>

namespace Ui {
class ChangePassword;
}

class ChangePassword : public QMainWindow
{
    Q_OBJECT

public:
    explicit ChangePassword(QWidget *parent = nullptr);
    QJsonObject currentAccount;
    void overwriteJsonFile(int input){
        QDir appDir(QCoreApplication::applicationDirPath());
        QString jsonFilePath = appDir.filePath("accounts.json");
        QFile jsonFile(jsonFilePath);
        jsonFile.open(QIODevice::ReadOnly);
        QByteArray readAccounts = jsonFile.readAll();
        QJsonDocument changeToJson = QJsonDocument::fromJson(readAccounts);
        QJsonObject jsonObject = changeToJson.object();
        QJsonArray allAccounts = jsonObject["Accounts"].toArray();
        jsonFile.close();
        for (int i = 0;i < allAccounts.size();++i){
            QJsonObject account = allAccounts[i].toObject();
            if (account["id"] == this->currentAccount["id"]){
                account["password"] = input;
                this->currentAccount["password"] = input;
                allAccounts[i] = account;
                break;
            }
        }
        jsonObject["Accounts"] = allAccounts;
        QJsonDocument newDoc(jsonObject);
        jsonFile.open(QIODevice::WriteOnly);
        jsonFile.write(newDoc.toJson());
        jsonFile.close();
    }

    QJsonArray getAllAccounts(){
        QDir appDir(QCoreApplication::applicationDirPath());
        QString jsonFilePath = appDir.filePath("accounts.json");
        QFile jsonFile(jsonFilePath);
        jsonFile.open(QIODevice::ReadOnly);
        QByteArray readAccounts = jsonFile.readAll();
        QJsonDocument changeToJson = QJsonDocument::fromJson(readAccounts);
        QJsonObject jsonObject = changeToJson.object();
        QJsonArray allAccounts = jsonObject["Accounts"].toArray();
        jsonFile.close();
        return allAccounts;
    }

    bool checkNewPassword(QJsonArray accounts,int password){
        foreach(QJsonValue value,accounts){
            QJsonObject account = value.toObject();
            if(account["password"] == password){
                return false;
            }
        }
        return true;
    }

    bool checkOldPassword(int oldPass){
        if (this->currentAccount["password"].toInt() == oldPass){
            return true;
        }
        return false;
    }

    ~ChangePassword();

private slots:
    void on_changePasswordButton_clicked();


    void on_backButton_clicked();

private:
    Ui::ChangePassword *ui;
    QMediaPlayer *player;
    QAudioOutput *audioOutput;
};

#endif // CHANGEPASSWORD_H
