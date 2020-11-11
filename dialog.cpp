#include "dialog.h"
#include "ui_dialog.h"
#include <QString>
#include<QMessageBox>
Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
     ui->stackedWidget->setCurrentIndex(0);
     ui->id_client->setValidator(new QIntValidator(0,999999,this));
     ui->id_reservation->setValidator(new QIntValidator(0,99999,this));
     ui->nb_personne->setValidator(new QIntValidator(0,99,this));
     ui->id_client_supprime->setValidator(new QIntValidator(0,999999,this));
     ui->num_reservation_supprime->setValidator(new QIntValidator(0,99999,this));
     ui->recherche->setValidator(new QIntValidator(0,99999,this));
setWindowIcon(QIcon(":/photos/pathé.png"));
}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_modifier_clicked()
{
  ui->stackedWidget->setCurrentIndex(3);

}

void Dialog::on_close_clicked()
{
    close();
}

void Dialog::on_delete_2_clicked()
{
      ui->stackedWidget->setCurrentIndex(2);
}

void Dialog::on_quitter_modif_clicked()
{
    close();
}

void Dialog::on_quitter_supp_clicked()
{
    close();
}

void Dialog::on_modifier_2_clicked()
{


     QString id =ui->id_client->text();
     QString id_res = ui->id_reservation->text();

             QString personne=ui->nb_personne->text();
             if(id==""||id_res==""||personne==""){
                    QMessageBox::warning(this,"ERROR","Veuillez remplir le champ requis");
             }
else {  ui->stackedWidget->setCurrentIndex(4);}


}

void Dialog::on_quitter_supp_2_clicked()
{
    QString vide="";
    ui->num_reservation_supprime->setText(vide);
    ui->id_client_supprime->setText(vide);

}

void Dialog::on_quitter_modif_2_clicked()
{
    QString vide="";
    ui->id_client->setText(vide);
    ui->id_reservation->setText(vide);
    ui->nb_personne->setText(vide);
}

void Dialog::on_quitter_modif_3_clicked()
{
     ui->stackedWidget->setCurrentIndex(0);
}

void Dialog::on_quitter_supp_5_clicked()
{
     ui->stackedWidget->setCurrentIndex(0);
}

void Dialog::on_quitter_supp_6_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void Dialog::on_supprime_clicked()
{
    QString personne=ui->num_reservation_supprime->text();
     QString personne2=ui->id_client_supprime->text();
    if(personne==""&&personne2==""){
           QMessageBox::warning(this,"ERROR","Veuillez remplir le champ requis");
    }
}

void Dialog::on_pushButton_9_clicked()
{
      QMessageBox::warning(this,"ERROR","This function is still not available");
}

void Dialog::on_pushButton_10_clicked()
{
    close();
}

void Dialog::on_rechercher_clicked()
{
     ui->stackedWidget->setCurrentIndex(4);
}

void Dialog::on_trier_clicked()
{
     QMessageBox::warning(this,"ERROR","This Function is Still not Available");
}

