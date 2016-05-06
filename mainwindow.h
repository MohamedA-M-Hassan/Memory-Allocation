#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();


private:
    Ui::MainWindow *ui;
QVector <QPair < double,double > > hole;

private slots:
    void on_insertButton_clicked();

    void on_radioButton_clicked();

    void on_bestFit_clicked();

    void on_firstFit_clicked();

    void on_processInsertButton_clicked();

};

#endif // MAINWINDOW_H
