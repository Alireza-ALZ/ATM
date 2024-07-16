#ifndef INFORMATION_H
#define INFORMATION_H

#include <QMainWindow>
#include <QJsonObject>

namespace Ui {
class Information;
}

class Information : public QMainWindow
{
    Q_OBJECT

public:
    explicit Information(QJsonObject account,QWidget *parent = nullptr);
    QJsonObject currentAccount;
    ~Information();

private slots:
    void on_backButton_clicked();

private:
    Ui::Information *ui;
};

#endif // INFORMATION_H
