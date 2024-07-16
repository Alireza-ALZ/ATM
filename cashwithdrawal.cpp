#include "cashwithdrawal.h"
#include "ui_cashwithdrawal.h"
#include "home.h"
#include <qDebug>

cashWithdrawal::cashWithdrawal(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::cashWithdrawal)
    , player(new QMediaPlayer)
    , audioOutput(new QAudioOutput)
{
    ui->setupUi(this);
    QDir appDir(QCoreApplication::applicationDirPath());
    QString audioFilePath = appDir.filePath("CashWithdrawal.mp3");
    player->setAudioOutput(audioOutput);
    player->setSource(QUrl::fromLocalFile(audioFilePath));
    player->play();
}

cashWithdrawal::~cashWithdrawal()
{
    delete ui;
    delete player;
    delete audioOutput;
}

void cashWithdrawal::on_cashWithdrawalButton_clicked()
{
    int cashInput = ui->cashInput->text().toInt();
    if (this->currentAccount["balance"].toInt() >= cashInput){
        this->overwriteJsonFile(cashInput);
        ui->statusbar->showMessage("It's Done !",3000);
    } else {
        ui->statusbar->showMessage("Inventory Is Empty !",3000);
    }
}



void cashWithdrawal::on_backButton_clicked()
{
    Home* newHome = new Home(this->currentAccount);
    newHome->show();
    this->~cashWithdrawal();
}

