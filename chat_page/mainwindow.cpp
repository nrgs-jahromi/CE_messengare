#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}





void MainWindow::on_send_clicked()
{

}


void MainWindow::on_attach_clicked()
{

}


void MainWindow::on_newchat_clicked()
{

}


void MainWindow::on_pushButton_6_clicked()
{

}


void MainWindow::on_addcontact_clicked()
{

}

