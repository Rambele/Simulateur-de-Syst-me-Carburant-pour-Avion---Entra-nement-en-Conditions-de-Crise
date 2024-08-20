#include "tank.h"
#include <iostream>
Tank::Tank(Pompe x,Pompe y,int c)
{
 a=x;
 b=y;
 carburant=c;
}
Tank::Tank()
{

}

int Tank::getetatpa()
{
    return a.getetats();

}
int Tank::getetatpb()
{
    return b.getetats();

}
bool Tank::pannepompea()
{
    if(a.verifpanne()==true) return true;else return false;
}
void Tank::pannea()
{
    a.panne();
}
void Tank::panneb()
{
    b.panne();
}
bool Tank::pannepompeb()
{
    if(b.verifpanne()==true) return true;else return false;
}
bool Tank::pannetotalpompe()
{
    if(a.verifpanne()==true && b.verifpanne()==true ) return true;else return false;
}
bool Tank::vide()
{
    if(carburant==0)
    {
        return true;
    }
    else return false;

}
int Tank::getcar()
{
    return carburant;

}
void Tank::changecar(int c)
{
    carburant=c;

}


void Tank::affiche()
{
    std::cout << "le carburant est" << carburant << std::endl;
}

void Tank::vidange()
{
    carburant=0;
}
