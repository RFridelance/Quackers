//
// Created by alvann on 21/03/23.
//

#ifndef QUACKERS_FERMIER_H
#define QUACKERS_FERMIER_H

#include <string>

class Fermier {

public:
    std::string name;
    int ducks = 1;
    int eggs = 0;
    int money = 0;

    std::string getName();
    void setName(std::string name);

    int getDucks();
    void setDucks(int ducks);

    int getEggs();
    void setEggs(int eggs);

    int getMoney();
    void setMoney(int money);

};

#endif //QUACKERS_FERMIER_H
