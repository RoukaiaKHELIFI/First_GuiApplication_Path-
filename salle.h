#ifndef SALLE_H
#define SALLE_H
#include <QString>

class Salle
{
private :


QString num_salle,nb_chaise,nb_chaise_dispo,nom_film;

    Salle();

public :

void setnum_Salle(QString n);
void setnb_chaise(QString n);
void setnb_chaise_dispo(QString n);
void setnom_film(QString n);
QString get_num_salle();
QString get_nb_chaise();
QString get_nb_chaise_dispo();
QString get_nom_film();

};

#endif // SALLE_H
