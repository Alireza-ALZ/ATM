#ifndef CASHWITHDRAWAL_H
#define CASHWITHDRAWAL_H

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
class cashWithdrawal;
}

class cashWithdrawal : public QMainWindow
{
    Q_OBJECT

public:
    explicit cashWithdrawal(QWidget *parent = nullptr);
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
                account["balance"] = account["balance"].toInt() - input;
                this->currentAccount["balance"] = account["balance"];
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
    ~cashWithdrawal();

private slots:
    void on_cashWithdrawalButton_clicked();

    void on_backButton_clicked();

private:
    Ui::cashWithdrawal *ui;
    QMediaPlayer *player;
    QAudioOutput *audioOutput;
};

#endif // CASHWITHDRAWAL_H
