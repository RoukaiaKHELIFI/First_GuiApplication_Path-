#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include "salle.h"
#include <QtGui>
#include <QStackedWidget>
namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();
    void get_ui();

private slots:
    void on_modifier_clicked();

    void on_close_clicked();

    void on_delete_2_clicked();

    void on_quitter_modif_clicked();

    void on_quitter_supp_clicked();

    void on_modifier_2_clicked();

    void on_quitter_supp_2_clicked();

    void on_quitter_modif_2_clicked();

    void on_quitter_modif_3_clicked();

    void on_quitter_supp_5_clicked();

    void on_quitter_supp_6_clicked();

    void on_supprime_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_10_clicked();

    void on_rechercher_clicked();

    void on_trier_clicked();



private:
    Ui::Dialog *ui;


};

#endif // DIALOG_H
