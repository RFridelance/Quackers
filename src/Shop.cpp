//
// Created by alvann on 20/03/23.
//

#include "../headers/Shop.h"
#include "../headers/Clicker.h"
#include "../headers/Fermier.h"
#include <string>


Shop::Shop(QWidget *parent) : QWidget(parent) {

    //Intialisation du label argent du fermier
    std::string argent = "Argent : " + std::to_string(((Clicker*)(parent))->fermier -> getArgent()) + " CoinCoins";
    argentLabel = new QLabel(tr(argent.c_str()), this);

    //Initialisation du bouton de vente d'oeufs
    buttonSellEggs = new QPushButton(tr("Vendre les Œufs !"), this);
    //Connection du bouton shop
    QObject::connect(buttonSellEggs, &QPushButton::released, this, &Shop::vendreOeufs);

    //Initialisation des boutons d'achat de canard et des labels de prix
    boutonAcheterCanardPekin = new QPushButton(tr("Achète un nouveau canard Pekin  !!!"), this);
    QObject::connect(boutonAcheterCanardPekin, &QPushButton::released, this, &Shop::acheterCanardPekin);
    std::string prixCanardPekin = "Prix : " + std::to_string((coutCanardPekin)) + " CoinCoins";
    coutCanardPekinLabel = new QLabel(tr(prixCanardPekin.c_str()), this);

    boutonAcheterCanardColvert = new QPushButton(tr("Achète un nouveau canard Colvert  !!!"), this);
    QObject::connect(boutonAcheterCanardColvert, &QPushButton::released, this, &Shop::acheterCanardColvert);
    std::string prixCanardColvert = "Prix : " + std::to_string((coutCanardColvert)) + " CoinCoins";
    coutCanardColvertLabel = new QLabel(tr(prixCanardColvert.c_str()), this);

    boutonAcheterCanardPirate = new QPushButton(tr("Achète un nouveau canard Pirate  !!!"), this);
    QObject::connect(boutonAcheterCanardPirate, &QPushButton::released, this, &Shop::acheterCanardPirate);
    std::string prixCanardPirate = "Prix : " + std::to_string((coutCanardPirate)) + " CoinCoins";
    coutCanardPirateLabel = new QLabel(tr(prixCanardPirate.c_str()), this);

    boutonAcheterCanardSupporter = new QPushButton(tr("Achète un nouveau canard Supporter  !!!"), this);
    QObject::connect(boutonAcheterCanardSupporter, &QPushButton::released, this, &Shop::acheterCanardSupporter);
    std::string prixCanardSupporter = "Prix : " + std::to_string((coutCanardSupporter)) + " CoinCoins";
    coutCanardSupporterLabel = new QLabel(tr(prixCanardSupporter.c_str()), this);

    boutonAcheterCanardFeu = new QPushButton(tr("Achète un nouveau canard Feu  !!!"), this);
    QObject::connect(boutonAcheterCanardFeu, &QPushButton::released, this, &Shop::acheterCanardFeu);
    std::string prixCanardFeu = "Prix : " + std::to_string((coutCanardFeu)) + " CoinCoins";
    coutCanardFeuLabel = new QLabel(tr(prixCanardFeu.c_str()), this);

    boutonAcheterCanardDore = new QPushButton(tr("Achète un nouveau canard Doré  !!!"), this);
    QObject::connect(boutonAcheterCanardDore, &QPushButton::released, this, &Shop::acheterCanardDore);
    std::string prixCanardDore = "Prix : " + std::to_string((coutCanardDore)) + " CoinCoins";
    coutCanardDoreLabel = new QLabel(tr(prixCanardDore.c_str()), this);

    boutonAcheterCanardArcEnCiel = new QPushButton(tr("Achète un nouveau canard Arc-en-ciel  !!!"), this);
    QObject::connect(boutonAcheterCanardArcEnCiel, &QPushButton::released, this, &Shop::acheterCanardArcEnCiel);
    std::string prixCanardArcEnCiel = "Prix : " + std::to_string((coutCanardArcEnCiel)) + " CoinCoins";
    coutCanardArcEnCielLabel = new QLabel(tr(prixCanardArcEnCiel.c_str()), this);


    //Initialisation du bouton de retour
    buttonBack = new QPushButton(tr("Retour"), this);
    //Connection du bouton back
    QObject::connect(buttonBack, &QPushButton::released, this, &Shop::back);


    //Initialisation du layout
    layout = new QGridLayout();

    layout->addWidget(buttonSellEggs, 0, 0);
    layout->addWidget(argentLabel, 0, 1);


    layout->addWidget(boutonAcheterCanardPekin, 1, 0);
    layout->addWidget(coutCanardPekinLabel, 1, 1);

    if (((Clicker*)parent) -> fermier -> getCanardPekin() > 1) {
        layout->addWidget(boutonAcheterCanardColvert, 2, 0);
        layout->addWidget(coutCanardColvertLabel, 2, 1);
    } else{
        boutonAcheterCanardColvert->hide();
        coutCanardColvertLabel->hide();
    }
    if (((Clicker*)parent) -> fermier -> getCanardColvert() >= 1) {
        layout->addWidget(boutonAcheterCanardPirate, 3, 0);
        layout->addWidget(coutCanardPirateLabel, 3, 1);
    } else{
        boutonAcheterCanardPirate->hide();
        coutCanardPirateLabel->hide();
    }
    if (((Clicker*)parent) -> fermier -> getCanardPirate() >= 1) {
        layout->addWidget(boutonAcheterCanardSupporter, 4, 0);
        layout->addWidget(coutCanardSupporterLabel, 4, 1);
    } else{
        boutonAcheterCanardSupporter->hide();
        coutCanardSupporterLabel->hide();
    }
    if (((Clicker*)parent) -> fermier -> getCanardSupporter() >= 1) {
        layout->addWidget(boutonAcheterCanardFeu, 5, 0);
        layout->addWidget(coutCanardFeuLabel, 5, 1);
    } else{
        boutonAcheterCanardFeu->hide();
        coutCanardFeuLabel->hide();
    }
    if (((Clicker*)parent) -> fermier -> getCanardFeu() >= 1) {
        layout->addWidget(boutonAcheterCanardDore, 6, 0);
        layout->addWidget(coutCanardDoreLabel, 6, 1);
    } else{
        boutonAcheterCanardDore->hide();
        coutCanardDoreLabel->hide();
    }
    if (((Clicker*)parent) -> fermier -> getCanardDore() >= 1) {
        layout->addWidget(boutonAcheterCanardArcEnCiel, 7, 0);
        layout->addWidget(coutCanardArcEnCielLabel, 7, 1);
    } else{
        boutonAcheterCanardArcEnCiel->hide();
        coutCanardArcEnCielLabel->hide();
    }


    layout->addWidget(buttonBack, 8, 0);
    setLayout(layout);
    resize(500, 400);

}

//Achète un canard Pekin
void Shop::acheterCanardPekin() {
    //achete un canard s'il a assez d'argent
    if(((Clicker*)(parent())) -> fermier -> getArgent() >= coutCanardPekin) {
        ((Clicker*)(parent())) -> fermier -> setArgent(((Clicker*)(parent())) -> fermier -> getArgent() - coutCanardPekin);
        ((Clicker*)(parent())) -> fermier -> setCanardPekin(((Clicker*)(parent())) -> fermier -> getCanardPekin() + 1);
        refreshArgent();
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
        refreshArgent();
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
        refreshArgent();
        qDebug() << "Vous avez acheté un beau canard Pirate !";
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
        refreshArgent();
        qDebug() << "Vous avez acheté un beau canard Supporter !";
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
        refreshArgent();
        qDebug() << "Vous avez acheté un beau canard Feu !";
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
        refreshArgent();
        qDebug() << "Vous avez acheté un beau canard Doré !";
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
        refreshArgent();
        qDebug() << "Vous avez acheté un beau canard Arc-en-ciel !";
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

    this->argentLabel->setText(QString::number(((Clicker*)(parent())) -> fermier -> getArgent()));


    std::string message = "Vous avez vendu tous " + std::to_string(totalOeufs) + " oeufs et vous avez gagné " + std::to_string(somme) + " CoinCoins!";
    qDebug() << message.c_str();

    refreshArgent();
}

//Retourne au clicker
void Shop::back() {
    qDebug() << "Vous voila de retour à la ferme !";
    ((Clicker*)(parent()))->initClicker();
}

//refresh le label argent
void Shop::refreshArgent() {
    std::string argent = "Argent : " + std::to_string(((Clicker*)(parent()))->fermier -> getArgent()) + " CoinCoins";
    this->argentLabel->setText(QString::fromStdString(argent));
}