#include "dialog_ajout.h"
#include "ui_dialog_ajout.h"
#include <QString>
#include<QMessageBox>
Dialog_ajout::Dialog_ajout(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_ajout)
{
    ui->setupUi(this);
    ui->id_client_ajout->setValidator(new QIntValidator(0,999999,this));
    ui->id_reservation_ajout->setValidator(new QIntValidator(0,99999,this));
    ui->nb_personne_ajout->setValidator(new QIntValidator(0,99,this));
    setWindowIcon(QIcon(":/photos/pathé.png"));
}

Dialog_ajout::~Dialog_ajout()
{
    delete ui;
}

void Dialog_ajout::on_pushButton_2_clicked()
{
    close();
}

void Dialog_ajout::on_pushButton_clicked()
{

    QString id =ui->id_client_ajout->text();
    QString id_res = ui->id_reservation_ajout->text();

            QString personne=ui->nb_personne_ajout->text();
            if(id==""||id_res==""||personne==""){
                   QMessageBox::warning(this,"ERROR","Veuillez remplir le champ requis");
            }
            else
                QMessageBox::warning(this,"Reservation Ajouter","A QR Code Has been Sent to the Client's Email !");

}

void Dialog_ajout::on_return_from_ajout_clicked()
{
QString vide="";
ui->id_client_ajout->setText(vide);
ui->id_reservation_ajout->setText(vide);
ui->nb_personne_ajout->setText(vide);
}
