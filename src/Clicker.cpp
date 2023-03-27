//
// Created by alvann on 13/03/23.
//

#include "../headers/Clicker.h"
#include "../headers/Shop.h"
#include "../headers/Fermier.h"

Clicker::Clicker(QWidget *parent) : QWidget(parent) {

    fermier = new Fermier();
    fermier->setNom("Benoit");
    fermier->setCanardPekin(1);
    fermier->setOeufsPekin(0);
    fermier->setArgent(0);
    QDebug(QtDebugMsg) << fermier->getNom().c_str();

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
    canardPekinLabel = new QLabel("Canards Pekin: " + QString::number(fermier->getCanardPekin()));
    oeufsPekinLabel = new QLabel("Œeufs Pekin: " + QString::number(fermier->getOeufsPekin()));
    canardColvertLabel = new QLabel("Canards Colvert: " + QString::number(fermier->getCanardColvert()));
    oeufsColvertLabel = new QLabel("Œeufs Colvert: " + QString::number(fermier->getOeufsColvert()));
    canardPirateLabel = new QLabel("Canards Pirate: " + QString::number(fermier->getCanardPirate()));
    oeufsPirateLabel = new QLabel("Œeufs Pirate: " + QString::number(fermier->getOeufsPirate()));
    canardSupporterLabel = new QLabel("Canards Supporter: " + QString::number(fermier->getCanardSupporter()));
    oeufsSupporterLabel = new QLabel("Œeufs Supporter: " + QString::number(fermier->getOeufsSupporter()));
    canardFeuLabel = new QLabel("Canards Feu: " + QString::number(fermier->getCanardFeu()));
    oeufsFeuLabel = new QLabel("Œeufs Feu: " + QString::number(fermier->getOeufsFeu()));
    canardDoreLabel = new QLabel("Canards Doré: " + QString::number(fermier->getCanardDore()));
    oeufsDoreLabel = new QLabel("Œeufs Doré: " + QString::number(fermier->getOeufsDore()));
    canardArcEnCielLabel = new QLabel("Canards Arc-en-ciel: " + QString::number(fermier->getCanardArcEnCiel()));
    oeufsArcEnCielLabel = new QLabel("Œeufs Arc-en-ciel: " + QString::number(fermier->getOeufsArcEnCiel()));

    argentLabel = new QLabel("Argent : " + QString::number(fermier->getArgent()));

    //ajout dans le layout
    layout->addWidget(canardPekinLabel);
    layout->addWidget(oeufsPekinLabel);

    if (fermier->getCanardColvert() >= 1){
        layout->addWidget(canardColvertLabel);
        layout->addWidget(oeufsColvertLabel);
    }
    if (fermier->getCanardPirate() >= 1){
        layout->addWidget(canardPirateLabel);
        layout->addWidget(oeufsPirateLabel);
    }
    if (fermier->getCanardSupporter() >= 1){
        layout->addWidget(canardSupporterLabel);
        layout->addWidget(oeufsSupporterLabel);
    }
    if (fermier->getCanardFeu() >= 1){
        layout->addWidget(canardFeuLabel);
        layout->addWidget(oeufsFeuLabel);
    }
    if (fermier->getCanardDore() >= 1){
        layout->addWidget(canardDoreLabel);
        layout->addWidget(oeufsDoreLabel);
    }
    if (fermier->getCanardArcEnCiel() >= 1){
        layout->addWidget(canardArcEnCielLabel);
        layout->addWidget(oeufsArcEnCielLabel);
    }

    layout->addWidget(argentLabel);


}

//Incrémente le nombre d'oeufs en fonctions du nombre de canards
void Clicker::Clicked() {

    //Mise à jour des oeufs
    fermier->setOeufsPekin(fermier->getOeufsPekin() + fermier->getCanardPekin());
    fermier->setCanardColvert(fermier->getCanardColvert() + fermier->getCanardColvert());
    fermier->setCanardPirate(fermier->getCanardPirate() + fermier->getCanardPirate());
    fermier->setCanardSupporter(fermier->getCanardSupporter() + fermier->getCanardSupporter());
    fermier->setCanardFeu(fermier->getCanardFeu() + fermier->getCanardFeu());
    fermier->setCanardDore(fermier->getCanardDore() + fermier->getCanardDore());
    fermier->setCanardArcEnCiel(fermier->getCanardArcEnCiel() + fermier->getCanardArcEnCiel());


    //Mise à jour des labels
    oeufsPekinLabel->setText("Œeufs Pekins : " + QString::number(fermier->getOeufsPekin()));
    oeufsColvertLabel->setText("Œeufs Colverts : " + QString::number(fermier->getOeufsColvert()));
    oeufsPirateLabel->setText("Œeufs Pirates : " + QString::number(fermier->getOeufsPirate()));
    oeufsSupporterLabel->setText("Œeufs Supporters : " + QString::number(fermier->getOeufsSupporter()));
    oeufsFeuLabel->setText("Œeufs Feu : " + QString::number(fermier->getOeufsFeu()));
    oeufsDoreLabel->setText("Œeufs Dorés : " + QString::number(fermier->getOeufsDore()));
    oeufsArcEnCielLabel->setText("Œeufs Arc-en-ciel : " + QString::number(fermier->getOeufsArcEnCiel()));

}

void Clicker::openShop() {
    qDebug() << "Vous voila au marché !";

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


