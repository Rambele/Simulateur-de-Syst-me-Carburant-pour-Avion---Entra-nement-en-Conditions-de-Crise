#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <cstring>
#include "tdb.h"
#include <iostream>
#include <fstream>
#include <string>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }

QT_END_NAMESPACE

class MainWindow : public QMainWindow
{ /*tank*/



    /*fin*/
    Q_OBJECT
public:


    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void initialisation(tdb &t);
    tdb table;
    tdb table2;
    void inittotal();
    void initutilisateur();
    void etatinit();
    void exo1fin(int y);
    void exo2fin(int y);
    void exo3fin(int y);
    void exo4fin(int y);
    void exo5fin(int y);

private slots:
    void on_vt12_clicked();

    void on_p12_clicked();

    void on_p22_clicked();

    void on_p23_clicked();

    void on_vt23_clicked();

    void on_v12_clicked();

    void on_v13_clicked();

    void on_v23_clicked();





    void on_exo1_clicked();


    void on_exo2_clicked();

    void on_exo3_clicked();

    void on_exo4_clicked();

    void on_exo5_clicked();

    void on_historique_clicked();

    void on_suivant_clicked();

private:
    Ui::MainWindow *ui;

};

#endif // MAINWINDOW_H
