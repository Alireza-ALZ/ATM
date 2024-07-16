#include "information.h"
#include "ui_information.h"
#include "home.h"

Information::Information(QJsonObject account,QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Information)
{
    ui->setupUi(this);
    this->currentAccount = account;
    ui->showName->setText(account["name"].toString());
    ui->showCardNumber->setText(account["card"].toString());
    ui->showBalance->setText(QString::number(account["balance"].toInt()));
    if (account["tax"].toBool()){
        ui->showTax->setText("Tax Paid !");
    } else {
        ui->showTax->setText("Tax Not Paid !");
    }
}
Information::~Information()
{
    delete ui;
}

void Information::on_backButton_clicked()
{
    Home* loginPage = new Home(this->currentAccount);
    loginPage->show();
    this->~Information();
}
