#include "vserver.h"

VServer::VServer(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::VServer)
{
    ui->setupUi(this);

    port = 6010;    // 设置端口号
    connect(ui->create_btn, SIGNAL(clicked()), this, SLOT(slot_createServer()));
}

VServer::~VServer()
{
    delete ui;
}

void VServer::updateServer(QString msg, int length)
{
    ui->connectedList_lw->addItem(msg.left(length));    // 添加客户端消息
//    ui->connectedList_lw->addItem(QString("client connected!"));
}

void VServer::slot_createServer()
{
    server = new TcpServer(this, port);
    connect(server, SIGNAL(updateServer(QString,int)), this, SLOT(updateServer(QString,int)));
    ui->create_btn->setEnabled(false);
}
