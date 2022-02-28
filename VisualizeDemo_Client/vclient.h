#ifndef VCLIENT_H
#define VCLIENT_H

#include <QWidget>
#include <QtNetwork/QTcpSocket>
#include <QDebug>

namespace Ui {
class vClient;
}

class vClient : public QWidget
{
    Q_OBJECT

public:
    explicit vClient(QWidget *parent = 0);
    ~vClient();

private slots:
    void on_exit_btn_clicked();
    void isConnect();
    void isDisconnect();
    void readMessage();

    void on_connect_btn_clicked();

private:
    Ui::vClient *ui;
    QTcpSocket *cl;
    bool checkStatus = false;

};

#endif // VCLIENT_H
