#ifndef DIALOG_SALLE_H
#define DIALOG_SALLE_H

#include <QDialog>
#include <QStackedWidget>
namespace Ui {
class Dialog_salle;
}

class Dialog_salle : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_salle(QWidget *parent = nullptr);
    ~Dialog_salle();

private slots:
    void on_modifier_3_clicked();

    void on_modifier_clicked();

    void on_delete_2_clicked();

    void on_close_clicked();

    void on_quitter_supp_4_clicked();

    void on_quitter_modif_4_clicked();

    void on_quitter_supp_5_clicked();

    void on_quitter_supp_6_clicked();

    void on_quitter_modif_3_clicked();

    void on_modifier_4_clicked();

    void on_quitter_supp_3_clicked();

    void on_supprime_2_clicked();

    void on_trier_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_9_clicked();

    void on_rechercher_clicked();

private:
    Ui::Dialog_salle *ui;
};

#endif // DIALOG_SALLE_H
