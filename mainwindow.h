#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "ui_ajouter.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_pushButton_2_pressed();

    void on_pushButton_2_released();

    void on_pushButton_3_pressed();

    void on_pushButton_3_released();

    void on_radioMale_clicked();

    void on_radioFemelle_clicked();

    void on_pushButton_12_pressed();

    void on_pushButton_12_released();

    void on_pushButton_10_pressed();

    void on_pushButton_10_released();

    void on_pushButton_14_pressed();

    bool on_pushButton_14_released();

    void on_pushButton_13_pressed();

    void on_pushButton_13_released();

    void on_pushButton_15_pressed();

    void on_pushButton_15_released();

    void on_pushButton_16_pressed();

    void on_pushButton_16_released();

private:
    Ui::MainWindow *ui; 

    
};

#endif // MAINWINDOW_H
