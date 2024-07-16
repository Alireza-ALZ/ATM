#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QJsonDocument>
#include <QJsonArray>
#include <QJsonObject>
#include <QCoreApplication>
#include <QDir>
#include <QFile>
#include <QByteArray>
#include <QMediaPlayer>
#include <QAudioOutput>
#include <qDebug>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

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

    bool checkPassword(QJsonArray accounts,int password){
        foreach(QJsonValue value,accounts){
            QJsonObject account = value.toObject();
            if(account["password"] == password){
                return true;
            }
        }
        return false;
    }

    QJsonObject findAccount(QJsonArray accounts,int password){
        foreach(QJsonValue value,accounts){
            QJsonObject account = value.toObject();
            if(account["password"] == password){
                return account;
            }
        }
        return {};
    }

private slots:
    void on_loginButton_clicked();

private:
    Ui::MainWindow *ui;
    QMediaPlayer *player;
    QAudioOutput *audioOutput;
};
#endif // MAINWINDOW_H
