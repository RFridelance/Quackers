//
// Created by alvann on 06/03/23.
//
#include "../headers/Accueil.h"
#include "../headers/Menu.h"


Accueil::Accueil() {

    menu = new Menu(this);

    QTabWidget *tabWidget = new QTabWidget(this);
    QBoxLayout *layout = new QBoxLayout(QBoxLayout::TopToBottom, tabWidget);
    layout->addWidget(menu, Qt::AlignCenter);
    tabWidget->setLayout(layout);
    tabWidget->setFixedSize(1000, 600);
    tabWidget->setGeometry(100, 50, 80, 30);


    //setCentralWidget(tabWidget);


}

void Accueil::clear() {
    delete this->centralWidget();
}

