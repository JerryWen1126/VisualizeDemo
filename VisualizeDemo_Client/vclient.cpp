#include "vclient.h"
#include "ui_vclient.h"

vClient::vClient(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::vClient)
{
    ui->setupUi(this);
    cl = new QTcpSocket();
    connect(cl, SIGNAL(connected()), this, SLOT(isConnect()));
    connect(cl, SIGNAL(disconnected()), this, SLOT(isDisconnect()));
    connect(cl, SIGNAL(readyRead()), this, SLOT(readMessage()));
}

vClient::~vClient()
{
    delete ui;
    delete cl;
}

void vClient::on_exit_btn_clicked()
{
    this->close();
}

void vClient::isConnect()
{
    ui->status_lb->setText("状态：已连接");
    ui->connect_btn->setText("断开连接");
    checkStatus = true;
}

void vClient::isDisconnect()
{
    ui->status_lb->setText("状态：未连接");
    ui->connect_btn->setText("连接");
    checkStatus = false;
}

void vClient::readMessage()
{

}

void vClient::on_connect_btn_clicked()
{
    if(!checkStatus)
    {
        QString ip = ui->ip_le->text();
        int port = ui->port_le->text().toInt();
        qDebug() << "IP:" << ip;
        qDebug() << "Port:" << port;
        cl->connectToHost(ip, port);
    }
    else
    {
        cl->disconnectFromHost();
    }
}
