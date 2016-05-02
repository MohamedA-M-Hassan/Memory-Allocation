#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_insertButton_clicked()
{
    int x= ui->insert->text().toInt();
    int y= ui->insert2->text().toInt();
    hole.push_back(qMakePair(x,y));
}


void MainWindow::on_bestFit_clicked()
{

}

void MainWindow::on_firstFit_clicked()
{

}

void MainWindow::on_processInsertButton_clicked()
{
    int x = ui->insert_2->text().toInt();
    //processSize.push_back(x);
}
