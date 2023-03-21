//
// Created by alvann on 13/03/23.
//

#ifndef QUACKERS_CLICKER_H
#define QUACKERS_CLICKER_H

#include <QMainWindow>
#include <QtWidgets>
#include "Shop.h"


class Clicker: public QWidget {

    Q_OBJECT

    Shop* shop;

    QGridLayout* layout;

    QPushButton* buttonClick;
    QPushButton* buttonShop;

    QLabel* ducksLabel;
    QLabel* eggsLabel;

    public:
        Clicker(QWidget *parent = nullptr);

    int ducks = 1;
    int eggs = 0;


    signals:

    public slots:

            void initClicker();

            void Clicked();

            void openShop();

private :

};




#endif //QUACKERS_CLICKER_H
