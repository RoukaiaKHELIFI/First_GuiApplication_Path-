#include "dialog_salle.h"
#include "ui_dialog_salle.h"
#include <QMessageBox>
#include <QString>
Dialog_salle::Dialog_salle(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_salle)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);
     ui->nm_salle->setValidator(new QIntValidator(0,999,this));
      ui->nb_baffles->setValidator(new QIntValidator(0,999,this));
       ui->nb_ecrans->setValidator(new QIntValidator(0,999,this));

         ui->nm_salle_supp->setValidator(new QIntValidator(0,999,this));
         ui->salle_recherche->setValidator(new QIntValidator(0,999,this));
         setWindowIcon(QIcon(":/photos/pathé.png"));
}

Dialog_salle::~Dialog_salle()
{
    delete ui;
}

void Dialog_salle::on_modifier_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void Dialog_salle::on_modifier_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void Dialog_salle::on_delete_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void Dialog_salle::on_close_clicked()
{
    close();
}

void Dialog_salle::on_quitter_supp_4_clicked()
{
    close();
}

void Dialog_salle::on_quitter_modif_4_clicked()
{
    close();
}

void Dialog_salle::on_quitter_supp_5_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void Dialog_salle::on_quitter_supp_6_clicked()
{
     ui->stackedWidget->setCurrentIndex(0);
}

void Dialog_salle::on_quitter_modif_3_clicked()
{
    QString vide="";
    ui->nm_salle->setText(vide);
    ui->nb_baffles->setText(vide);
    ui->nb_ecrans->setText(vide);

}

void Dialog_salle::on_modifier_4_clicked()
{
    QString id =ui->nm_salle->text();
    QString id_res = ui->nb_ecrans->text();

            QString personne=ui->nb_baffles->text();
            if(id==""||id_res==""||personne==""){
                   QMessageBox::warning(this,"ERROR","Veuillez remplir le champ requis");
            }
}

void Dialog_salle::on_quitter_supp_3_clicked()
{
    QString vide="";
    ui->nm_salle_supp->setText(vide);
}

void Dialog_salle::on_supprime_2_clicked()
{
    QString personne=ui->nm_salle_supp->text();
    if(personne==""){
           QMessageBox::warning(this,"ERROR","Veuillez remplir le champ requis");
    }
}

void Dialog_salle::on_trier_clicked()
{
    QMessageBox::warning(this,"ERROR","This function is still not available ");
}

void Dialog_salle::on_pushButton_10_clicked()
{
    close();
}

void Dialog_salle::on_pushButton_9_clicked()
{
    QMessageBox::warning(this,"ERROR","This function is still not available ");
}

void Dialog_salle::on_rechercher_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}
