#include "mainwindow.h"
#include "moteur.h"
#include "tank.h"
#include "pompe.h"
#include "vanne.h"
#include "tdb.h"
#include <QApplication>
#include <iostream>
#include <QPushButton>
#include <QWidget>
#include <QPushButton>
#include <QLCDNumber>
#include <QSlider>
#include<QTextEdit>

#include<QFile>

int main(int argc, char *argv[])
{
    Pompe a1=Pompe(1);
    Pompe a2=Pompe(0);
    Pompe b1=Pompe(1);
    Pompe b2=Pompe(0);
    Pompe c1=Pompe(1);
    Pompe c2=Pompe(0);
    Tank t1=Tank(a1,a2,100);
    Tank t2=Tank(b1,b2,80);
    Tank t3=Tank(c1,c2,100);
    Moteur m1=Moteur(t1);
    Moteur m2=Moteur(t2);
    Moteur m3=Moteur(t3);
    Vanne v1=Vanne("vt12",1);
    Vanne v2=Vanne("vt23",1);
    Vanne v3=Vanne("v12",1);
    Vanne v4=Vanne("v13",1);
    Vanne v5=Vanne("v23",1);
    tdb f=tdb(t1,t2,t3,a1,a2,b1,b2,c1,c2,v1,v2,v3,v4,v5,m1,m2,m3);

    QApplication a(argc, argv);
    MainWindow w;

    w.initialisation(f);
    std::string const nomFichier("C:/MinGW/projet/historique.txt");
      std::ofstream monFlux(nomFichier.c_str(),  std::ios::out | std::ios::app );

      if(monFlux)
      {
          monFlux << std::endl << "Nouvel session :" << std::endl;

       }
    w.show();
    return a.exec();
}
