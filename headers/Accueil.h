//
// Created by alvann on 06/03/23.
//

#ifndef QUACKERS_ACCUEIL_H
#define QUACKERS_ACCUEIL_H

#include <QMainWindow>
#include <QtWidgets>

class Accueil: public QMainWindow {

    Q_OBJECT

    public:
        Accueil();

    private slots:

    private:
    QPushButton *newGame_button;
    QPushButton *about_button;
    QPushButton *quit_button;
};



#endif //QUACKERS_ACCUEIL_H
