#include "mainwindow_podglad.h"
#include "logowanie.h"
#include <QPixmap>
#include <QTimer>
#include <QDir>
#include <QCoreApplication>
#include "ui_mainwindow_podglad.h"

MainWindow_podglad::MainWindow_podglad(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow_podglad)
{
    ui->setupUi(this);

    // Ustawianie głównej ścieżki
    QString path = QDir::currentPath();
    QDir dir(path);
    while (!dir.isRoot()) { // Dopóki nie dotrzesz do katalogu głównego
        if (dir.dirName() == "Projekt") { // Sprawdź, czy aktualny katalog to "Projekt"
            pro_path = dir.path();
            qDebug() <<"Ścieżka projektu: "<<pro_path;
            break;
        }
        dir.cdUp(); // Przejdź do katalogu nadrzędnego
    }


    // C:\Users\kapim\Desktop\procpp\Projekt\szpital.db
    //========================================================
    //SQLITE =================================================
    QSqlDatabase baza = QSqlDatabase::addDatabase("QSQLITE");
    QDir DBfile_path =pro_path.absoluteFilePath("szpital.db");
    qDebug() << "2  " <<DBfile_path;

    baza.setDatabaseName(DBfile_path.absolutePath());
    if(baza.open())
        ui->label->setText("[+] POŁĄCZONO Z BAZĄ DANYCH ");
    else
        ui->label->setText("[-] NIE POŁĄCZONO Z BAZĄ DANYCH");
    //========================================================

    // Odświeżanie listy co 5 sekund
    QTimer *timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &MainWindow_podglad::loadDataIntoListWidget);
    timer->start(5000);  // 5000 ms = 5 sekund

    // Pierwsze załadowanie danych
    loadDataIntoListWidget();
}

MainWindow_podglad::~MainWindow_podglad()
{
    delete ui;
}


void MainWindow_podglad::loadDataIntoListWidget()
{
    ui->listWidget->clear();  // Wyczyść listę przed ponownym dodaniem elementów

    QSqlQuery qry;
    if(qry.exec("SELECT * FROM rejestr")) {
        while(qry.next()) {
            QString imie,nazwisko,pokoj,pesel;
            imie = qry.value("imie").toString();
            nazwisko = qry.value("nazwisko").toString();
            pokoj = qry.value("nr").toString();
            pesel = qry.value("pesel").toString();
            int id = qry.value("id").toInt();

            QListWidgetItem *item = new QListWidgetItem(imie +" "+ nazwisko);
            item -> setData(Qt::UserRole, id);
            item -> setData(Qt::UserRole+1, imie);
            item -> setData(Qt::UserRole+2, nazwisko);
            item -> setData(Qt::UserRole+3, pokoj);
            item -> setData(Qt::UserRole+4, pesel);

            ui->listWidget->addItem(item);  // Dodaj do listy
        }
    }
}


void MainWindow_podglad::on_listWidget_itemClicked(QListWidgetItem *item)
{
    id_pacjenta = item->data(Qt::UserRole).toInt();
    ui->textEdit->setText(item->data(Qt::UserRole+1).toString());
    ui->textEdit_2->setText(item->data(Qt::UserRole+2).toString());
    ui->textEdit_3->setText(item->data(Qt::UserRole+3).toString());
    ui->textEdit_4->setText(item->data(Qt::UserRole+4).toString());


    // Zdjęcie
    QDir img_path = pro_path.absolutePath() + "/Zdjęcia";
    qDebug() << "Bieżący katalog roboczy 2 :" << img_path;

    QPixmap pix(img_path.absoluteFilePath("placeholder.jpg"));

    ui->zdj_pacjenta->setPixmap(pix.scaled(ui->zdj_pacjenta->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation));
}


void MainWindow_podglad::on_pushButton_clicked()
{
    this -> close();
    logowanie *log = new logowanie();
    log->show();
}

