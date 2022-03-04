#include "tcpserver.h"

TcpServer::TcpServer(QObject *parent, int port) : QTcpServer(parent)
{
    listen(QHostAddress::Any, port);
}

void TcpServer::incomingConnection(qintptr socketDescriptor)    // 有新的连接可用时自动调用
{
    TcpClientSocket *clientSocket = new TcpClientSocket(this);

    connect(clientSocket, SIGNAL(updateClients(QString,int)), this, SLOT(updateClients(QString,int)));
    connect(clientSocket, SIGNAL(disconnected(qintptr)), this, (SLOT(slot_disconnected(qintptr))));

    clientSocket->setSocketDescriptor(socketDescriptor);    // 将标识符赋予socket对象
    clientSocketList.append(clientSocket);
}

void TcpServer::updateClients(QString msg, int length)
{
    emit updateServer(msg, length);
//    for(int i=0; i<clientSocketList.count(); i++)
//    {
//        QTcpSocket *item = clientSocketList.at(i);
//        if(item->write(msg.toLatin1(), length) != length)
//        {
//            continue;
//        }
//    }
}

void TcpServer::slot_disconnected(qintptr descriptor)   // 断开连接，列表中删除对应的连接
{
    for(int i=0; i<clientSocketList.count(); i++)
    {
        QTcpSocket *item = clientSocketList.at(i);
        if(item->socketDescriptor() == descriptor)
        {
            clientSocketList.removeAt(i);
            return;
        }
    }
}
