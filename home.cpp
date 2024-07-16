#include "home.h"
#include "ui_home.h"
#include "cashwithdrawal.h"
#include "moneytransfer.h"
#include "changepassword.h"
#include "information.h"
#include <QString>
#include <QJsonObject>
#include <qDebug>

Home::Home(QJsonObject account,QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Home),
    player(new QMediaPlayer),
    audioOutput(new QAudioOutput)
{
    ui->setupUi(this);
    QDir appDir(QCoreApplication::applicationDirPath());
    QString audioFilePath = appDir.filePath("Home.mp3");
    player->setAudioOutput(audioOutput);
    player->setSource(QUrl::fromLocalFile(audioFilePath));
    player->play();
    QString helloMessage = "Hello ";
    helloMessage += account["name"].toString();
    ui->helloMessage->setText(helloMessage);
    this->currentAccount = account;
}

Home::~Home()
{
    delete ui;
    delete player;
    delete audioOutput;
}

void Home::on_cashWithdrawalButton_clicked()
{
    cashWithdrawal* cash = new cashWithdrawal;
    cash->show();
    cash->currentAccount = this->currentAccount;
    this->~Home();
}


void Home::on_moneyTransferButton_clicked()
{
    MoneyTransfer* transfer = new MoneyTransfer;
    transfer->show();
    transfer->currentAccount = this->currentAccount;
    this->~Home();
}


void Home::on_balanceButton_clicked()
{
    QString balance = "Your Balance Is ";
    balance += QString::number(this->currentAccount["balance"].toInt());
    ui->console->setText(balance);
}


void Home::on_payTaxButton_clicked()
{
    if (!this->currentAccount["tax"].toBool()){
        if (this->currentAccount["balance"].toInt() >= 30000){
            this->overwriteJsonFile(30000);
            ui->console->setText("It's Done !");
        } else {
            ui->console->setText("Your Inventory Is Empty ! Try Again Later...");
        }
    } else {
        ui->console->setText("You Have Already Payed Your Tax !");
    }
}

void Home::on_changePasswordButton_clicked()
{
    ChangePassword* changePass = new ChangePassword;
    changePass->show();
    changePass->currentAccount = this->currentAccount;
    this->~Home();
}

void Home::on_logoutButton_clicked()
{
    MainWindow* loginPage = new MainWindow;
    loginPage->show();
    this->~Home();
}

void Home::on_informationButton_clicked()
{
    Information* informationPage = new Information(this->currentAccount);
    informationPage->show();
    this->~Home();
}

