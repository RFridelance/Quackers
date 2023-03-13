#include <QApplication>
#include "headers/Accueil.h"
#include "headers/testf.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QCoreApplication::setOrganizationName("Quackemen");
    QCoreApplication::setApplicationName("Quackers");
    Accueil accueil;
    accueil.setFixedSize(1280, 720);
    accueil.show();


    return app.exec();
}