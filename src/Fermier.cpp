//
// Created by alvann on 21/03/23.
//

#include "../headers/Fermier.h"


//Retourne le nom du fermier
std::string Fermier::getNom() {
    return nom;
}

//set le nom du fermier
void Fermier::setNom(std::string nom) {
    this->nom = nom;
}
//**********************************************************************************************************************


//Retourne le nombre de canards du fermier par type
int Fermier::getCanardPekin() {
    return canardPekin;
}

int Fermier::getCanardColvert() {
    return canardColvert;
}

int Fermier::getCanardPirate() {
    return canardPirate;
}

int Fermier::getCanardSupporter() {
    return canardSupporter;
}

int Fermier::getCanardFeu() {
    return canardFeu;
}

int Fermier::getCanardDore() {
    return canardDore;
}

int Fermier::getCanardArcEnCiel() {
    return canardArcEnCiel;
}

//Retourne le nombre total de canards du fermier

int Fermier::getAllCanards() {
    return canardPekin + canardColvert + canardPirate + canardSupporter + canardFeu + canardDore + canardArcEnCiel;
}

//set le nombre de canards du fermier par type
void Fermier::setCanardPekin(int canardPekin) {
    this->canardPekin = canardPekin;
}

void Fermier::setCanardColvert(int canardColvert) {
    this->canardColvert = canardColvert;
}

void Fermier::setCanardPirate(int canardPirate) {
    this->canardPirate = canardPirate;
}

void Fermier::setCanardSupporter(int canardSupporter) {
    this->canardSupporter = canardSupporter;
}

void Fermier::setCanardFeu(int canardFeu) {
    this->canardFeu = canardFeu;
}

void Fermier::setCanardDore(int canardDore) {
    this->canardDore = canardDore;
}

void Fermier::setCanardArcEnCiel(int canardArcEnCiel) {
    this->canardArcEnCiel = canardArcEnCiel;
}

//**********************************************************************************************************************



//Retourne le nombre d'oeufs du fermier par type
int Fermier::getOeufsPekin() {
    return oeufsPekin;
}

int Fermier::getOeufsColvert() {
    return oeufsColvert;
}

int Fermier::getOeufsPirate() {
    return oeufsPirate;
}

int Fermier::getOeufsSupporter() {
    return oeufsSupporter;
}

int Fermier::getOeufsFeu() {
    return oeufsFeu;
}

int Fermier::getOeufsDore() {
    return oeufsDore;
}

int Fermier::getOeufsArcEnCiel() {
    return oeufsArcEnCiel;
}

//Retourne le nombre total d'oeufs du fermier
int Fermier::getAllOeufs() {
    return oeufsPekin + oeufsColvert + oeufsPirate + oeufsSupporter + oeufsFeu + oeufsDore + oeufsArcEnCiel;
}

//set le nombre d'oeufs du fermier par type
void Fermier::setOeufsPekin(int oeufsPekin) {
    this->oeufsPekin = oeufsPekin;
}

void Fermier::setOeufsColvert(int oeufsColvert) {
    this->oeufsColvert = oeufsColvert;
}

void Fermier::setOeufsPirate(int oeufsPirate) {
    this->oeufsPirate = oeufsPirate;
}

void Fermier::setOeufsSupporter(int oeufsSupporter) {
    this->oeufsSupporter = oeufsSupporter;
}

void Fermier::setOeufsFeu(int oeufsFeu) {
    this->oeufsFeu = oeufsFeu;
}

void Fermier::setOeufsDore(int oeufsDore) {
    this->oeufsDore = oeufsDore;
}

void Fermier::setOeufsArcEnCiel(int oeufsArcEnCiel) {
    this->oeufsArcEnCiel = oeufsArcEnCiel;
}

//**********************************************************************************************************************

//retourne l'argent du fermier
int Fermier::getArgent() {
    return argent;
}

//set l'argent du fermier
void Fermier::setArgent(int argent) {
    this->argent = argent;
}

