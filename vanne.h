#ifndef VANNE_H
#define VANNE_H
#include "tank.h"
#include "moteur.h"

#include <string>


class Vanne
{
public:
    Vanne(std::string nom,int e);
    Vanne();
    std::string geta();
    void modif();
    int gete();
    void fermeture(Tank& t1,Tank& t2);
    void fermeture(Moteur& m1,Tank t1,Tank t2);
    void ouverture();

private:
    std::string a;
    int etat; // 0fermé 1ouvert
};

#endif // VANNE_H
