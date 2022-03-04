#ifndef VTCPSERVER_H
#define VTCPSERVER_H

#include <QDebug>
#include <QTcpServer>

#include "tcpclientsocket.h"

class TcpServer : public QTcpServer
{
    Q_OBJECT

public:
    TcpServer(QObject *parent=0, int port=0);   // 服务器类
    QList<TcpClientSocket *> clientSocketList;  // 保存客户端连接的列表

signals:
    void updateServer(QString, int);      // 通知GUI更新

protected slots:
    void updateClients(QString, int);   // 向所有客户端更新消息, 可改成向客户端发送数据
    void slot_disconnected(qintptr);      // 断开连接，列表中删除对应的连接

protected:
    void incomingConnection(qintptr);     // 有新的连接可用时自动调用
};

#endif // VTCPSERVER_H
