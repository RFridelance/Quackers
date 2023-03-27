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

    QLabel* canardPekinLabel;
    QLabel* canardColvertLabel;
    QLabel* canardPirateLabel;
    QLabel* canardSupporterLabel;
    QLabel* canardFeuLabel;
    QLabel* canardDoreLabel;
    QLabel* canardArcEnCielLabel;

    QLabel* oeufsPekinLabel;
    QLabel* oeufsColvertLabel;
    QLabel* oeufsPirateLabel;
    QLabel* oeufsSupporterLabel;
    QLabel* oeufsFeuLabel;
    QLabel* oeufsDoreLabel;
    QLabel* oeufsArcEnCielLabel;


    QLabel* argentLabel;

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
