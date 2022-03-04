#ifndef VCLIENTSOCKET_H
#define VCLIENTSOCKET_H

#include <QTcpSocket>

class TcpClientSocket : public QTcpSocket
{
    Q_OBJECT

public:
    TcpClientSocket(QObject *parent=0);

signals:
    void updateClients(QString, int);   // 通知服务器更新所有客户端的消息
    void disconnected(qintptr);         // 通知服务器，该socket断开连接

protected slots:
    void dataRecived();                 // 接收可接收数据
    void slot_disconnected();           // 断开连接
};

#endif // VCLIENTSOCKET_H
