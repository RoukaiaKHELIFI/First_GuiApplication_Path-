#include "dialoga_ajout_salle.h"
#include "ui_dialoga_ajout_salle.h"
#include <QMessageBox>
Dialoga_ajout_salle::Dialoga_ajout_salle(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialoga_ajout_salle)
{
    ui->setupUi(this);
  ui->nm_salle_ajout->setValidator(new QIntValidator(0,999,this));
    ui->nb_chaise_ajout->setValidator(new QIntValidator(0,999,this));
      ui->nb_baffles_ajout->setValidator(new QIntValidator(0,999,this));
      setWindowIcon(QIcon(":/photos/pathé.png"));
}

Dialoga_ajout_salle::~Dialoga_ajout_salle()
{
    delete ui;
}

void Dialoga_ajout_salle::on_pushButton_2_clicked()
{
    close();
}

void Dialoga_ajout_salle::on_return_from_ajout_clicked()
{
    QString vide="";
    ui->nm_salle_ajout->setText(vide);
    ui->nb_chaise_ajout->setText(vide);
    ui->nb_baffles_ajout->setText(vide);

}

void Dialoga_ajout_salle::on_pushButton_clicked()
{
    QString id =ui->nm_salle_ajout->text();
    QString id_res = ui->nb_chaise_ajout->text();

            QString personne=ui->nb_baffles_ajout->text();
            if(id==""||id_res==""||personne==""){
                   QMessageBox::warning(this,"ERROR","Veuillez remplir le champ requis");
            }
}
