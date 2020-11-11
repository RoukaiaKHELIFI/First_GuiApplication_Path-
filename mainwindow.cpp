#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>
#include "dialog.h"
#include "salle.h"

#include "dialog_ajout.h"
#include "dialog_salle.h"
#include "dialoga_ajout_salle.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);
  /*  QPixmap pixel ("C:/Users/khelifi/Desktop/ROU/qtprojects/Gestion_Salle_Roukaia_Khelifi/logo");
    ui->label->setPixmap(pixel.scaled(200,50,Qt::KeepAspectRatio));

    QPixmap pixel1 ("C:/Users/khelifi/Desktop/ROU/qtprojects/Gestion_Salle_Roukaia_Khelifi/pathé");
    ui->label_2->setPixmap(pixel1.scaled(200,100,Qt::KeepAspectRatio));
    */

setWindowIcon(QIcon(":/photos/pathé.png"));
    QPixmap pixel (":/photos/logo.png");
       ui->label->setPixmap(pixel.scaled(200,50,Qt::KeepAspectRatio));

       QPixmap pixel1 (":/photos/pathé.png");
       ui->label_2->setPixmap(pixel1.scaled(200,100,Qt::KeepAspectRatio));



    //animation pour logo pathé
    int w=ui->label_2->width();
    int h=ui->label_2->height();

    animation = new QPropertyAnimation(ui->label_2,"geometry");
    animation->setDuration(1999);
    animation->setStartValue(ui->label_2->geometry());

    animation->setEndValue(QRect(487,190,w,h));


animation->setLoopCount(-1);
    animation->start();
//animation pour expert_code
int w1=ui->label->width();
int h1=ui->label->height();

animation1 = new QPropertyAnimation(ui->label,"geometry");
animation1->setDuration(1999);
animation1->setStartValue(ui->label->geometry());
animation1->setEndValue(QRect(494,0,w1,h1));

animation1->setLoopCount(-1);
animation1->start();

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_affiche_reservation_clicked()
{

    Dialog d;
    d.exec();
   QMediaPlayer *player = new QMediaPlayer;
    player ->setMedia(QUrl(":/song/mouse.mp3"));

      player->play();


}

void MainWindow::on_quit_clicked()
{
    close();
}



void MainWindow::on_ajout_reservation_clicked()
{
    Dialog_ajout da;
    da.exec();
}



void MainWindow::on_afficher_salle_clicked()
{
    Dialog_salle d2;
    d2.exec();

}

void MainWindow::on_ajout_salle_clicked()
{
    Dialoga_ajout_salle daj;
    daj.exec();
}
