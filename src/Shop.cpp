//
// Created by alvann on 20/03/23.
//

#include "../headers/Shop.h"
#include "../headers/Clicker.h"
#include "../headers/Fermier.h"


Shop::Shop(QWidget *parent) : QWidget(parent) {

    //Initialisation du bouton de vente d'oeufs
    buttonSellEggs = new QPushButton(tr("Vendre les Œufs !"), this);
    //Connection du bouton shop
    QObject::connect(buttonSellEggs, &QPushButton::released, this, &Shop::sellEggs);

    //Initialisation du bouton d'achat de canard
    buttonBuyDuck = new QPushButton(tr("Achète une nouvelle canne  !!!"), this);
    //Connection du bouton de click
    QObject::connect(buttonBuyDuck, &QPushButton::released, this, &Shop::buyDuck);

    //Initialisation du bouton de retour
    buttonBack = new QPushButton(tr("Retour"), this);
    //Connection du bouton back
    QObject::connect(buttonBack, &QPushButton::released, this, &Shop::back);



    //Initialisation du layout
    layout = new QGridLayout();
    layout->addWidget(buttonSellEggs);
    layout->addWidget(buttonBuyDuck);
    layout->addWidget(buttonBack);
    setLayout(layout);
    resize(500, 300);

}

//Achète un canard
void Shop::buyDuck() {
    //print dans la console une petit message
    qDebug() << "You bought a duck !";
    //achete un canard s'il a assez d'argent (20)
    if(((Clicker*)(parent())) -> fermier -> getMoney() >= 20) {
        ((Clicker*)(parent())) -> fermier -> setMoney(((Clicker*)(parent())) -> fermier -> getMoney() - 20);
        ((Clicker*)(parent())) -> fermier -> setDucks(((Clicker*)(parent())) -> fermier -> getDucks() + 1);
    }
}

//Vend les oeufs
void Shop::sellEggs() {
    qDebug() << "You sold your eggs !";

    ((Clicker*)(parent())) -> fermier -> setMoney(((Clicker*)(parent())) -> fermier -> getMoney() + ((Clicker*)(parent())) -> fermier -> getEggs());
    ((Clicker*)(parent())) -> fermier -> setEggs(0);
}

//Retourne au clicker
void Shop::back() {
    qDebug() << "You went back to the clicker !";

    ((Clicker*)(parent()))->initClicker();
}