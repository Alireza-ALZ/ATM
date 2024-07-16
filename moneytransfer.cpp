#include "moneytransfer.h"
#include "ui_moneytransfer.h"
#include "home.h"
#include <QString>

MoneyTransfer::MoneyTransfer(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MoneyTransfer)
    , player(new QMediaPlayer)
    , audioOutput(new QAudioOutput)
{
    ui->setupUi(this);
    QDir appDir(QCoreApplication::applicationDirPath());
    QString audioFilePath = appDir.filePath("MoneyTransfer.mp3");
    player->setAudioOutput(audioOutput);
    player->setSource(QUrl::fromLocalFile(audioFilePath));
    player->play();
}

MoneyTransfer::~MoneyTransfer()
{
    delete ui;
    delete player;
    delete audioOutput;
}


void MoneyTransfer::on_transferButton_clicked()
{
    QString cardInput = ui->cardNumberInput->text();
    int cashInput = ui->cashInput->text().toInt();
    QJsonObject destinationAccount = this->findAccount(this->getAllAccounts(),cardInput);
    if (cashInput <= this->currentAccount["balance"].toInt()){
        if (!destinationAccount.isEmpty()){
            this->overwriteJsonFile(destinationAccount,cashInput);
            ui->statusbar->showMessage("It's Done !",3000);
        } else {
            ui->statusbar->showMessage("Card Number Is Not Valid !",3000);
        }
    } else {
        ui->statusbar->showMessage("Inventory Is Empty !",3000);
    }
}

void MoneyTransfer::on_backButton_clicked()
{
    Home* newHome = new Home(this->currentAccount);
    newHome->show();
    this->~MoneyTransfer();
}
