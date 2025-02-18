#include "okno2.h"
#include "ui_okno2.h"
#include <QMessageBox>

Okno2::Okno2(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Okno2)
{
    ui->setupUi(this);

}

Okno2::~Okno2()
{
    delete ui;
}

void Okno2::closeEvent(QCloseEvent *event)
{
    // Ignoruj zamknięcie okna, aby aplikacja się nie zamknęła
    event->ignore();
    this->hide();  // Ukrywa okno, zamiast je zamykać
}


void Okno2::on_pushButton_clicked()
{
    QSqlDatabase baza = QSqlDatabase::database();
    QString imie,nazwisko,pokoj,pesel,opis;
    imie=ui->lineEdit->text();
    nazwisko=ui->lineEdit_2->text();
    opis=ui->opis->toPlainText();
    pesel=ui->lineEdit_3->text();   //int
    pokoj=ui->lineEdit_4->text();   //int

    if(opis=="")
    {
        opis="Brak";
    }


    QSqlQuery qry;
    qry.prepare("insert into rejestr (imie,nazwisko,pesel,nr,opis) VALUES (:imie, :nazwisko, :pesel, :nr, :opis)");
    qry.bindValue(":imie", imie);
    qry.bindValue(":nazwisko", nazwisko);
    qry.bindValue(":pesel", pesel);
    qry.bindValue(":nr", pokoj);
    qry.bindValue(":opis", opis);
    if(qry.exec())
    {
        QMessageBox::information(this,"Zapisywanie danych","Zapisano");
        emit dataAdded();
        this->close();
    }
    else
    {
        QMessageBox::critical(this,tr("error"),qry.lastError().text());
    }


}

