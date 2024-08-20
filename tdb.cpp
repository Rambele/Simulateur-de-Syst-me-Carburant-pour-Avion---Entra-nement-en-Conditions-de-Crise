#include "tdb.h"

tdb::tdb(Tank a,Tank b,Tank c,Pompe a1,Pompe a2,Pompe b1,Pompe b2,Pompe c1,Pompe c2,Vanne x,Vanne y, Vanne f,
         Vanne z,Vanne r,Moteur ax,Moteur ay,Moteur az)
{
     t1=a;
     t2=b;
     t3=c;
     pa1=a1;
     pa2=a2;
     pb1=b1;
     pb2=b2;
     pc1=c1;
     pc2=c2;
     vt12=x;
     vt23=y;
     v13=f;
     v12=z;
     v23=r;
     m1=ax;
     m2=ay;
     m3=az;
}

tdb::tdb()
{

}
