/********************************************************************************
** Form generated from reading UI file 'vserver.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VSERVER_H
#define UI_VSERVER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_vServer
{
public:
    QListWidget *connectedList_lw;
    QLabel *connectedList_lb;
    QLabel *title_lb;

    void setupUi(QWidget *vServer)
    {
        if (vServer->objectName().isEmpty())
            vServer->setObjectName(QStringLiteral("vServer"));
        vServer->resize(1024, 600);
        connectedList_lw = new QListWidget(vServer);
        connectedList_lw->setObjectName(QStringLiteral("connectedList_lw"));
        connectedList_lw->setGeometry(QRect(40, 100, 271, 461));
        connectedList_lb = new QLabel(vServer);
        connectedList_lb->setObjectName(QStringLiteral("connectedList_lb"));
        connectedList_lb->setGeometry(QRect(40, 60, 91, 31));
        title_lb = new QLabel(vServer);
        title_lb->setObjectName(QStringLiteral("title_lb"));
        title_lb->setGeometry(QRect(40, 20, 251, 31));

        retranslateUi(vServer);

        QMetaObject::connectSlotsByName(vServer);
    } // setupUi

    void retranslateUi(QWidget *vServer)
    {
        vServer->setWindowTitle(QApplication::translate("vServer", "vServer", 0));
        connectedList_lb->setText(QApplication::translate("vServer", "\345\267\262\350\277\236\346\216\245\346\225\260\351\207\217\357\274\232", 0));
        title_lb->setText(QApplication::translate("vServer", "\345\217\257\350\247\206\345\214\226Demo\346\234\215\345\212\241\345\231\250", 0));
    } // retranslateUi

};

namespace Ui {
    class vServer: public Ui_vServer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VSERVER_H
