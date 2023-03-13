//
// Created by alvann on 30/01/23.
//

#ifndef FENETRE_HPP
#define FENETRE_HPP

#include <QtWidgets>

class QPushButton;

class Menu : public QWidget {
public:
    explicit Menu(QWidget *parent = nullptr);

private:
    QPushButton *buttonStart;
    QPushButton *buttonAbout;
    QPushButton *buttonQuit;
    QVBoxLayout *buttonLayout;
};

#endif //INIT_FENETRE_H
