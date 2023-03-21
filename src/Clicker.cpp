//
// Created by alvann on 13/03/23.
//

#include "../headers/Clicker.h"
#include "../headers/Shop.h"

Clicker::Clicker(QWidget *parent) : QWidget(parent) {

    layout = new QGridLayout();

    initClicker();


}

void Clicker::initClicker() {

    //remove all widgets from the layout
    QLayoutItem *child;
    while ((child = layout->takeAt(0)) != 0) {
        delete child->widget();
        delete child;
    }

    //Initialisation du bouton de click
    buttonClick = new QPushButton(tr("Clickeuh !!!"), this);
    //Connection du bouton de click
    QObject::connect(buttonClick, &QPushButton::released, this, &Clicker::Clicked);

    //Initialisation du layout
    layout->addWidget(buttonClick);
    setLayout(layout);
    resize(500, 300);

    //Initialisation du bouton shop
    buttonShop = new QPushButton(tr("Marché"), this);
    //Connection du bouton shop
    QObject::connect(buttonShop, &QPushButton::released, this, &Clicker::openShop);
    layout->addWidget(buttonShop);


    //Labels Text pour afficher les valeurs et ajout dans le layout
    ducksLabel = new QLabel("Canards : " + QString::number(ducks));
    eggsLabel = new QLabel("Œeufs : " + QString::number(eggs));
    layout->addWidget(ducksLabel);
    layout->addWidget(eggsLabel);


}

//Incrémente le nombre d'oeufs en fonctions du nombre de canards
void Clicker::Clicked() {
    eggs += ducks;
    //print dans la console eggs
    //qDebug() << eggs;

    //Mise à jour des labels
    eggsLabel->setText("Œeufs : " + QString::number(eggs));

}

void Clicker::openShop() {

    //Todo : ouvrir la fenetre shop pour différents achats
    qDebug() << "You opened the shop !";

    //remove all widgets from the layout
    QLayoutItem *child;
    while ((child = layout->takeAt(0)) != 0) {
        delete child->widget();
        delete child;
    }
    //affiche la fenetre shop
    shop = new Shop(this);
    layout->addWidget(shop);

    this->show();

}


