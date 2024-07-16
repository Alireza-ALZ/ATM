#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "home.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , player(new QMediaPlayer(this))
    , audioOutput(new QAudioOutput(this))
{
    ui->setupUi(this);
    QDir appDir(QCoreApplication::applicationDirPath());
    QString audioFilePath = appDir.filePath("Mainwindow.mp3");
    player->setAudioOutput(audioOutput);
    player->setSource(QUrl::fromLocalFile(audioFilePath));
    player->play();
}

MainWindow::~MainWindow()
{
    delete ui;
    delete player;
    delete audioOutput;
}

void MainWindow::on_loginButton_clicked()
{
    int passwordInput = ui->passwordInput->text().toInt();
    QJsonArray allAccounts = this->getAllAccounts();
    if(this->checkPassword(allAccounts,passwordInput)){
        Home* newHome = new Home(findAccount(getAllAccounts(),passwordInput));
        newHome->show();
        newHome->currentAccount = findAccount(getAllAccounts(),passwordInput);
        this->~MainWindow();
    } else {
        ui->statusbar->showMessage("Wrong Password !",2000);
    }
}
