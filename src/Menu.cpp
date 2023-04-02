//
// Created by alvann on 30/01/23.
//

#include "../headers/Menu.h"
#include "../headers/Clicker.h"
#include "../headers/Accueil.h"
#include <QPushButton>
#include <QApplication>
#include <QProgressBar>
#include <QSlider>
#include <QtWidgets>

Menu::Menu(QWidget *parent) : QWidget(parent) {
    //setFixedSize(500, 300);


    buttonStart = new QPushButton("Gooooo !!!");
    //QObject::connect(buttonStart, SIGNAL(clicked()), qApp, SLOT(quit()));
    QObject::connect(buttonStart, &QPushButton::released, this, &Menu::start);

    /*buttonAbout = new QPushButton("About");
    QObject::connect(buttonAbout, SIGNAL(clicked()), qApp, SLOT(quit()));*/

    buttonQuit = new QPushButton("Quit");
    QObject::connect(buttonQuit, SIGNAL(clicked()), qApp, SLOT(quit()));

    buttonLayout = new QVBoxLayout(this);
    buttonLayout->addWidget(buttonStart);
    /*buttonLayout->addWidget(buttonAbout);*/
    buttonLayout->addWidget(buttonQuit);

}

void Menu::start() {
    parentWidget()->layout()->addWidget(new Clicker(this));
    //parentWidget()->layout()->removeWidget(this);
    this->hide();

    //refresh the window
    parentWidget()->show();



};

