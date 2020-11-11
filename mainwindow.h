#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSound>
#include <QtMultimedia/QMediaPlayer>
#include<QPropertyAnimation>
#include <QMediaPlaylist>
#include <QIcon>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_affiche_reservation_clicked();

    void on_quit_clicked();

    void on_ajout_reservation_clicked();



    void on_afficher_salle_clicked();

    void on_ajout_salle_clicked();

private:
    Ui::MainWindow *ui;
QPropertyAnimation *animation;
QPropertyAnimation *animation1;
};

#endif // MAINWINDOW_H

