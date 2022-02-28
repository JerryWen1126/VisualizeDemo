#ifndef VSERVER_H
#define VSERVER_H

#include <QWidget>

namespace Ui {
class vServer;
}

class vServer : public QWidget
{
    Q_OBJECT

public:
    explicit vServer(QWidget *parent = 0);
    ~vServer();



private:
    Ui::vServer *ui;
};

#endif // VSERVER_H
