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

    QPixmap* canardPekinImage;
    QPixmap* canardColvertImage;
    QPixmap* canardPirateImage;
    QPixmap* canardSupporterImage;
    QPixmap* canardFeuImage;
    QPixmap* canardDoreImage;
    QPixmap* canardArcEnCielImage;

    QLabel* canardPekinImageLabel;
    QLabel* canardColvertImageLabel;
    QLabel* canardPirateImageLabel;
    QLabel* canardSupporterImageLabel;
    QLabel* canardFeuImageLabel;
    QLabel* canardDoreImageLabel;
    QLabel* canardArcEnCielImageLabel;

    QPixmap* oeufPekinImage;
    QPixmap* oeufColvertImage;
    QPixmap* oeufPirateImage;
    QPixmap* oeufSupporterImage;
    QPixmap* oeufFeuImage;
    QPixmap* oeufDoreImage;
    QPixmap* oeufArcEnCielImage;

    QLabel* oeufPekinImageLabel;
    QLabel* oeufColvertImageLabel;
    QLabel* oeufPirateImageLabel;
    QLabel* oeufSupporterImageLabel;
    QLabel* oeufFeuImageLabel;
    QLabel* oeufDoreImageLabel;
    QLabel* oeufArcEnCielImageLabel;

    QLabel* argentLabel;

    QPushButton* boutonQuitter;

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
