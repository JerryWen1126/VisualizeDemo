/********************************************************************************
** Form generated from reading UI file 'vclient.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VCLIENT_H
#define UI_VCLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_vClient
{
public:
    QLabel *title_lb;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *modelPath_lb;
    QLineEdit *modelPath_le;
    QPushButton *modelPath_btn;
    QHBoxLayout *horizontalLayout_2;
    QLabel *imgPath_lb;
    QLineEdit *imgPath_le;
    QPushButton *imgPath_btn;
    QHBoxLayout *horizontalLayout_3;
    QLabel *ip_lb;
    QLineEdit *ip_le;
    QHBoxLayout *horizontalLayout_4;
    QLabel *port_lb;
    QLineEdit *port_le;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *connect_btn;
    QSpacerItem *horizontalSpacer;
    QLabel *status_lb;
    QLabel *tips_lb;
    QLabel *imgPreview_lb;
    QLabel *imgShow_lb;
    QVBoxLayout *verticalLayout_2;
    QTableWidget *result_tbw;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *exit_btn;
    QPushButton *classify_btn;

    void setupUi(QWidget *vClient)
    {
        if (vClient->objectName().isEmpty())
            vClient->setObjectName(QStringLiteral("vClient"));
        vClient->resize(1024, 600);
        title_lb = new QLabel(vClient);
        title_lb->setObjectName(QStringLiteral("title_lb"));
        title_lb->setGeometry(QRect(50, 10, 171, 41));
        widget = new QWidget(vClient);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(80, 50, 841, 521));
        horizontalLayout_7 = new QHBoxLayout(widget);
        horizontalLayout_7->setSpacing(60);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        modelPath_lb = new QLabel(widget);
        modelPath_lb->setObjectName(QStringLiteral("modelPath_lb"));

        horizontalLayout->addWidget(modelPath_lb);

        modelPath_le = new QLineEdit(widget);
        modelPath_le->setObjectName(QStringLiteral("modelPath_le"));

        horizontalLayout->addWidget(modelPath_le);

        modelPath_btn = new QPushButton(widget);
        modelPath_btn->setObjectName(QStringLiteral("modelPath_btn"));

        horizontalLayout->addWidget(modelPath_btn);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        imgPath_lb = new QLabel(widget);
        imgPath_lb->setObjectName(QStringLiteral("imgPath_lb"));

        horizontalLayout_2->addWidget(imgPath_lb);

        imgPath_le = new QLineEdit(widget);
        imgPath_le->setObjectName(QStringLiteral("imgPath_le"));

        horizontalLayout_2->addWidget(imgPath_le);

        imgPath_btn = new QPushButton(widget);
        imgPath_btn->setObjectName(QStringLiteral("imgPath_btn"));

        horizontalLayout_2->addWidget(imgPath_btn);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        ip_lb = new QLabel(widget);
        ip_lb->setObjectName(QStringLiteral("ip_lb"));

        horizontalLayout_3->addWidget(ip_lb);

        ip_le = new QLineEdit(widget);
        ip_le->setObjectName(QStringLiteral("ip_le"));

        horizontalLayout_3->addWidget(ip_le);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        port_lb = new QLabel(widget);
        port_lb->setObjectName(QStringLiteral("port_lb"));

        horizontalLayout_4->addWidget(port_lb);

        port_le = new QLineEdit(widget);
        port_le->setObjectName(QStringLiteral("port_le"));

        horizontalLayout_4->addWidget(port_le);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        connect_btn = new QPushButton(widget);
        connect_btn->setObjectName(QStringLiteral("connect_btn"));

        horizontalLayout_5->addWidget(connect_btn);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        status_lb = new QLabel(widget);
        status_lb->setObjectName(QStringLiteral("status_lb"));

        horizontalLayout_5->addWidget(status_lb);


        verticalLayout->addLayout(horizontalLayout_5);

        tips_lb = new QLabel(widget);
        tips_lb->setObjectName(QStringLiteral("tips_lb"));

        verticalLayout->addWidget(tips_lb);

        imgPreview_lb = new QLabel(widget);
        imgPreview_lb->setObjectName(QStringLiteral("imgPreview_lb"));

        verticalLayout->addWidget(imgPreview_lb);

        imgShow_lb = new QLabel(widget);
        imgShow_lb->setObjectName(QStringLiteral("imgShow_lb"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(imgShow_lb->sizePolicy().hasHeightForWidth());
        imgShow_lb->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(imgShow_lb);


        horizontalLayout_7->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        result_tbw = new QTableWidget(widget);
        result_tbw->setObjectName(QStringLiteral("result_tbw"));

        verticalLayout_2->addWidget(result_tbw);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        exit_btn = new QPushButton(widget);
        exit_btn->setObjectName(QStringLiteral("exit_btn"));

        horizontalLayout_6->addWidget(exit_btn);

        classify_btn = new QPushButton(widget);
        classify_btn->setObjectName(QStringLiteral("classify_btn"));

        horizontalLayout_6->addWidget(classify_btn);


        verticalLayout_2->addLayout(horizontalLayout_6);


        horizontalLayout_7->addLayout(verticalLayout_2);


        retranslateUi(vClient);

        QMetaObject::connectSlotsByName(vClient);
    } // setupUi

    void retranslateUi(QWidget *vClient)
    {
        vClient->setWindowTitle(QApplication::translate("vClient", "vClient", 0));
        title_lb->setText(QApplication::translate("vClient", "\345\217\257\350\247\206\345\214\226Demo\345\256\242\346\210\267\347\253\257", 0));
        modelPath_lb->setText(QApplication::translate("vClient", "\346\250\241\345\236\213\350\267\257\345\276\204\357\274\232", 0));
        modelPath_btn->setText(QApplication::translate("vClient", "\351\200\211\346\213\251\346\250\241\345\236\213", 0));
        imgPath_lb->setText(QApplication::translate("vClient", "\345\233\276\347\211\207\350\267\257\345\276\204\357\274\232", 0));
        imgPath_btn->setText(QApplication::translate("vClient", "\351\200\211\346\213\251\345\233\276\347\211\207", 0));
        ip_lb->setText(QApplication::translate("vClient", "IP\345\234\260\345\235\200\357\274\232", 0));
        ip_le->setPlaceholderText(QApplication::translate("vClient", "\350\257\267\350\276\223\345\205\245IP\345\234\260\345\235\200", 0));
        port_lb->setText(QApplication::translate("vClient", "\347\253\257\345\217\243\345\217\267\357\274\232", 0));
        port_le->setPlaceholderText(QApplication::translate("vClient", "\350\257\267\350\276\223\345\205\245\347\253\257\345\217\243\345\217\267", 0));
        connect_btn->setText(QApplication::translate("vClient", "\350\277\236\346\216\245", 0));
        status_lb->setText(QApplication::translate("vClient", "\347\212\266\346\200\201\357\274\232\346\234\252\350\277\236\346\216\245", 0));
        tips_lb->setText(QString());
        imgPreview_lb->setText(QApplication::translate("vClient", "\345\233\276\347\211\207\351\242\204\350\247\210\357\274\232", 0));
        imgShow_lb->setText(QString());
        exit_btn->setText(QApplication::translate("vClient", "\351\200\200\345\207\272", 0));
        classify_btn->setText(QApplication::translate("vClient", "\350\257\206\345\210\253", 0));
    } // retranslateUi

};

namespace Ui {
    class vClient: public Ui_vClient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VCLIENT_H
