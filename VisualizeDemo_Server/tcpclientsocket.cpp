#include "tcpclientsocket.h"

TcpClientSocket::TcpClientSocket(QObject *parent)
{
    connect(this, SIGNAL(readyRead()), this, SLOT(dataRecived()));
    connect(this, SIGNAL(disconnected()), this, SLOT(slot_disconnected()));
}

void TcpClientSocket::dataRecived()
{
    while(bytesAvailable()>0)
    {
        int length = bytesAvailable();
        char buf[1024];
        read(buf, length);
        QString msg = buf;
        emit updateClients(msg, length);
    }
}

void TcpClientSocket::slot_disconnected()
{
    emit disconnected(this->socketDescriptor());
}


