#include "moteur.h"

Moteur::Moteur(Tank a)
{
t=a;
}
Moteur::Moteur()
{

}
void Moteur::changetank(Tank f)
{
t=f;
}

Tank Moteur::tank()
{
return t;
}
