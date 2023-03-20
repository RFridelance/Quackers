//
// Created by alvann on 30/01/23.
//

#ifndef QUACKERS_MENU_H
#define QUACKERS_MENU_H

#include <QtWidgets>

class QPushButton;

class Menu : public QWidget {
public:
    explicit Menu(QWidget *parent = nullptr);

public slots:
        void start();

        void about();

        void quit();


private:
    QPushButton *buttonStart;
    QPushButton *buttonAbout;
    QPushButton *buttonQuit;
    QVBoxLayout *buttonLayout;
};

#endif //INIT_QUACKERS_MENU_H
