//
// Created by alvann on 13/03/23.
//

#include "../headers/Clicker.h"

Clicker::Clicker(QWidget *parent) : QWidget(parent) {

    //Initialisation du bouton de click
    click = new QPushButton(tr("Clickeuh !!!"), this);
    //Connection du bouton de click
    QObject::connect(click, &QPushButton::released, this, &Clicker::Clicked);

    //Initialisation du layout
    layout = new QGridLayout();
    layout->addWidget(click);
    setLayout(layout);
    resize(500, 300);

    //Initialisation du bouton shop
    shop = new QPushButton(tr("Marché"), this);
    //Connection du bouton shop
    QObject::connect(shop, &QPushButton::released, this, &Clicker::openShop);
    layout->addWidget(shop);


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
    ducks += 1;
    ducksLabel->setText("Canards : " + QString::number(ducks));
}


