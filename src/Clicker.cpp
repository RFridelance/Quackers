//
// Created by alvann on 13/03/23.
//

#include "../headers/Clicker.h"
#include "../headers/Shop.h"
#include "../headers/Fermier.h"

Clicker::Clicker(QWidget *parent) : QWidget(parent) {

    fermier = new Fermier();
    fermier->setName("Benoit");
    fermier->setDucks(1);
    fermier->setEggs(0);
    fermier->setMoney(0);
    QDebug(QtDebugMsg) << fermier->getName().c_str();

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
    ducksLabel = new QLabel("Canards : " + QString::number(fermier->getDucks()));
    eggsLabel = new QLabel("Œeufs : " + QString::number(fermier->getEggs()));
    moneyLabel = new QLabel("Argent : " + QString::number(fermier->getMoney()));
    layout->addWidget(ducksLabel);
    layout->addWidget(eggsLabel);
    layout->addWidget(moneyLabel);


}

//Incrémente le nombre d'oeufs en fonctions du nombre de canards
void Clicker::Clicked() {
    fermier->setEggs(fermier->getEggs() + fermier->getDucks());

    //Mise à jour des labels
    eggsLabel->setText("Œeufs : " + QString::number(fermier->getEggs()));

}

void Clicker::openShop() {
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


