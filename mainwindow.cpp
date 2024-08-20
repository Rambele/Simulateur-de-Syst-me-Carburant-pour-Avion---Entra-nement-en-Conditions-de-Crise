#include "ui_mainwindow.h"
#include "mainwindow.h"
#include "historique.h"

#include <cstring>
#include <QString>
#include <iostream>
#include <QFile>
#include <QWidget>
#include "lest.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


}

MainWindow::~MainWindow()
{
    delete ui;
}

//initialisation du dessin
void MainWindow::inittotal()
{
table=table2;
etatinit();
ui->toy1->setStyleSheet(QString::fromUtf8("background-color:white; border: 1px solid black;border-radius: 0px;padding: 5px;"));
ui->toy2->setStyleSheet(QString::fromUtf8("background-color:white; border: 1px solid black;border-radius: 0px;padding: 5px;"));
ui->T1->setStyleSheet(QString::fromUtf8("    background-color: rgb(255, 85, 0); border: 1px solid black;border-radius: 0px;padding: 5px;font: 87 9pt 'Arial Black';color:black;"));
ui->T2->setStyleSheet(QString::fromUtf8(" background-color: rgb(85, 170, 0); border: 1px solid black;border-radius: 0px;padding: 5px;	font: 87 9pt 'Arial Black';color:black;"));
ui->T3->setStyleSheet(QString::fromUtf8(" background-color:rgb(255, 255, 0); border: 1px solid black;border-radius: 0px;padding: 5px;font: 87 9pt 'Arial Black';color:black;"));
ui->vt23_2->setStyleSheet(QString::fromUtf8("background-color:white; border: 2px solid black;	border-radius: 0px;padding: 5px;font: 87 9pt 'Arial Black';color:black;"));
ui->vt12_2->setStyleSheet(QString::fromUtf8("background-color:white; border: 2px solid black;	border-radius: 0px;padding: 5px;font: 87 9pt 'Arial Black';color:black;"));
ui->v12_2->setStyleSheet(QString::fromUtf8("background-color:white; border: 2px solid black;	border-radius: 0px;padding: 5px;font: 87 9pt 'Arial Black';color:black;"));
ui->v13_2->setStyleSheet(QString::fromUtf8("background-color:white; border: 2px solid black;	border-radius: 0px;padding: 5px;font: 87 9pt 'Arial Black';color:black;"));
ui->v23_2->setStyleSheet(QString::fromUtf8("background-color:white; border: 2px solid black;	border-radius: 0px;padding: 5px;font: 87 9pt 'Arial Black';color:black;"));
ui->p12_2->setStyleSheet(QString::fromUtf8("background-color: grey; border: 1px solid grey;border-radius: 0px;padding: 5px;font: 87 9pt 'Arial Black';color:white;"));
ui->p23_2->setStyleSheet(QString::fromUtf8("background-color: grey; border: 1px solid grey;border-radius: 0px;padding: 5px;font: 87 9pt 'Arial Black';color:white;"));
ui->p22_2->setStyleSheet(QString::fromUtf8("background-color: grey; border: 1px solid grey;border-radius: 0px;padding: 5px;font: 87 9pt 'Arial Black';color:white;"));
ui->p23->setStyleSheet(QString::fromUtf8("background-color: black;border: 5px solid  white;border-radius: 0px;padding: 5px;font: 87 9pt 'Arial Black';color:white;"));
ui->vt12->setStyleSheet(QString::fromUtf8("background-color: black;border: 5px solid  white;border-radius: 0px;padding: 5px;font: 87 9pt 'Arial Black';color:white;"));
ui->vt23->setStyleSheet(QString::fromUtf8("background-color: black;border: 5px solid  white;border-radius: 0px;padding: 5px;font: 87 9pt 'Arial Black';color:white;"));
ui->v12->setStyleSheet(QString::fromUtf8("background-color: black;border: 5px solid  white;border-radius: 0px;padding: 5px;font: 87 9pt 'Arial Black';color:white;"));
ui->v13->setStyleSheet(QString::fromUtf8("background-color: black;border: 5px solid  white;border-radius: 0px;padding: 5px;font: 87 9pt 'Arial Black';color:white;"));
ui->v23->setStyleSheet(QString::fromUtf8("background-color: black;border: 5px solid  white;border-radius: 0px;padding: 5px;font: 87 9pt 'Arial Black';color:white;"));
ui->p22->setStyleSheet(QString::fromUtf8("background-color: black;border: 5px solid  white;border-radius: 0px;padding: 5px;font: 87 9pt 'Arial Black';color:white;"));
ui->p12->setStyleSheet(QString::fromUtf8("background-color: black;border: 5px solid  white;border-radius: 0px;padding: 5px;font: 87 9pt 'Arial Black';color:white;"));
ui->pompe->setStyleSheet(QString::fromUtf8("background-color: black; border: 1px solid black;border-radius: 0px;padding: 5px;font: 87 9pt 'Arial Black';color:white;"));
ui->pompe1->setStyleSheet(QString::fromUtf8("background-color: black; border: 1px solid black;border-radius: 0px;padding: 5px;font: 87 9pt 'Arial Black';color:white;"));
ui->pompe2->setStyleSheet(QString::fromUtf8("background-color: black; border: 1px solid black;border-radius: 0px;padding: 5px;font: 87 9pt 'Arial Black';color:white;"));

}
//initialisation de l'utilisateur du simulateur
void MainWindow::initutilisateur()
{
    i=0;exo1=false;
    r=0; exo2=false;
    f=0;exo3=false;
    b=0;exo4=false;
    j=0;exo5=false;
    u=u+1; note=0;
}

//initialisation des données

void MainWindow::initialisation(tdb &t)
{
table=t;
table2=t;

}
//etat initial des vannes reliant les moteur au tank
void MainWindow::etatinit()
{
    ui->toy5->setStyleSheet(QString::fromUtf8("    background-color:rgb(121, 255, 204); border: 1px solid rgb(121, 255, 204);"));
    ui->toy3->setStyleSheet(QString::fromUtf8("    background-color:rgb(121, 255, 204); border: 1px solid rgb(121, 255, 204);"));
    ui->toy4->setStyleSheet(QString::fromUtf8("    background-color:rgb(121, 255, 204); border: 1px solid rgb(121, 255, 204);"));
    ui->a1->setStyleSheet(QString::fromUtf8("    background-color:rgb(121, 255, 204); border: 1px solid rgb(121, 255, 204);"));
    ui->a2->setStyleSheet(QString::fromUtf8("    background-color:rgb(121, 255, 204); border: 1px solid rgb(121, 255, 204);"));
    ui->a9->setStyleSheet(QString::fromUtf8("    background-color:rgb(121, 255, 204); border: 1px solid rgb(121, 255, 204);"));
    ui->a9_2->setStyleSheet(QString::fromUtf8("    background-color:rgb(121, 255, 204); border: 1px solid rgb(121, 255, 204);"));
    ui->a10->setStyleSheet(QString::fromUtf8("    background-color:rgb(121, 255, 204); border: 1px solid rgb(121, 255, 204);"));
    ui->a5->setStyleSheet(QString::fromUtf8("    background-color:rgb(121, 255, 204); border: 1px solid rgb(121, 255, 204);"));
    ui->a6->setStyleSheet(QString::fromUtf8("    background-color:rgb(121, 255, 204); border: 1px solid rgb(121, 255, 204);"));

    ui->a8->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 127); border: 1px solid rgb(255, 255, 127);"));
    ui->a3->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 127); border: 1px solid rgb(255, 255, 127);"));
    ui->a11->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 127); border: 1px solid rgb(255, 255, 127);"));

}

//fin exo 1

void MainWindow::exo1fin(int y)
{
    std::string const nomFichier("C:/MinGW/projet/historique.txt");
      std::ofstream monFlux(nomFichier.c_str(),  std::ios::out | std::ios::app );

      if(monFlux)
      {
          monFlux << "Utilisateur" << u << ":" << std::endl;
          monFlux << "Note exo 1:" ;



    exo1=false;
    ui->exo1->setText(QString::fromUtf8("Fini"));
    ui->exo1->setStyleSheet(QString::fromUtf8("background-color: blue;border: 5px solid  Yellow;border-radius: 0px;padding: 5px;font: 87 9pt 'Arial Black';color:white;"));
    if(y==3){ monFlux  << "1/4 point  /" ; note=note+1;}
    if(y==2){ monFlux  << "2/4 point  /" ; note=note+2;}
    if(y==1){ monFlux  << "3/4 point  /" ; note=note+3;}
    if(y==4){ monFlux  << "0/4 point  /" ; note=note+0;}
    if(y==0){ monFlux  << "4/4 point  /" ; note=note+4;}
    i=-1;}

}
//fin exo 2
void MainWindow::exo2fin(int y)
{
    std::string const nomFichier("C:/MinGW/projet/historique.txt");
      std::ofstream monFlux(nomFichier.c_str(),  std::ios::out | std::ios::app );

      if(monFlux)
      {
          monFlux << "Note exo 2:";



    exo2=false;
    ui->exo2->setText(QString::fromUtf8("Fini"));
    ui->exo2->setStyleSheet(QString::fromUtf8("background-color: blue;border: 5px solid  Yellow;border-radius: 0px;padding: 5px;font: 87 9pt 'Arial Black';color:white;"));
     if(y==3){ monFlux  << "1/4 point  /" ; note=note+1;}
     if(y==2){ monFlux  << "2/4 point  /" ; note=note+2;}
     if(y==1){ monFlux  << "3/4 point  /" ; note=note+3;}
     if(y==4){ monFlux  << "0/4 point  /" ; note=note+0;}
     if(y==0){ monFlux  << "4/4 point  /" ; note=note+4;}
    j=-1;}

}
//fin exo 3
void MainWindow::exo3fin(int y)
{
    std::string const nomFichier("C:/MinGW/projet/historique.txt");
      std::ofstream monFlux(nomFichier.c_str(),  std::ios::out | std::ios::app );

      if(monFlux)
      {
          monFlux << "Note exo 3:";



    exo3=false;
    ui->exo3->setText(QString::fromUtf8("Fini"));
    ui->exo3->setStyleSheet(QString::fromUtf8("background-color: blue;border: 5px solid  Yellow;border-radius: 0px;padding: 5px;font: 87 9pt 'Arial Black';color:white;"));
     if(y==3){ monFlux  << "1/4 point  /" ; note=note+1;}
     if(y==2){ monFlux  << "2/4 point  /" ; note=note+2;}
     if(y==1){ monFlux  << "3/4 point  /" ; note=note+3;}
     if(y==4){ monFlux  << "0/4 point  /" ; note=note+0;}
     if(y==0){ monFlux  << "4/4 point  /" ; note=note+4;}
    f=-1;}

}
//fin exo 5
void MainWindow::exo5fin(int y)
{
    std::string const nomFichier("C:/MinGW/projet/historique.txt");
      std::ofstream monFlux(nomFichier.c_str(),  std::ios::out | std::ios::app );

      if(monFlux)
      {
          monFlux << "Note exo 5:";



    exo5=false;
    ui->exo5->setText(QString::fromUtf8("Fini"));
    ui->exo5->setStyleSheet(QString::fromUtf8("background-color: blue;border: 5px solid  Yellow;border-radius: 0px;padding: 5px;font: 87 9pt 'Arial Black';color:white;"));
     if(y==3){ monFlux  << "1/4 point  /" ; note=note+1;}
     if(y==2){ monFlux  << "2/4 point  /" ; note=note+2;}
     if(y==1){ monFlux  << "3/4 point  /" ; note=note+3;}
     if(y==4){ monFlux  << "0/4 point  /" ; note=note+0;}
     if(y==0){ monFlux  << "4/4 point  /"  ; note=note+4;}
     monFlux  <<"Note total:" << note << "/20"<< std::endl;
    r=-1;}

}
//fin exo 4
void MainWindow::exo4fin(int y)
{
    std::string const nomFichier("C:/MinGW/projet/historique.txt");
      std::ofstream monFlux(nomFichier.c_str(),  std::ios::out | std::ios::app );

      if(monFlux)
      {
          monFlux << "Note exo 4:";



    exo4=false;
    ui->exo4->setText(QString::fromUtf8("Fini"));
    ui->exo4->setStyleSheet(QString::fromUtf8("background-color: blue;border: 5px solid  Yellow;border-radius: 0px;padding: 5px;font: 87 9pt 'Arial Black';color:white;"));
     if(y==0){ monFlux  << "4/4 point  /" ; note=note+4;}
     if(y==4){ monFlux  << "0/4 point  /" ; note=note+0;}
    b=-1;}

}


//clic sur vt12
void MainWindow::on_vt12_clicked()
{
    if(exo1==true)
    {
    exo1fin(i);
    }

    if(exo2==true)
    {
    exo2fin(j);
    }
    if(exo3==true)
    {if(f>=4 )
     {
         exo3fin(f);
     }else {f++;}
    }
    if(exo4==true)
    {
    exo4fin(4);
    }
    table.vt12.modif();
    if(table.vt12.gete()==0)
    {
        ui->toy1->setStyleSheet(QString::fromUtf8("background-color:rgb(0, 119, 255); border: 1px solid black;border-radius: 0px;padding: 5px;"));
        ui->vt12->setStyleSheet(QString::fromUtf8("background-color: rgba(53, 238, 6, 0.973); border: 5px solid  white;border-radius: 0px;padding: 5px;font: 87 9pt 'Arial Black';color:white;"));
        ui->vt12_2->setStyleSheet(QString::fromUtf8("  background-color:rgba(53, 238, 6, 0.973); border: 2px solid black;border-radius: 0px;padding: 5px;font: 87 9pt 'Arial Black';color:black;"));
        table.vt12.fermeture(table.t1,table.t2);
        if(table.t1.getcar()>0)
        {
                  ui->T1->setStyleSheet(QString::fromUtf8("background-color:  rgb(255, 85, 0); border: 1px solid black;border-radius: 0px;padding: 5px;font: 87 9pt 'Arial Black';color:black;"));
        }
        if(table.t2.getcar()>0)
        {
                  ui->T2->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 0); border: 1px solid black;border-radius: 0px;padding: 5px;font: 87 9pt 'Arial Black';color:black;"));
        }

    }else
    {
        ui->toy1->setStyleSheet(QString::fromUtf8("background-color:white; border: 1px solid black;border-radius: 0px;padding: 5px;"));
        ui->vt12_2->setStyleSheet(QString::fromUtf8("background-color:white; border: 2px solid black;border-radius: 0px;padding: 5px;font: 87 9pt 'Arial Black';color:black;"));
        ui->vt12->setStyleSheet(QString::fromUtf8("background-color: black;border: 5px solid  white;border-radius: 0px;padding: 5px;font: 87 9pt 'Arial Black';color:white;"));

    }
}

//clic sur p12
void MainWindow::on_p12_clicked()
{
    if(exo5==true)
    {if(r>=4 )
     {
         exo5fin(r);
     }else {r++;}
    }

    if(exo3==true)
    {
    exo3fin(f);
    }
    if(exo4==true)
    {
    exo4fin(4);
    }
    //table.t1.vidange();
    //ui->T1->setStyleSheet(QString::fromUtf8("background-color: white; border: 1px solid black;border-radius: 0px;padding: 5px;font: 87 9pt 'Arial Black';color:black;"));
    if(table.pa2.getetats()==0){
       if(exo1==true)
       {if(i==4 )
        {
            exo1fin(4);
        }else {i++;}
       }
       if(exo2==true)
       {if(j>=4 )
        {
            exo2fin(j);
        }else {j++;}
       }
    table.pa2.demarrage();
    ui->p12->setStyleSheet(QString::fromUtf8("background-color: rgba(53, 238, 6, 0.973); border: 5px solid  white;border-radius: 0px;padding: 5px;font: 87 9pt 'Arial Black';color:white;"));

  ui->p12_2->setStyleSheet(QString::fromUtf8("  background-color: black; border: 1px solid black;border-radius: 0px;padding: 5px;font: 87 9pt 'Arial Black';color:white;"));
    }
    else
    {
        table.pa2.arret();
        ui->p12->setStyleSheet(QString::fromUtf8("background-color: black;border: 5px solid  white;border-radius: 0px;padding: 5px;font: 87 9pt 'Arial Black';color:white;"));

        ui->p12_2->setStyleSheet(QString::fromUtf8("  background-color: grey; border: 1px solid grey;border-radius: 0px;padding: 5px;font: 87 9pt 'Arial Black';color:white;"));

    }

}

//clic sur p22
void MainWindow::on_p22_clicked()
{
    if(table.pb2.getetats()==0){
        if(exo1==true)
        {if(i==4 )
         {
             exo1fin(i);
         }else {i++;}
        }
        if(exo2==true)
        {if(j>=4 )
         {
             exo2fin(j);
         }else {j++;}
        }
        if(exo3==true)
        {if(f>=4 )
         {
             exo3fin(f);
         }else {f++;}
        }
        if(exo4==true)
        {
        b=2;
        }
        if(exo5==true)
        {
          exo5fin(r);
        }
    table.pb2.demarrage();
    ui->p22->setStyleSheet(QString::fromUtf8("background-color: rgba(53, 238, 6, 0.973); border: 5px solid  white;border-radius: 0px;padding: 5px;font: 87 9pt 'Arial Black';color:white;"));
     ui->p22_2->setStyleSheet(QString::fromUtf8("  background-color: black; border: 1px solid black;border-radius: 0px;padding: 5px;font: 87 9pt 'Arial Black';color:white;"));
    }
    else
    {
        if(exo4==true)
        {
        b=0;
        }
        table.pb2.arret();
        ui->p22->setStyleSheet(QString::fromUtf8("background-color: black;border: 5px solid  white;border-radius: 0px;padding: 5px;font: 87 9pt 'Arial Black';color:white;"));

        ui->p22_2->setStyleSheet(QString::fromUtf8("  background-color: grey; border: 1px solid grey;border-radius: 0px;padding: 5px;font: 87 9pt 'Arial Black';color:white;"));

    }

}

//clic sur p23

void MainWindow::on_p23_clicked()
{
    if(table.pc2.getetats()==0){

    table.pc2.demarrage();
    ui->p23->setStyleSheet(QString::fromUtf8("background-color: rgba(53, 238, 6, 0.973); border: 5px solid  white;border-radius: 0px;padding: 5px;font: 87 9pt 'Arial Black';color:white;"));

     ui->p23_2->setStyleSheet(QString::fromUtf8("  background-color: black; border: 1px solid black;border-radius: 0px;padding: 5px;font: 87 9pt 'Arial Black';color:white;"));
    if(exo1==true)
    {if(i==4 )
    {
       exo1fin(i);
    }else {i++;}
    }
    if(exo2==true)
    {if(j>=4 )
     {
         exo2fin(j);
     }else {j++;}
    }

    if(exo3==true)
    {if(f>=4 )
     {
         exo3fin(f);
     }else {f++;}
    }
    if(exo5==true)
    {if(r>=4 )
     {
         exo5fin(r);
     }else {r++;}
    }
    if(exo4==true)
    {
    b=3;
    }
    }
    else
    {
        table.pc2.arret();
        ui->p23->setStyleSheet(QString::fromUtf8("background-color: black;border: 5px solid  white;border-radius: 0px;padding: 5px;font: 87 9pt 'Arial Black';color:white;"));

        ui->p23_2->setStyleSheet(QString::fromUtf8("  background-color: grey; border: 1px solid grey;border-radius: 0px;padding: 5px;font: 87 9pt 'Arial Black';color:white;"));
        if(exo4==true)
        {
        b=0;
        }
    }
}

//clic sur vt23
void MainWindow::on_vt23_clicked()
{
    if(exo2==true)
    {
    exo2fin(j);
    }
    if(exo5==true)
    {if(r>=4 )
     {
         exo5fin(r);
     }else {r++;}
    }
    table.vt23.modif();
    if(table.vt23.gete()==0)
    {

        ui->toy2->setStyleSheet(QString::fromUtf8("background-color:rgb(0, 119, 255); border: 1px solid black;border-radius: 0px;padding: 5px;"));
        ui->vt23->setStyleSheet(QString::fromUtf8("background-color: rgba(53, 238, 6, 0.973); border: 5px solid  white;border-radius: 0px;padding: 5px;font: 87 9pt 'Arial Black';color:white;"));
        ui->vt23_2->setStyleSheet(QString::fromUtf8("  background-color:rgba(53, 238, 6, 0.973); border: 2px solid black;border-radius: 0px;padding: 5px;font: 87 9pt 'Arial Black';color:black;"));
        table.vt23.fermeture(table.t2,table.t3);
        if(table.t2.getcar()>0)
        {
                  ui->T2->setStyleSheet(QString::fromUtf8("background-color:rgb(85, 170, 0); border: 1px solid black;border-radius: 0px;padding: 5px;font: 87 9pt 'Arial Black';color:black;"));
        }
        if(table.t3.getcar()>0)
        {
                  ui->T3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 0); border: 1px solid black;border-radius: 0px;padding: 5px;font: 87 9pt 'Arial Black';color:black;"));
        }
        if(exo1==true)
        {
            if(i==4 )
         {
             exo1fin(i);
         }else {i++;}
        }
        if(exo3==true)
        {if(f>=4 )
         {
             exo3fin(f);
         }else {f++;}
        }
        if(exo4==true)
        {
        exo4fin(4);
        }
    }else
    {
        ui->toy2->setStyleSheet(QString::fromUtf8("background-color:white; border: 1px solid black;border-radius: 0px;padding: 5px;"));
        ui->vt23_2->setStyleSheet(QString::fromUtf8("background-color:white; border: 2px solid black;border-radius: 0px;padding: 5px;font: 87 9pt 'Arial Black';color:black;"));
        ui->vt23->setStyleSheet(QString::fromUtf8("background-color: black;border: 5px solid  white;border-radius: 0px;padding: 5px;font: 87 9pt 'Arial Black';color:white;"));

    }
}
//clic sur v12
void MainWindow::on_v12_clicked()
{
    etatinit();
    if(exo5==true)
    {if(r>=4 )
     {
         exo5fin(r);
     }else {r++;}
    }
    if(table.t1.pannetotalpompe()==true){
        table.v12.fermeture(table.m1,table.t1,table.t2);

    ui->toy3->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 127); border: 1px solid rgb(255, 255, 127);"));
    ui->a1->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 127); border: 1px solid rgb(255, 255, 127);"));
    ui->a8->setStyleSheet(QString::fromUtf8("    background-color:rgb(121, 255, 204); border: 1px solid rgb(121, 255, 204);"));
    ui->a9->setStyleSheet(QString::fromUtf8("    background-color:rgb(121, 255, 204); border: 1px solid rgb(121, 255, 204);"));
    ui->a10->setStyleSheet(QString::fromUtf8("    background-color:rgb(121, 255, 204); border: 1px solid rgb(121, 255, 204);"));
    ui->a2->setStyleSheet(QString::fromUtf8("    background-color:rgb(121, 255, 204); border: 1px solid rgb(121, 255, 204);"));
    ui->v12->setStyleSheet(QString::fromUtf8("background-color: rgba(53, 238, 6, 0.973); border: 5px solid  white;border-radius: 0px;padding: 5px;font: 87 9pt 'Arial Black';color:white;"));

    }
    if(table.t2.pannetotalpompe()==true){
        table.v12.fermeture(table.m2,table.t2,table.t1);

    ui->toy4->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 127); border: 1px solid rgb(255, 255, 127);"));
    ui->a9_2->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 127); border: 1px solid rgb(255, 255, 127);"));
    ui->a9->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 127); border: 1px solid rgb(255, 255, 127);"));
    ui->a8->setStyleSheet(QString::fromUtf8("    background-color:rgb(121, 255, 204); border: 1px solid rgb(121, 255, 204);"));
    ui->a1->setStyleSheet(QString::fromUtf8("    background-color:rgb(121, 255, 204); border: 1px solid rgb(121, 255, 204);"));
    ui->a10->setStyleSheet(QString::fromUtf8("    background-color:rgb(121, 255, 204); border: 1px solid rgb(121, 255, 204);"));
    ui->a2->setStyleSheet(QString::fromUtf8("    background-color:rgb(121, 255, 204); border: 1px solid rgb(121, 255, 204);"));
    ui->v12->setStyleSheet(QString::fromUtf8("background-color: rgba(53, 238, 6, 0.973); border: 5px solid  white;border-radius: 0px;padding: 5px;font: 87 9pt 'Arial Black';color:white;"));

    }
    if(exo1==true)
    {if(i>=4 )
     {
         exo1fin(i);
     }else {i++;}
    }
    if(exo2==true)
    {if(j>=4 )
     {
         exo2fin(j);
     }else {j++;}
    }
    if(exo3==true)
    {if(f>=4 )
     {
         exo3fin(f);
     }else {f++;}
    }
    if(exo4==true )
    {
    if(b==2){ exo4fin(0);}
   else exo4fin(4);
    }

}


//clic sur v13
void MainWindow::on_v13_clicked()
{
    etatinit();
    if(exo1==true)
    {if(i>=4 )
     {
         exo1fin(i);
     }else {i++;}
    }
    if(exo5==true)
    {if(r>=4 )
     {
         exo5fin(r);
     }else {r++;}
    }
    if(exo2==true)
    {if(j>=4 )
     {
         exo2fin(j);
     }else {j++;}
    }
    if(exo3==true)
    {if(f>=4 )
     {
         exo2fin(f);
     }else {f++;}
    }

    if(exo4==true )
    {
    if(b==3){ exo4fin(0);}
   else exo4fin(4);
    }
    if(table.t1.pannetotalpompe()==true){
        table.v13.fermeture(table.m1,table.t1,table.t3);
    ui->toy3->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 127); border: 1px solid rgb(255, 255, 127);"));
    ui->a3->setStyleSheet(QString::fromUtf8("    background-color:rgb(121, 255, 204); border: 1px solid rgb(121, 255, 204);"));
    ui->toy5->setStyleSheet(QString::fromUtf8("    background-color:rgb(121, 255, 204); border: 1px solid rgb(121, 255, 204);"));
    ui->a5->setStyleSheet(QString::fromUtf8("    background-color:rgb(121, 255, 204); border: 1px solid rgb(121, 255, 204);"));
    ui->a6->setStyleSheet(QString::fromUtf8("    background-color:rgb(121, 255, 204); border: 1px solid rgb(121, 255, 204);"));
    ui->v13->setStyleSheet(QString::fromUtf8("background-color: rgba(53, 238, 6, 0.973); border: 5px solid  white;border-radius: 0px;padding: 5px;font: 87 9pt 'Arial Black';color:white;"));

    }
    if(table.t3.pannetotalpompe()==true){
        table.v13.fermeture(table.m3,table.t3,table.t1);

    ui->v13_2->setStyleSheet(QString::fromUtf8("background-color:blue; border: 1px solid blue;border-radius: 0px;padding: 5px;font: 87 9pt 'Arial Black';color:black;"));

    ui->toy5->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 127); border: 1px solid rgb(255, 255, 127);"));
    ui->a3->setStyleSheet(QString::fromUtf8("    background-color:rgb(121, 255, 204); border: 1px solid rgb(121, 255, 204);"));
    ui->toy3->setStyleSheet(QString::fromUtf8("    background-color:rgb(121, 255, 204); border: 1px solid rgb(121, 255, 204);"));
    ui->a5->setStyleSheet(QString::fromUtf8("    background-color:rgb(121, 255, 204); border: 1px solid rgb(121, 255, 204);"));
    ui->a6->setStyleSheet(QString::fromUtf8("    background-color:rgb(121, 255, 204); border: 1px solid rgb(121, 255, 204);"));
    ui->v13->setStyleSheet(QString::fromUtf8("background-color: rgba(53, 238, 6, 0.973); border: 5px solid  white;border-radius: 0px;padding: 5px;font: 87 9pt 'Arial Black';color:white;"));

    }


}
//clic sur v23
void MainWindow::on_v23_clicked()
{
    etatinit();
    if(exo1==true)
    {if(i>=4 )
     {
         exo1fin(i);
     }else {i++;}
    }
    if(exo2==true)
    {if(j>=4 )
     {
         exo2fin(j);
     }else {j++;}
    }
    if(exo5==true)
    {if(r>=4 )
     {
         exo5fin(r);
     }else {r++;}
    }
    if(exo3==true)
    {if(f>=4 )
     {
         exo3fin(f);
     }else {f++;}
    }
    if(exo4==true)
    {
    exo1fin(4);
    }

    if(table.t3.pannetotalpompe()==true){
        table.v23.fermeture(table.m3,table.t3,table.t2);

     ui->toy5->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 127); border: 1px solid rgb(255, 255, 127);"));
     ui->a5->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 127); border: 1px solid rgb(255, 255, 127);"));
     ui->a9->setStyleSheet(QString::fromUtf8("    background-color:rgb(121, 255, 204); border: 1px solid rgb(121, 255, 204);"));
     ui->toy4->setStyleSheet(QString::fromUtf8("    background-color:rgb(121, 255, 204); border: 1px solid rgb(121, 255, 204);"));
     ui->a10->setStyleSheet(QString::fromUtf8("    background-color:rgb(121, 255, 204); border: 1px solid rgb(121, 255, 204);"));
     ui->a6->setStyleSheet(QString::fromUtf8("    background-color:rgb(121, 255, 204); border: 1px solid rgb(121, 255, 204);"));
     ui->a11->setStyleSheet(QString::fromUtf8("    background-color:rgb(121, 255, 204); border: 1px solid rgb(121, 255, 204);"));
     ui->v23->setStyleSheet(QString::fromUtf8("background-color: rgba(53, 238, 6, 0.973); border: 5px solid  white;border-radius: 0px;padding: 5px;font: 87 9pt 'Arial Black';color:white;"));
    }
    if(table.t2.pannetotalpompe()==true){
        table.v23.fermeture(table.m2,table.t2,table.t3);

     ui->toy4->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 127); border: 1px solid rgb(255, 255, 127);"));
     ui->a9->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 127); border: 1px solid rgb(255, 255, 127);"));
     ui->a5->setStyleSheet(QString::fromUtf8("    background-color:rgb(121, 255, 204); border: 1px solid rgb(121, 255, 204);"));
     ui->toy5->setStyleSheet(QString::fromUtf8("    background-color:rgb(121, 255, 204); border: 1px solid rgb(121, 255, 204);"));
     ui->a10->setStyleSheet(QString::fromUtf8("    background-color:rgb(121, 255, 204); border: 1px solid rgb(121, 255, 204);"));
     ui->a6->setStyleSheet(QString::fromUtf8("    background-color:rgb(121, 255, 204); border: 1px solid rgb(121, 255, 204);"));
     ui->a11->setStyleSheet(QString::fromUtf8("    background-color:rgb(121, 255, 204); border: 1px solid rgb(121, 255, 204);"));
     ui->v23->setStyleSheet(QString::fromUtf8("background-color: rgba(53, 238, 6, 0.973); border: 5px solid  white;border-radius: 0px;padding: 5px;font: 87 9pt 'Arial Black';color:white;"));

    }
}





//clic sur exo1
void MainWindow::on_exo1_clicked()
{

    if(i==-1)
    {
    }
    else
    {
        inittotal();

    exo1=true;
    table.t1.vidange();
    ui->exo1->setStyleSheet(QString::fromUtf8("background-color:red;    border: 5px solid  Yellow;border-radius: 0px;padding: 5px;font: 87 9pt 'Arial Black';color:white;"));
    ui->T1->setStyleSheet(QString::fromUtf8("background-color: white; border: 1px solid black;border-radius: 0px;padding: 5px;font: 87 9pt 'Arial Black';color:black;"));
    }
}
//clic sur exo2
void MainWindow::on_exo2_clicked()
{
    if(i==-1)
    {
    if(j==-1)
    {
    }
    else
    {
    inittotal();
    exo2=true;
    table.t2.vidange();
    ui->exo2->setStyleSheet(QString::fromUtf8("background-color:red;    border: 5px solid  Yellow;border-radius: 0px;padding: 5px;font: 87 9pt 'Arial Black';color:white;"));
    ui->T2->setStyleSheet(QString::fromUtf8("background-color: white; border: 1px solid black;border-radius: 0px;padding: 5px;font: 87 9pt 'Arial Black';color:black;"));
    }
    }
}
//clic sur exo3
void MainWindow::on_exo3_clicked()
{
    if(i==-1 && j==-1)
    {
    if(f==-1)
    {
    }
    else
    {
    inittotal();
    exo3=true;
    table.t1.pannea();
    ui->exo3->setStyleSheet(QString::fromUtf8("background-color:red;    border: 5px solid  Yellow;border-radius: 0px;padding: 5px;font: 87 9pt 'Arial Black';color:white;"));
    ui->pompe->setStyleSheet(QString::fromUtf8("background-color: red; border: 1px solid red;border-radius: 0px;padding: 5px;font: 87 9pt 'Arial Black';color:white;"));
    }
    }
}

//clic sur exo4
void MainWindow::on_exo4_clicked()
{

    if(i==-1 && j==-1 && f==-1)
    {
    if(b==-1)
    {
    }
    else
    {
    inittotal();
    exo4=true;
    table.t1.pannea();
    table.t1.panneb();
    ui->exo4->setStyleSheet(QString::fromUtf8("background-color:red;    border: 5px solid  Yellow;border-radius: 0px;padding: 5px;font: 87 9pt 'Arial Black';color:white;"));
    ui->pompe->setStyleSheet(QString::fromUtf8("background-color: red; border: 1px solid red;border-radius: 0px;padding: 5px;font: 87 9pt 'Arial Black';color:white;"));
    ui->p12_2->setStyleSheet(QString::fromUtf8("background-color: red; border: 1px solid red;border-radius: 0px;padding: 5px;font: 87 9pt 'Arial Black';color:white;"));

    }
    }
}
//clic sur exo5
void MainWindow::on_exo5_clicked()
{
    if(i==-1 && b==-1 && j==-1 && f==-1)
    {
    if(r==-1)
    {
    }
    else
    {
    inittotal();
    exo5=true;
    table.t2.pannea();
    ui->exo5->setStyleSheet(QString::fromUtf8("background-color:red;    border: 5px solid  Yellow;border-radius: 0px;padding: 5px;font: 87 9pt 'Arial Black';color:white;"));
    ui->pompe1->setStyleSheet(QString::fromUtf8("background-color: red; border: 1px solid red;border-radius: 0px;padding: 5px;font: 87 9pt 'Arial Black';color:white;"));
    }
    }
}
//clic sur historique
void MainWindow::on_historique_clicked()
{


    MainWindow1 *w=new MainWindow1;
    w->affiche();
    w->show();


}
//clic sur suivant
void MainWindow::on_suivant_clicked()
{
    inittotal();

    initutilisateur();
    ui->exo1->setText(QString::fromUtf8("Exo 1"));
    ui->exo1->setStyleSheet(QString::fromUtf8("   border: 5px solid  Yellow;border-radius: 0px;padding: 5px;font: 87 9pt 'Arial Black';color:white;"));
    ui->exo2->setText(QString::fromUtf8("Exo 2"));
    ui->exo2->setStyleSheet(QString::fromUtf8("   border: 5px solid  Yellow;border-radius: 0px;padding: 5px;font: 87 9pt 'Arial Black';color:white;"));
    ui->exo3->setText(QString::fromUtf8("Exo 3"));
    ui->exo3->setStyleSheet(QString::fromUtf8("   border: 5px solid  Yellow;border-radius: 0px;padding: 5px;font: 87 9pt 'Arial Black';color:white;"));
    ui->exo4->setText(QString::fromUtf8("Exo 4"));
    ui->exo4->setStyleSheet(QString::fromUtf8("   border: 5px solid  Yellow;border-radius: 0px;padding: 5px;font: 87 9pt 'Arial Black';color:white;"));
    ui->exo5->setText(QString::fromUtf8("Exo 5"));
    ui->exo5->setStyleSheet(QString::fromUtf8("   border: 5px solid  Yellow;border-radius: 0px;padding: 5px;font: 87 9pt 'Arial Black';color:white;"));

}
