//
// Created by alvann on 06/03/23.
//

#ifndef QUACKERS_ACCUEIL_H
#define QUACKERS_ACCUEIL_H

#include <QMainWindow>
#include <QtWidgets>
#include "../headers/Menu.h"

class Accueil: public QMainWindow {

    Q_OBJECT

    public:
        Accueil();

    private slots:

    private:
    Menu *menu;
};



#endif //QUACKERS_ACCUEIL_H
