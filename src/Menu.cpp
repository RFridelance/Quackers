//
// Created by alvann on 30/01/23.
//

#include "../headers/Menu.h"
#include <QPushButton>
#include <QApplication>
#include <QProgressBar>
#include <QSlider>
#include <QtWidgets>

Menu::Menu(QWidget *parent) : QWidget(parent) {
    //setFixedSize(500, 300);


    buttonStart = new QPushButton("Gooooo !!!");
    QObject::connect(buttonStart, SIGNAL(clicked()), qApp, SLOT(quit()));

    buttonAbout = new QPushButton("About");
    QObject::connect(buttonAbout, SIGNAL(clicked()), qApp, SLOT(quit()));

    buttonQuit = new QPushButton("Quit");
    QObject::connect(buttonQuit, SIGNAL(clicked()), qApp, SLOT(quit()));

    buttonLayout = new QVBoxLayout(this);
    buttonLayout->addWidget(buttonStart);
    buttonLayout->addWidget(buttonAbout);
    buttonLayout->addWidget(buttonQuit);



}
