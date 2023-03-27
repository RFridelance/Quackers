//
// Created by alvann on 21/03/23.
//

#ifndef QUACKERS_FERMIER_H
#define QUACKERS_FERMIER_H

#include <string>

class Fermier {

public:
    std::string nom;
    int canardPekin = 1;
    int canardColvert = 0;
    int canardPirate = 0;
    int canardSupporter = 0;
    int canardFeu = 0;
    int canardDore = 0;
    int canardArcEnCiel = 0;

    int oeufsPekin = 0;
    int oeufsColvert = 0;
    int oeufsPirate = 0;
    int oeufsSupporter = 0;
    int oeufsFeu = 0;
    int oeufsDore = 0;
    int oeufsArcEnCiel = 0;

    int argent = 0;

    //Fermier

    std::string getNom();
    void setNom(std::string nom);

    //Canards

    int getCanardPekin();
    void setCanardPekin(int canardPekin);

    int getCanardColvert();
    void setCanardColvert(int canardColvert);

    int getCanardPirate();
    void setCanardPirate(int canardPirate);

    int getCanardSupporter();
    void setCanardSupporter(int canardSupporter);

    int getCanardFeu();
    void setCanardFeu(int canardFeu);

    int getCanardDore();
    void setCanardDore(int canardDoré);

    int getCanardArcEnCiel();
    void setCanardArcEnCiel(int canardArcEnCiel);

    int getAllCanards();

    //Oeufs

    int getOeufsPekin();
    void setOeufsPekin(int oeufsPekin);

    int getOeufsColvert();
    void setOeufsColvert(int oeufsColvert);

    int getOeufsPirate();
    void setOeufsPirate(int oeufsPirate);

    int getOeufsSupporter();
    void setOeufsSupporter(int oeufsSupporter);

    int getOeufsFeu();
    void setOeufsFeu(int oeufsFeu);

    int getOeufsDore();
    void setOeufsDore(int oeufsDoré);

    int getOeufsArcEnCiel();
    void setOeufsArcEnCiel(int oeufsArcEnCiel);

    int getAllOeufs();

    //Argent

    int getArgent();
    void setArgent(int argent);
};

#endif //QUACKERS_FERMIER_H
