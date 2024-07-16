#ifndef MONEYTRANSFER_H
#define MONEYTRANSFER_H

#include "mainwindow.h"
#include "qjsonarray.h"
#include <QMainWindow>
#include <QJsonObject>
#include <QMediaPlayer>
#include <QAudioOutput>

namespace Ui {
class MoneyTransfer;
}

class MoneyTransfer : public QMainWindow
{
    Q_OBJECT

public:
    explicit MoneyTransfer(QWidget *parent = nullptr);
    QJsonObject currentAccount;

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

    QJsonObject findAccount(QJsonArray accounts,QString cardInput){
        foreach(QJsonValue value,accounts){
            QJsonObject account = value.toObject();
            if(account["card"] == cardInput){
                return account;
            }
        }
        return {};
    }

    void overwriteJsonFile(QJsonObject destination,int input){
        QDir appDir(QCoreApplication::applicationDirPath());
        QString jsonFilePath = appDir.filePath("accounts.json");
        QFile jsonFile(jsonFilePath);
        jsonFile.open(QIODevice::ReadOnly);
        QByteArray readAccounts = jsonFile.readAll();
        QJsonDocument changeToJson = QJsonDocument::fromJson(readAccounts);
        QJsonObject jsonObject = changeToJson.object();
        QJsonArray allAccounts = jsonObject["Accounts"].toArray();
        jsonFile.close();
        destination["balance"] = destination["balance"].toInt() + input;
        for (int i = 0;i < allAccounts.size();++i){
            QJsonObject account = allAccounts[i].toObject();
            if (account["id"] == destination["id"]){
                account = destination;
                allAccounts[i] = account;
            }
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
    ~MoneyTransfer();

private slots:
    void on_transferButton_clicked();

    void on_backButton_clicked();

private:
    Ui::MoneyTransfer *ui;
    QMediaPlayer *player;
    QAudioOutput *audioOutput;
};

#endif // MONEYTRANSFER_H
