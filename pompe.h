#ifndef POMPE_H
#define POMPE_H


class Pompe
{
public:
    Pompe(int e);
    Pompe();
    void pompesecours();
    int getetats();
    void demarrage();
    void panne();
    void arret();
    bool verifpanne();


private:
    int etat;// 0 arret ,1 marche, 2 panne
};

#endif // POMPE_H
