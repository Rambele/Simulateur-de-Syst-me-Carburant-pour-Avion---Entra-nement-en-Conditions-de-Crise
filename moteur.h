#ifndef MOTEUR_H
#define MOTEUR_H
#include "tank.h"


class Moteur
{
public:
    Moteur(Tank a);
    Moteur();
    void changetank(Tank f);
    Tank tank();

private:
    Tank t;
};

#endif // MOTEUR_H
