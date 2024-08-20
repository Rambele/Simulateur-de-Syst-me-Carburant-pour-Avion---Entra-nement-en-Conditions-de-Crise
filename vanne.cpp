#include "vanne.h"

Vanne::Vanne(std::string nom,int e)
{
   a=nom;
    etat=e;
}
Vanne::Vanne()
{

}

std::string Vanne::geta()
{
return a;
}
int Vanne::gete()
{
return etat;
}
void Vanne::modif()
{
if(etat==0) etat=1;else etat=0;
}
void Vanne::fermeture(Tank &t1, Tank &t2)
{
etat=0;
        if(t1.getcar()==0)
        {
            int x=(t2.getcar()+t1.getcar())/2;

            t1.changecar(x);
            t2.changecar(x);
        }
        if(t2.getcar()==0)
        {
            int x=(t2.getcar()+t1.getcar())/2;
            t1.changecar(x);
            t2.changecar(x);
        }


}
void Vanne::fermeture(Moteur& m1,Tank t1,Tank t2)
{
        if(t1.getetatpa()==2 && t1.getetatpb()==2)
        {

            m1.changetank(t2);
        }

}
void Vanne::ouverture()
{
    etat=1;
}
