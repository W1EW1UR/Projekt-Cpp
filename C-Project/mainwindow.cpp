#include "mainwindow.h"
#include "okno2.h"
#include "logowanie.h"

#include <QMessageBox>
#include <QPixmap>
#include <QTimer>
#include <QDir>
#include <QCoreApplication>
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Ustawianie głównej ścieżki
    QString path = QDir::currentPath();
    QDir dir(path);
    while (!dir.isRoot()) { // Dopóki nie dotrzesz do katalogu głównego
        if (dir.dirName() == "C-Project") { // Sprawdź, czy aktualny katalog to "Projekt"
            dir.cdUp();
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


void MainWindow::on_pushButton_2_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Potwierdzenie", "Czy na pewno chcesz usunąć dane?", QMessageBox::Yes|QMessageBox::No);
    if (reply == QMessageBox::Yes) {
        QSqlQuery qry;

        qry.prepare("DELETE FROM rejestr WHERE id = :id");
        qry.bindValue(":id", id_pacjenta);


        if(qry.exec())
        {
            ui->err_label->setText("Pomyślnie usuninięto dane");
            loadDataIntoListWidget();
        }
        else
        {
            ui->err_label->setText("Błąd: Nie udało się usunąć danych");
        }

    }
}


void MainWindow::on_listWidget_itemClicked(QListWidgetItem *item)
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


void MainWindow::on_back_clicked()
{
    this -> close();
    logowanie *log = new logowanie();
    log->show();
}



void MainWindow::on_edit_clicked()
{
    QSqlQuery qry;

    QString imie,nazwisko,nr,pesel;
    imie = ui->textEdit->toPlainText();
    nazwisko = ui->textEdit_2->toPlainText();
    nr = ui->textEdit_3->toPlainText();
    pesel = ui->textEdit_4->toPlainText();

    qry.prepare("UPDATE rejestr SET imie = :imie, nazwisko = :nazwisko, nr = :nr, pesel = :pesel WHERE id=:id");

    qry.bindValue(      ":id", id_pacjenta);
    qry.bindValue(    ":imie", imie);
    qry.bindValue(":nazwisko", nazwisko);
    qry.bindValue(      ":nr", nr.toInt());
    qry.bindValue(   ":pesel", pesel.toInt());

    if(qry.exec())
    {
        QMessageBox::information(this,"Edycja danych","Zapisano zmiane danych");

    }
    else
    {
        QMessageBox::critical(this,tr("error"),qry.lastError().text());
    }

}

