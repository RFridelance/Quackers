//
// Created by alvann on 20/03/23.
//

#include "../headers/Shop.h"
#include "../headers/Clicker.h"
#include "../headers/Fermier.h"
#include <string>


Shop::Shop(QWidget *parent) : QWidget(parent) {

    //Initialisation du bouton de vente d'oeufs
    buttonSellEggs = new QPushButton(tr("Vendre les Œufs !"), this);
    //Connection du bouton shop
    QObject::connect(buttonSellEggs, &QPushButton::released, this, &Shop::vendreOeufs);

    //Initialisation du bouton d'achat de canard
    buttonBuyDuck = new QPushButton(tr("Achète une nouvelle canne  !!!"), this);
    //Connection du bouton de click
    QObject::connect(buttonBuyDuck, &QPushButton::released, this, &Shop::acheterCanardPekin);

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

//Achète un canard Pekin
void Shop::acheterCanardPekin() {
    //print dans la console une petit message
    qDebug() << "Vous avez acheté un beau canard Pekin !";
    //achete un canard s'il a assez d'argent
    if(((Clicker*)(parent())) -> fermier -> getArgent() >= coutCanardPekin) {
        ((Clicker*)(parent())) -> fermier -> setArgent(((Clicker*)(parent())) -> fermier -> getArgent() - coutCanardPekin);
        ((Clicker*)(parent())) -> fermier -> setCanardPekin(((Clicker*)(parent())) -> fermier -> getCanardPekin() + 1);
    }
}

//Achète un canard Colvert
void Shop::acheterCanardColvert() {
    //print dans la console une petit message
    qDebug() << "Vous avez acheté un beau canard Colvert !";
    //achete un canard s'il a assez d'argent
    if(((Clicker*)(parent())) -> fermier -> getArgent() >= coutCanardColvert) {
        ((Clicker*)(parent())) -> fermier -> setArgent(((Clicker*)(parent())) -> fermier -> getArgent() - coutCanardColvert);
        ((Clicker*)(parent())) -> fermier -> setCanardColvert(((Clicker*)(parent())) -> fermier -> getCanardColvert() + 1);
    }
}

//Achète un canard Pirate
void Shop::acheterCanardPirate() {
    //print dans la console une petit message
    qDebug() << "Vous avez acheté un beau canard Pirate !";
    //achete un canard s'il a assez d'argent
    if(((Clicker*)(parent())) -> fermier -> getArgent() >= coutCanardPirate) {
        ((Clicker*)(parent())) -> fermier -> setArgent(((Clicker*)(parent())) -> fermier -> getArgent() - coutCanardPirate);
        ((Clicker*)(parent())) -> fermier -> setCanardPirate(((Clicker*)(parent())) -> fermier -> getCanardPirate() + 1);
    }
}

//Achète un canard Supporter
void Shop::acheterCanardSupporter() {
    //print dans la console une petit message
    qDebug() << "Vous avez acheté un beau canard Supporter !";
    //achete un canard s'il a assez d'argent
    if(((Clicker*)(parent())) -> fermier -> getArgent() >= coutCanardSupporter) {
        ((Clicker*)(parent())) -> fermier -> setArgent(((Clicker*)(parent())) -> fermier -> getArgent() - coutCanardSupporter);
        ((Clicker*)(parent())) -> fermier -> setCanardSupporter(((Clicker*)(parent())) -> fermier -> getCanardSupporter() + 1);
    }
}

//Achète un canard Feu
void Shop::acheterCanardFeu() {
    //print dans la console une petit message
    qDebug() << "Vous avez acheté un beau canard Feu !";
    //achete un canard s'il a assez d'argent
    if(((Clicker*)(parent())) -> fermier -> getArgent() >= coutCanardFeu) {
        ((Clicker*)(parent())) -> fermier -> setArgent(((Clicker*)(parent())) -> fermier -> getArgent() - coutCanardFeu);
        ((Clicker*)(parent())) -> fermier -> setCanardFeu(((Clicker*)(parent())) -> fermier -> getCanardFeu() + 1);
    }
}

//Achète un canard Doré
void Shop::acheterCanardDore() {
    //print dans la console une petit message
    qDebug() << "Vous avez acheté un beau canard Doré !";
    //achete un canard s'il a assez d'argent
    if(((Clicker*)(parent())) -> fermier -> getArgent() >= coutCanardDore) {
        ((Clicker*)(parent())) -> fermier -> setArgent(((Clicker*)(parent())) -> fermier -> getArgent() - coutCanardDore);
        ((Clicker*)(parent())) -> fermier -> setCanardDore(((Clicker*)(parent())) -> fermier -> getCanardDore() + 1);
    }
}

//Achète un canard Arc-en-ciel
void Shop::acheterCanardArcEnCiel() {
    //print dans la console une petit message
    qDebug() << "Vous avez acheté un beau canard Arc-en-ciel !";
    //achete un canard s'il a assez d'argent
    if(((Clicker*)(parent())) -> fermier -> getArgent() >= coutCanardArcEnCiel) {
        ((Clicker*)(parent())) -> fermier -> setArgent(((Clicker*)(parent())) -> fermier -> getArgent() - coutCanardArcEnCiel);
        ((Clicker*)(parent())) -> fermier -> setCanardArcEnCiel(((Clicker*)(parent())) -> fermier -> getCanardArcEnCiel() + 1);
    }
}


//Vend les oeufs
void Shop::vendreOeufs() {
    int totalOeufs = ((Clicker*)(parent())) -> fermier -> getAllOeufs();

    int totalOeufsPekin = ((Clicker*)(parent())) -> fermier -> getOeufsPekin();
    int totalOeufsColvert = ((Clicker*)(parent())) -> fermier -> getOeufsColvert();
    int totalOeufsPirate = ((Clicker*)(parent())) -> fermier -> getOeufsPirate();
    int totalOeufsSupporter = ((Clicker*)(parent())) -> fermier -> getOeufsSupporter();
    int totalOeufsFeu = ((Clicker*)(parent())) -> fermier -> getOeufsFeu();
    int totalOeufsDore = ((Clicker*)(parent())) -> fermier -> getOeufsDore();
    int totalOeufsArcEnCiel = ((Clicker*)(parent())) -> fermier -> getOeufsArcEnCiel();

    int somme = totalOeufsPekin * valeurOeufsPekin + totalOeufsColvert * valeurOeufsColvert + totalOeufsPirate * valeurOeufsPirate + totalOeufsSupporter * valeurOeufsSupporter + totalOeufsFeu * valeurOeufsFeu + totalOeufsDore * valeurOeufsDore + totalOeufsArcEnCiel * valeurOeufsArcEnCiel;
    ((Clicker*)(parent())) -> fermier -> setArgent(((Clicker*)(parent())) -> fermier -> getArgent() + somme);
    ((Clicker*)(parent())) -> fermier -> setOeufsPekin(0);
    ((Clicker*)(parent())) -> fermier -> setOeufsColvert(0);
    ((Clicker*)(parent())) -> fermier -> setOeufsPirate(0);
    ((Clicker*)(parent())) -> fermier -> setOeufsSupporter(0);
    ((Clicker*)(parent())) -> fermier -> setOeufsFeu(0);
    ((Clicker*)(parent())) -> fermier -> setOeufsDore(0);
    ((Clicker*)(parent())) -> fermier -> setOeufsArcEnCiel(0);

    std::string message = "Vous avez vendu tous " + std::to_string(totalOeufs) + " oeufs et vous avez gagné " + std::to_string(somme) + " CoinCoins!";
    qDebug() << message.c_str();
}

//Retourne au clicker
void Shop::back() {
    qDebug() << "Vous voila de retour à la ferme !";

    ((Clicker*)(parent()))->initClicker();
}