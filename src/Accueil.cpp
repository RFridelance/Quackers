//
// Created by alvann on 06/03/23.
//
#include "Accueil.h"


Accueil::Accueil() {
    m_bouton = new QPushButton("Quitter", this);
    m_bouton->setGeometry(10, 10, 80, 30);
    QObject::connect(m_bouton, SIGNAL(clicked()), qApp, SLOT(quit()));
}

