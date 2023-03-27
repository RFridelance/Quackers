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

    QLabel* argentLabel;

    QPushButton* boutonAcheterCanardColvert;
    QPushButton* boutonAcheterCanardPekin;
    QPushButton* boutonAcheterCanardPirate;
    QPushButton* boutonAcheterCanardSupporter;
    QPushButton* boutonAcheterCanardFeu;
    QPushButton* boutonAcheterCanardDore;
    QPushButton* boutonAcheterCanardArcEnCiel;

    QPushButton* buttonSellEggs;
    QPushButton* buttonBack;


public:
    Shop(QWidget *parent = nullptr);

    //couts des canards
    int coutCanardPekin = 50;
    int coutCanardColvert = 500;
    int coutCanardPirate = 1750;
    int coutCanardSupporter = 5000;
    int coutCanardFeu = 12500;
    int coutCanardDore = 500000;
    int coutCanardArcEnCiel = 2345678;

    //valeurs des oeufs
    int valeurOeufsPekin = 100000;
    int valeurOeufsColvert = 25;
    int valeurOeufsPirate = 100;
    int valeurOeufsSupporter = 750;
    int valeurOeufsFeu = 2000;
    int valeurOeufsDore = 10000;
    int valeurOeufsArcEnCiel = 77777;

    signals:

public slots:

    void acheterCanardPekin();
    void acheterCanardColvert();
    void acheterCanardPirate();
    void acheterCanardSupporter();
    void acheterCanardFeu();
    void acheterCanardDore();
    void acheterCanardArcEnCiel();

    void vendreOeufs();

    void back();

private :

};

#endif //QUACKERS_SHOP_H
