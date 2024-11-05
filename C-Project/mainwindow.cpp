#include "mainwindow.h"
#include "okno2.h"
#include <QPixmap>

#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // Zmienia się
    QPixmap pix("C:\\Users\\kapim\\Desktop\\procpp\\C-Project\\Obraz.jfif");
    ui->Zdjecie->setPixmap(pix.scaled(200,250,Qt::KeepAspectRatio));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_3_clicked()
{
    Okno2 Okno2;
    Okno2.setModal(true);
    Okno2.exec();
}

