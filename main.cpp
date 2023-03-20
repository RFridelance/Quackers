#include <QApplication>
#include "headers/Accueil.h"
#include "headers/Clicker.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QCoreApplication::setOrganizationName("Quackemen");
    QCoreApplication::setApplicationName("Quackers");
    Accueil accueil;
    accueil.setFixedSize(1280, 720);
/*
    Clicker* clicker(new Clicker());
    Clicker* clicker2(new Clicker());

    QObject::connect(clicker, &Clicker::clicked, clicker2, &Clicker::MakeActive);
    QObject::connect(clicker2, &Clicker::clicked, clicker, &Clicker::MakeActive);

    clicker->show();
    clicker2->show();
*/
    accueil.show();


    return app.exec();
}
