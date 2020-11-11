#ifndef DIALOGA_AJOUT_SALLE_H
#define DIALOGA_AJOUT_SALLE_H

#include <QDialog>

namespace Ui {
class Dialoga_ajout_salle;
}

class Dialoga_ajout_salle : public QDialog
{
    Q_OBJECT

public:
    explicit Dialoga_ajout_salle(QWidget *parent = nullptr);
    ~Dialoga_ajout_salle();

private slots:
    void on_pushButton_2_clicked();

    void on_return_from_ajout_clicked();

    void on_pushButton_clicked();

private:
    Ui::Dialoga_ajout_salle *ui;
};

#endif // DIALOGA_AJOUT_SALLE_H
