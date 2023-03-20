//
// Created by alvann on 13/03/23.
//

#ifndef QUACKERS_CLICKER_H
#define QUACKERS_CLICKER_H

#include <QMainWindow>
#include <QtWidgets>


class Clicker: public QWidget {

    Q_OBJECT

    QGridLayout* layout;

    QPushButton* click;
    QPushButton* shop;

    QLabel* ducksLabel;
    QLabel* eggsLabel;

    public:
        Clicker(QWidget *parent = nullptr);

    signals:

    public slots:
            void Clicked();

            void openShop();

private :
    int ducks = 1;
    int eggs = 0;

};




#endif //QUACKERS_CLICKER_H
