//
// Created by alvann on 13/03/23.
//

#ifndef QUACKERS_CLICKER_H
#define QUACKERS_CLICKER_H

#include <QMainWindow>
#include <QtWidgets>
#include "Shop.h"
#include "Fermier.h"


class Clicker: public QWidget {

    Q_OBJECT

    Shop* shop;

    QGridLayout* layout;

    QPushButton* buttonClick;
    QPushButton* buttonShop;

    QLabel* ducksLabel;
    QLabel* eggsLabel;
    QLabel* moneyLabel;

    public:
        Clicker(QWidget *parent = nullptr);

    Fermier* fermier;

    signals:

    public slots:

            void initClicker();

            void Clicked();

            void openShop();

private :

};




#endif //QUACKERS_CLICKER_H
