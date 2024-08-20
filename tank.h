#ifndef TANK_H
#define TANK_H
#include "pompe.h"

class Tank
{
public:
    Tank(Pompe x,Pompe y,int c);
    Tank();
    int getetatpb();
    int getetatpa();
    int getcar();
    void changecar(int c);
    void affiche();
    bool vide();
    bool pannepompea();
    bool pannepompeb();
    bool pannetotalpompe();
    void vidange();
    void pannea();
    void panneb();


private:
    Pompe a;Pompe b;
    int carburant;

};

#endif // TANK_H
