#include "pompe.h"

Pompe::Pompe(int e)
{
etat=e;
}
Pompe::Pompe()
{
}
void Pompe::demarrage()
{
    etat=1;

}

int Pompe::getetats()
{
    return etat;
}
bool Pompe::verifpanne()
{
    if (etat==2) return true;
    else return false;
}
void Pompe::arret()
{
    etat=0;
}
void Pompe::panne()
{
    etat=2;
}
