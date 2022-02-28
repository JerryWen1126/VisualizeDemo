#include "vserver.h"
#include "ui_vserver.h"

vServer::vServer(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::vServer)
{
    ui->setupUi(this);
}

vServer::~vServer()
{
    delete ui;
}


