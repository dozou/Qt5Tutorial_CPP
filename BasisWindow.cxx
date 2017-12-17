//
// Created by 船戸恒宏 on 2017/12/17.
//

#include "BasisWindow.h"
#include <QPushButton>
#include <QBoxLayout>

BasisWindow::BasisWindow(QWidget *parent) {
    button = new QPushButton("ボタン１");
    button1 = new QPushButton("ボタン2");
    button2 = new QPushButton("ボタン3");
    button3 = new QPushButton("ボタン4");
    QVBoxLayout *layout = new QVBoxLayout();
    layout->addWidget(button);
    layout->addWidget(button1);
    layout->addWidget(button2);
    layout->addWidget(button3);

    setLayout(layout);
    QObject::connect(button,SIGNAL(clicked()),SLOT(print()));
    QObject::connect(button1,SIGNAL(clicked()),SLOT(print()));
    QObject::connect(button2,SIGNAL(clicked()),SLOT(print()));
    QObject::connect(button3,SIGNAL(clicked()),SLOT(print()));
}