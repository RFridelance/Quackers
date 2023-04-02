//
// Created by alvann on 06/03/23.
//
#include "../headers/Accueil.h"
#include "../headers/Menu.h"


Accueil::Accueil() {
    setStyleSheet("QTabWidget {background-color: transparent;}"
                  "QTabWidget::pane {border: 0px solid transparent;}");


    QPixmap pixmap("sprites/background.png");
    QLabel *background = new QLabel(this);
    background->setPixmap(pixmap);
    background->setGeometry(0, 0, 1280, 720);
    background->setScaledContents(true);
    background->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
    background->show();

    menu = new Menu(this);

    QTabWidget *tabWidget = new QTabWidget(this);
    QBoxLayout *layout = new QBoxLayout(QBoxLayout::TopToBottom, tabWidget);

    layout->addWidget(menu, Qt::AlignCenter);
    tabWidget->setLayout(layout);
    tabWidget->setFixedSize(600, 600);
    tabWidget->setGeometry(325, 50, 80, 30);

    //setCentralWidget(tabWidget);


}

void Accueil::clear() {
    delete this->centralWidget();
}

