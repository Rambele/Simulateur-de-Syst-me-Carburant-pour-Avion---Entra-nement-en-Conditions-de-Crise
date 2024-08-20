#ifndef TDB_H
#define TDB_H
#include "moteur.h"
#include "tank.h"
#include "pompe.h"
#include "vanne.h"


class tdb
{
public:
    tdb(Tank a,Tank b,Tank c,Pompe a1,Pompe a2,Pompe b1,Pompe b2,Pompe c1,Pompe c2,Vanne x,Vanne y, Vanne f,
        Vanne z,Vanne r,Moteur ax,Moteur ay,Moteur az);
    tdb();
    Tank t1;Tank t2;Tank t3;Pompe pa1;Pompe pa2;Pompe pb1;Pompe pb2;Pompe pc1;Pompe pc2;Vanne vt12;Vanne vt23; Vanne v13;
             Vanne v12;Vanne v23;Moteur m1;Moteur m2;Moteur m3;
};

#endif // TDB_H
