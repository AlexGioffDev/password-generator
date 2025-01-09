#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QString>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::PasswordGenerator)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_GenerateButton_clicked()
{
    QString characters = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!()#@";
    QString password = "";
    for(int i = 0; i < 30; i++){
        int index = rand() % characters.size();
        password += characters[index];
    }
    ui->lineEdit->setText(QString(password));
}

