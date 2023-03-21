//
// Created by alvann on 20/03/23.
//

#include "../headers/Shop.h"
#include "../headers/Clicker.h"


Shop::Shop(QWidget *parent) : QWidget(parent) {

    //Initialisation du bouton de vente d'oeufs
    buttonSellEggs = new QPushButton(tr("Sell Your Eggs"), this);
    //Connection du bouton shop
    QObject::connect(buttonSellEggs, &QPushButton::released, this, &Shop::sellEggs);

    //Initialisation du bouton d'achat de canard
    buttonBuyDuck = new QPushButton(tr("Buy Duck !!!"), this);
    //Connection du bouton de click
    QObject::connect(buttonBuyDuck, &QPushButton::released, this, &Shop::buyDuck);

    //Initialisation du bouton de retour
    buttonBack = new QPushButton(tr("Back"), this);
    //Connection du bouton back
    QObject::connect(buttonBack, &QPushButton::released, this, &Shop::back);



    //Initialisation du layout
    layout = new QGridLayout();
    layout->addWidget(buttonSellEggs);
    layout->addWidget(buttonBuyDuck);
    setLayout(layout);
    resize(500, 300);

}

//Achète un canard
void Shop::buyDuck() {

    //print dans la console une petit message
    qDebug() << "You bought a duck !";
    ((Clicker*)(parent())) -> ducks += 1;
}

//Vend les oeufs
void Shop::sellEggs() {
    qDebug() << "You sold your eggs !";
}

//Retourne au clicker
void Shop::back() {
    qDebug() << "You went back to the clicker !";

    ((Clicker*)(parent()))->initClicker();
    //initClicker() method in Clicker.cpp

    //parentWidget()->show();
}