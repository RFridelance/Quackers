//
// Created by alvann on 20/03/23.
//

#include "../headers/Shop.h"
#include "../headers/Clicker.h"
#include "../headers/Fermier.h"
#include <string>


Shop::Shop(QWidget *parent) : QWidget(parent) {

    //Intialisation du label argent du fermier
    std::string argent = "Argent : " + std::to_string(((Clicker*)(parent))->fermier -> getArgent());
    argentLabel = new QLabel(tr(argent.c_str()), this);

    //Initialisation du bouton de vente d'oeufs
    buttonSellEggs = new QPushButton(tr("Vendre les Œufs !"), this);
    //Connection du bouton shop
    QObject::connect(buttonSellEggs, &QPushButton::released, this, &Shop::vendreOeufs);

    //Initialisation des boutons d'achat de canard
    boutonAcheterCanardPekin = new QPushButton(tr("Achète un nouveau canard Pekin  !!!"), this);
    QObject::connect(boutonAcheterCanardPekin, &QPushButton::released, this, &Shop::acheterCanardPekin);

    boutonAcheterCanardColvert = new QPushButton(tr("Achète un nouveau canard Colvert  !!!"), this);
    QObject::connect(boutonAcheterCanardColvert, &QPushButton::released, this, &Shop::acheterCanardColvert);

    boutonAcheterCanardPirate = new QPushButton(tr("Achète un nouveau canard Pirate  !!!"), this);
    QObject::connect(boutonAcheterCanardPirate, &QPushButton::released, this, &Shop::acheterCanardPirate);

    boutonAcheterCanardSupporter = new QPushButton(tr("Achète un nouveau canard Supporter  !!!"), this);
    QObject::connect(boutonAcheterCanardSupporter, &QPushButton::released, this, &Shop::acheterCanardSupporter);

    boutonAcheterCanardFeu = new QPushButton(tr("Achète un nouveau canard Feu  !!!"), this);
    QObject::connect(boutonAcheterCanardFeu, &QPushButton::released, this, &Shop::acheterCanardFeu);

    boutonAcheterCanardDore = new QPushButton(tr("Achète un nouveau canard Doré  !!!"), this);
    QObject::connect(boutonAcheterCanardDore, &QPushButton::released, this, &Shop::acheterCanardDore);

    boutonAcheterCanardArcEnCiel = new QPushButton(tr("Achète un nouveau canard Arc-en-ciel  !!!"), this);
    QObject::connect(boutonAcheterCanardArcEnCiel, &QPushButton::released, this, &Shop::acheterCanardArcEnCiel);

    //Initialisation du bouton de retour
    buttonBack = new QPushButton(tr("Retour"), this);
    //Connection du bouton back
    QObject::connect(buttonBack, &QPushButton::released, this, &Shop::back);


    //Initialisation du layout
    layout = new QGridLayout();

    layout->addWidget(buttonSellEggs);


    layout->addWidget(boutonAcheterCanardPekin);
    if (((Clicker*)parent) -> fermier -> getCanardPekin() > 1) {
        layout->addWidget(boutonAcheterCanardColvert);
    } else{
        boutonAcheterCanardColvert->hide();
    }
    if (((Clicker*)parent) -> fermier -> getCanardColvert() >= 1) {
        layout->addWidget(boutonAcheterCanardPirate);
    } else{
        boutonAcheterCanardPirate->hide();
    }
    if (((Clicker*)parent) -> fermier -> getCanardPirate() >= 1) {
        layout->addWidget(boutonAcheterCanardSupporter);
    } else{
        boutonAcheterCanardSupporter->hide();
    }
    if (((Clicker*)parent) -> fermier -> getCanardSupporter() >= 1) {
        layout->addWidget(boutonAcheterCanardFeu);
    } else{
        boutonAcheterCanardFeu->hide();
    }
    if (((Clicker*)parent) -> fermier -> getCanardFeu() >= 1) {
        layout->addWidget(boutonAcheterCanardDore);
    } else{
        boutonAcheterCanardDore->hide();
    }
    if (((Clicker*)parent) -> fermier -> getCanardDore() >= 1) {
        layout->addWidget(boutonAcheterCanardArcEnCiel);
    } else{
        boutonAcheterCanardArcEnCiel->hide();
    }


    layout->addWidget(buttonBack);
    setLayout(layout);
    resize(500, 300);

}

//Achète un canard Pekin
void Shop::acheterCanardPekin() {
    //achete un canard s'il a assez d'argent
    if(((Clicker*)(parent())) -> fermier -> getArgent() >= coutCanardPekin) {
        ((Clicker*)(parent())) -> fermier -> setArgent(((Clicker*)(parent())) -> fermier -> getArgent() - coutCanardPekin);
        ((Clicker*)(parent())) -> fermier -> setCanardPekin(((Clicker*)(parent())) -> fermier -> getCanardPekin() + 1);
        qDebug() << "Vous avez acheté un beau canard Pekin !";
    } else {
        qDebug() << "Vous n'avez pas assez d'argent pour acheter un canard Pekin !";
    }
}

//Achète un canard Colvert
void Shop::acheterCanardColvert() {
    //achete un canard s'il a assez d'argent
    if(((Clicker*)(parent())) -> fermier -> getArgent() >= coutCanardColvert) {
        ((Clicker*)(parent())) -> fermier -> setArgent(((Clicker*)(parent())) -> fermier -> getArgent() - coutCanardColvert);
        ((Clicker*)(parent())) -> fermier -> setCanardColvert(((Clicker*)(parent())) -> fermier -> getCanardColvert() + 1);
        qDebug() << "Vous avez acheté un beau canard Colvert !";
    } else {
        qDebug() << "Vous n'avez pas assez d'argent pour acheter un canard Colvert !";
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
    } else {
        qDebug() << "Vous n'avez pas assez d'argent pour acheter un canard Pirate !";
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
    } else {
        qDebug() << "Vous n'avez pas assez d'argent pour acheter un canard Supporter !";
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
    } else {
        qDebug() << "Vous n'avez pas assez d'argent pour acheter un canard Feu !";
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
    } else {
        qDebug() << "Vous n'avez pas assez d'argent pour acheter un canard Doré !";
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
    } else {
        qDebug() << "Vous n'avez pas assez d'argent pour acheter un canard Arc-en-ciel !";
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