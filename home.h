#ifndef HOME_H
#define HOME_H

#include "mainwindow.h"
#include <QMainWindow>
#include <QDir>
#include <QJsonObject>
#include <QJsonDocument>
#include <QJsonArray>
#include <QJsonObject>
#include <QMediaPlayer>
#include <QAudioOutput>
#include <QByteArray>
#include <qDebug>
#include <QFile>

namespace Ui {
class Home;
}

class Home : public QMainWindow
{
    Q_OBJECT

public:
    explicit Home(QJsonObject account,QWidget *parent = nullptr);
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
                account["tax"] = true;
                this->currentAccount["tax"] = true;
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
    ~Home();

private slots:
    void on_cashWithdrawalButton_clicked();

    void on_moneyTransferButton_clicked();

    void on_balanceButton_clicked();

    void on_payTaxButton_clicked();

    void on_changePasswordButton_clicked();

    void on_logoutButton_clicked();

    void on_informationButton_clicked();

private:
    Ui::Home *ui;
    QMediaPlayer *player;
    QAudioOutput *audioOutput;
};

#endif // HOME_H
