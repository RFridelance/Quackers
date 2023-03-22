//
// Created by alvann on 21/03/23.
//

#include "../headers/Fermier.h"




//get the name of the farmer
std::string Fermier::getName() {
    return name;
}

//set the name of the farmer
void Fermier::setName(std::string name) {
    this->name = name;
}

//get the number of ducks of the farmer
int Fermier::getDucks() {
    return ducks;
}

//set the number of ducks of the farmer
void Fermier::setDucks(int ducks) {
    this->ducks = ducks;
}

//get the number of eggs of the farmer
int Fermier::getEggs() {
    return eggs;
}

//set the number of eggs of the farmer
void Fermier::setEggs(int eggs) {
    this->eggs = eggs;
}

//get the money of the farmer
int Fermier::getMoney() {
    return money;
}

//set the money of the farmer
void Fermier::setMoney(int money) {
    this->money = money;
}

