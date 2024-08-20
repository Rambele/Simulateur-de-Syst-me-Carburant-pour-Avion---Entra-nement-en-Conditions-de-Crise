#include "historique.h"
#include "ui_historique.h"
#include <cstring>
#include <QString>
#include <QFile>

MainWindow1::MainWindow1(QWidget *parent)
    : QMainWindow(parent)
    , uii(new Ui::MainWindow1)
{
    uii->setupUi(this);

}

MainWindow1::~MainWindow1()
{
    delete uii;
}


void MainWindow1::affiche()
{

        zoneTexte=new QTextEdit(this);
        zoneTexte->setGeometry(0,0,732,480);
        zoneTexte->setReadOnly(true);

        QString texte;
        QFile fichier("C:/MinGW/projet/historique.txt");
        if(fichier.open(QIODevice::ReadOnly | QIODevice::Text))
        {
             texte = fichier.readAll();
             fichier.close();
        }
        else texte = "Impossible d'ouvrir le fichier !";
        zoneTexte->setStyleSheet(QString::fromUtf8("background-color: blue;border: 5px solid  Yellow;border-radius: 0px;padding: 5px;font: 87 9pt 'Arial Black';color:white;"));

        zoneTexte->setText(texte);
        zoneTexte->show();
}
