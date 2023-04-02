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
    std::string msg = "Bienvenue dans votre ferme" + fermier->getNom() + " !" ;
    QDebug(QtDebugMsg) << msg.c_str();

    layout = new QGridLayout();

    initClicker();


}


/*
 * Initialisation du clicker
 * De tous les boutons, labels, images, etc...
 */
void Clicker::initClicker() {

    //remove all widgets from the layout
    QLayoutItem *child;
    while ((child = layout->takeAt(0)) != 0) {
        delete child->widget();
        delete child;
    }

    //Initialisation du bouton de click
    buttonClick = new QPushButton(tr("CLICK !!!"), this);
    //Connection du bouton de click
    QObject::connect(buttonClick, &QPushButton::released, this, &Clicker::Clicked);
    QSize btnsize = QSize(75, 75);
    buttonClick->setMinimumSize(btnsize);

    //Initialisation du layout
    layout->addWidget(buttonClick,1,0,1,3);
    resize(500, 300);
    setLayout(layout);
    layout->setSpacing(0);
    //dplacer le layout 50 px vers le bas
    layout->setContentsMargins(0, 70, 0, 0);

    //Initialisation du bouton shop
    buttonShop = new QPushButton(tr("Marché"), this);
    //Connection du bouton shop
    QObject::connect(buttonShop, &QPushButton::released, this, &Clicker::openShop);

    //Initialisation du bouton quit
    boutonQuitter = new QPushButton(tr("Quitter"), this);
    //Connection du bouton quit
    QObject::connect(boutonQuitter, SIGNAL(clicked()), qApp, SLOT(quit()));



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

    /*
     * Import images et labels d'images pour l'affichage des images
     */
    //Canards
    QPixmap imageCanardPekin("sprites/duck.png");
    QLabel *canardPekinImageLabel = new QLabel();
    canardPekinImageLabel->setPixmap(imageCanardPekin);
    canardPekinImageLabel->setScaledContents(true);
    canardPekinImageLabel->setFixedSize(50,50);

    QPixmap imageCanardColvert("sprites/duck2.png");
    QLabel *canardColvertImageLabel = new QLabel();
    canardColvertImageLabel->setPixmap(imageCanardColvert);
    canardColvertImageLabel->setScaledContents(true);
    canardColvertImageLabel->setFixedSize(50,50);

    QPixmap imageCanardPirate("sprites/duck6.png");
    QLabel *canardPirateImageLabel = new QLabel();
    canardPirateImageLabel->setPixmap(imageCanardPirate);
    canardPirateImageLabel->setScaledContents(true);
    canardPirateImageLabel->setFixedSize(50,50);

    QPixmap imageCanardSupporter("sprites/duck4.png");
    QLabel *canardSupporterImageLabel = new QLabel();
    canardSupporterImageLabel->setPixmap(imageCanardSupporter);
    canardSupporterImageLabel->setScaledContents(true);
    canardSupporterImageLabel->setFixedSize(50,50);

    QPixmap imageCanardFeu("sprites/duck7.png");
    QLabel *canardFeuImageLabel = new QLabel();
    canardFeuImageLabel->setPixmap(imageCanardFeu);
    canardFeuImageLabel->setScaledContents(true);
    canardFeuImageLabel->setFixedSize(50,50);

    QPixmap imageCanardDore("sprites/duck3.png");
    QLabel *canardDoreImageLabel = new QLabel();
    canardDoreImageLabel->setPixmap(imageCanardDore);
    canardDoreImageLabel->setScaledContents(true);
    canardDoreImageLabel->setFixedSize(50,50);

    QPixmap imageCanardArcEnCiel("sprites/duck5.png");
    QLabel *canardArcEnCielImageLabel = new QLabel();
    canardArcEnCielImageLabel->setPixmap(imageCanardArcEnCiel);
    canardArcEnCielImageLabel->setScaledContents(true);
    canardArcEnCielImageLabel->setFixedSize(50,50);

    //Oeufs
    QPixmap imageOeufPekin("sprites/egg.png");
    QLabel *oeufPekinImageLabel = new QLabel();
    oeufPekinImageLabel->setPixmap(imageOeufPekin);
    oeufPekinImageLabel->setScaledContents(true);
    oeufPekinImageLabel->setFixedSize(25,25);

    QPixmap imageOeufColvert("sprites/egg2.png");
    QLabel *oeufColvertImageLabel = new QLabel();
    oeufColvertImageLabel->setPixmap(imageOeufColvert);
    oeufColvertImageLabel->setScaledContents(true);
    oeufColvertImageLabel->setFixedSize(25,25);

    QPixmap imageOeufPirate("sprites/egg6.png");
    QLabel *oeufPirateImageLabel = new QLabel();
    oeufPirateImageLabel->setPixmap(imageOeufPirate);
    oeufPirateImageLabel->setScaledContents(true);
    oeufPirateImageLabel->setFixedSize(25,25);

    QPixmap imageOeufSupporter("sprites/egg4.png");
    QLabel *oeufSupporterImageLabel = new QLabel();
    oeufSupporterImageLabel->setPixmap(imageOeufSupporter);
    oeufSupporterImageLabel->setScaledContents(true);
    oeufSupporterImageLabel->setFixedSize(25,25);

    QPixmap imageOeufFeu("sprites/egg7.png");
    QLabel *oeufFeuImageLabel = new QLabel();
    oeufFeuImageLabel->setPixmap(imageOeufFeu);
    oeufFeuImageLabel->setScaledContents(true);
    oeufFeuImageLabel->setFixedSize(25,25);

    QPixmap imageOeufDore("sprites/egg3.png");
    QLabel *oeufDoreImageLabel = new QLabel();
    oeufDoreImageLabel->setPixmap(imageOeufDore);
    oeufDoreImageLabel->setScaledContents(true);
    oeufDoreImageLabel->setFixedSize(25,25);

    QPixmap imageOeufArcEnCiel("sprites/egg5.png");
    QLabel *oeufArcEnCielImageLabel = new QLabel();
    oeufArcEnCielImageLabel->setPixmap(imageOeufArcEnCiel);
    oeufArcEnCielImageLabel->setScaledContents(true);
    oeufArcEnCielImageLabel->setFixedSize(25,25);

    //Label argent
    argentLabel = new QLabel("Argent : " + QString::number(fermier->getArgent()));

    //ajout dans le layout
    layout->addWidget(canardPekinLabel, 2, 0);
    layout->addWidget(canardPekinImageLabel, 2, 1);
    layout->addWidget(oeufsPekinLabel, 2, 2);
    layout->addWidget(oeufPekinImageLabel, 2, 3);

    if (fermier->getCanardColvert() >= 1){
        layout->addWidget(canardColvertLabel, 3, 0);
        layout->addWidget(canardColvertImageLabel, 3, 1);
        layout->addWidget(oeufsColvertLabel, 3, 2);
        layout->addWidget(oeufColvertImageLabel, 3, 3);
    }
    if (fermier->getCanardPirate() >= 1){
        layout->addWidget(canardPirateLabel, 4, 0);
        layout->addWidget(canardPirateImageLabel, 4, 1);
        layout->addWidget(oeufsPirateLabel, 4, 2);
        layout->addWidget(oeufPirateImageLabel, 4, 3);
    }
    if (fermier->getCanardSupporter() >= 1){
        layout->addWidget(canardSupporterLabel, 5, 0);
        layout->addWidget(canardSupporterImageLabel, 5, 1);
        layout->addWidget(oeufsSupporterLabel, 5, 2);
        layout->addWidget(oeufSupporterImageLabel, 5, 3);
    }
    if (fermier->getCanardFeu() >= 1){
        layout->addWidget(canardFeuLabel, 6, 0);
        layout->addWidget(canardFeuImageLabel, 6, 1);
        layout->addWidget(oeufsFeuLabel, 6, 2);
        layout->addWidget(oeufFeuImageLabel, 6, 3);
    }
    if (fermier->getCanardDore() >= 1){
        layout->addWidget(canardDoreLabel, 7, 0);
        layout->addWidget(canardDoreImageLabel, 7, 1);
        layout->addWidget(oeufsDoreLabel, 7, 2);
        layout->addWidget(oeufDoreImageLabel, 7, 3);
    }
    if (fermier->getCanardArcEnCiel() >= 1){
        layout->addWidget(canardArcEnCielLabel, 8, 0);
        layout->addWidget(canardArcEnCielImageLabel, 8, 1);
        layout->addWidget(oeufsArcEnCielLabel, 8, 2);
        layout->addWidget(oeufArcEnCielImageLabel, 8, 3);
    }

    layout->addWidget(argentLabel, 9, 0);
    layout->addWidget(buttonShop,9, 1);

    layout->addWidget(boutonQuitter, 10, 0, 1, 1);
}


/*
 * Permet lors du click d'incrémenter le nombre d'oeufs en fonction des canards
 * Et de mettre à jour les labels
 */
void Clicker::Clicked() {

    //Mise à jour des oeufs
    fermier->setOeufsPekin(fermier->getOeufsPekin() + fermier->getCanardPekin());
    fermier->setOeufsColvert(fermier->getOeufsColvert() + fermier->getCanardColvert());
    fermier->setOeufsPirate(fermier->getOeufsPirate() + fermier->getCanardPirate());
    fermier->setOeufsSupporter(fermier->getOeufsSupporter() + fermier->getCanardSupporter());
    fermier->setOeufsFeu(fermier->getOeufsFeu() + fermier->getCanardFeu());
    fermier->setOeufsDore(fermier->getOeufsDore() + fermier->getCanardDore());
    fermier->setOeufsArcEnCiel(fermier->getOeufsArcEnCiel() + fermier->getCanardArcEnCiel());


    //Mise à jour des labels
    oeufsPekinLabel->setText("Œeufs Pekins : " + QString::number(fermier->getOeufsPekin()));
    oeufsColvertLabel->setText("Œeufs Colverts : " + QString::number(fermier->getOeufsColvert()));
    oeufsPirateLabel->setText("Œeufs Pirates : " + QString::number(fermier->getOeufsPirate()));
    oeufsSupporterLabel->setText("Œeufs Supporters : " + QString::number(fermier->getOeufsSupporter()));
    oeufsFeuLabel->setText("Œeufs Feu : " + QString::number(fermier->getOeufsFeu()));
    oeufsDoreLabel->setText("Œeufs Dorés : " + QString::number(fermier->getOeufsDore()));
    oeufsArcEnCielLabel->setText("Œeufs Arc-en-ciel : " + QString::number(fermier->getOeufsArcEnCiel()));

}

/*
 * Fonction qui permet d'ouvrir la fenetre shop
 */
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