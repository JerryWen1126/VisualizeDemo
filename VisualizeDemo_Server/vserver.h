#ifndef VSERVER_H
#define VSERVER_H

#include <QWidget>
#include <QDebug>

#include "tcpserver.h"
#include "ui_vserver.h"

namespace Ui {
class VServer;
}

class VServer : public QWidget             //GUI
{
    Q_OBJECT

public:
    explicit VServer(QWidget *parent = 0);
    ~VServer();

private:
    Ui::VServer *ui;

    int port;
    TcpServer *server;

public slots:
    void updateServer(QString, int);    // 更新VServer界面显示
    void slot_createServer();           // 创建一个服务
};

#endif // VSERVER_H
