//
// Created by 船戸恒宏 on 2017/12/17.
//

#ifndef TUTORIALQT_BASISWINDOW_H
#define TUTORIALQT_BASISWINDOW_H

#include <iostream>
#include <QWidget>

QT_BEGIN_NAMESPACE
class QPushButton;
QT_END_NAMESPACE

class BasisWindow:public QWidget{
Q_OBJECT
public:
    BasisWindow(QWidget *parent= nullptr);

private:
    QPushButton *button;
    QPushButton *button1;
    QPushButton *button2;
    QPushButton *button3;

private slots:
    void print(){
        std::cout << "押されたよ~" << std::endl;
    };
};


#endif //TUTORIALQT_BASISWINDOW_H
