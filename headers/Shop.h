//
// Created by alvann on 20/03/23.
//

#ifndef QUACKERS_SHOP_H
#define QUACKERS_SHOP_H

#include <QMainWindow>
#include <QtWidgets>


class Shop: public QWidget {

    Q_OBJECT

    QGridLayout* layout;

    QPushButton* buttonBuyDuck;
    QPushButton* buttonSellEggs;
    QPushButton* buttonBack;


public:
    Shop(QWidget *parent = nullptr);

    signals:

public slots:
    void buyDuck();

    void sellEggs();

    void back();

private :

};

#endif //QUACKERS_SHOP_H
