#include "changepassword.h"
#include "ui_changepassword.h"
#include "home.h"

ChangePassword::ChangePassword(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ChangePassword)
    , player(new QMediaPlayer)
    , audioOutput(new QAudioOutput)
{
    ui->setupUi(this);
    QDir appDir(QCoreApplication::applicationDirPath());
    QString audioFilePath = appDir.filePath("ChangePassword.mp3");
    player->setAudioOutput(audioOutput);
    player->setSource(QUrl::fromLocalFile(audioFilePath));
    player->play();
}

ChangePassword::~ChangePassword()
{
    delete ui;
    delete player;
    delete audioOutput;
}

void ChangePassword::on_changePasswordButton_clicked()
{
    int oldPasswordInput = ui->oldPasswordInput->text().toInt();
    int newPasswordInput = ui->newPasswordInput->text().toInt();
    if (this->checkOldPassword(oldPasswordInput)){
        if (this->checkNewPassword(getAllAccounts(),newPasswordInput)){
            overwriteJsonFile(newPasswordInput);
            ui->statusbar->showMessage("It's Done !",3000);
        } else {
            ui->statusbar->showMessage("This Password Has Already Taken !",3000);
        }
    } else {
        ui->statusbar->showMessage("Old Password Is Wrong !",3000);
    }
}

void ChangePassword::on_backButton_clicked()
{
    Home* newHome = new Home(this->currentAccount);
    newHome->show();
    this->~ChangePassword();
}
