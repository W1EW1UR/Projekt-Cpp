#include "mainwindow.h"
#include "okno2.h"
#include <QPixmap>
#include <QTimer>
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // Zmienia się
   // QPixmap pix("Logo.png");
   // ui->Zdjecie->setPixmap(pix.scaled(200,250,Qt::KeepAspectRatio));



    //========================================================
    //SQLITE =================================================
    QSqlDatabase baza = QSqlDatabase::addDatabase("QSQLITE");
    baza.setDatabaseName("C:\\Users\\kapim\\Desktop\\procpp\\Projekt\\szpital.db");
    if(baza.open())
        ui->label->setText("[+] POŁĄCZONO ");
    else
        ui->label->setText("[-] NIE POŁĄCZONO Z BAZĄ DANYCH");
    //========================================================

    // Odświeżanie listy co 5 sekund
    QTimer *timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &MainWindow::loadDataIntoListWidget);
    timer->start(5000);  // 5000 ms = 5 sekund

    // Pierwsze załadowanie danych
    loadDataIntoListWidget();
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

void MainWindow::loadDataIntoListWidget()
{
    ui->listWidget->clear();  // Wyczyść listę przed ponownym dodaniem elementów

    QSqlQuery qry;
    if(qry.exec("SELECT imie, nazwisko FROM rejestr")) {
        while(qry.next()) {
            QString imie = qry.value("imie").toString();
            QString nazwisko = qry.value("nazwisko").toString();
            ui->listWidget->addItem(imie + " " + nazwisko);  // Dodaj do listy
        }
    }
}

