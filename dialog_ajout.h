#ifndef DIALOG_AJOUT_H
#define DIALOG_AJOUT_H

#include <QDialog>

namespace Ui {
class Dialog_ajout;
}

class Dialog_ajout : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_ajout(QWidget *parent = nullptr);
    ~Dialog_ajout();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_return_from_ajout_clicked();

private:
    Ui::Dialog_ajout *ui;
};

#endif // DIALOG_AJOUT_H
