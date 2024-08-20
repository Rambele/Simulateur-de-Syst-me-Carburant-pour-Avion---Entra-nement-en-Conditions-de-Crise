#ifndef MAINWINDOW1_H
#define MAINWINDOW1_H

#include <QMainWindow>
#include <QPushButton>
#include <QTextEdit>


namespace Ui {
class MainWindow1;
class MainWindow;

}

class MainWindow1 : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow1(QWidget *parent = nullptr);
    ~MainWindow1();
    void affiche();

private slots:




private:
    Ui::MainWindow1 *uii;
    QTextEdit *zoneTexte;
};

#endif // MAINWINDOW1_H
