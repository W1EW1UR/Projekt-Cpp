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
    QPixmap pix("Logo.png");
    ui->Zdjecie->setPixmap(pix.scaled(200,250,Qt::KeepAspectRatio));



    //========================================================
    //SQLITE =================================================
    QSqlDatabase baza = QSqlDatabase::addDatabase("QSQLITE");
    baza.setDatabaseName("C:\\Programing_Stuff\\SqLite_3\\szpital.db");
    if(baza.open())
        ui->label->setText("[+] POŁĄCZONO ");
    else
        ui->label->setText("[-] NIE POŁĄCZONO Z BAZĄ DANYCH");
    //========================================================


    //========================================================
    //WYŚWIETLANIE BAZY W LIŚCIE ============================
    QSqlQuery qry;
    QString imie,nazwisko;
    if(qry.exec("select * from rejestr "))
    {
        while(qry.next())
        {
            imie = qry.value("imie").toString();
            nazwisko = qry.value("nazwisko").toString();
            ui->listWidget->addItem(imie+" "+nazwisko);
        }
    }
    //========================================================

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

