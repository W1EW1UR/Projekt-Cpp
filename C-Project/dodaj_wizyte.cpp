#include "dodaj_wizyte.h"
#include "ui_dodaj_wizyte.h"

#include <QMessageBox>
#include <QtSql>

Dodaj_wizyte::Dodaj_wizyte(int id_pacjenta,QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dodaj_wizyte),
    id_pacjenta(id_pacjenta)
{
    ui->setupUi(this);
}

Dodaj_wizyte::~Dodaj_wizyte()
{
    delete ui;
}

void Dodaj_wizyte::on_edit_clicked()
{

    QString doktor,cena,typ,opis;
    doktor=ui->lineEdit->text();
    cena=ui->lineEdit_2->text();    //int
    opis=ui->opis->toPlainText();
    typ=ui->lineEdit_3->text();


    if(opis=="")
    {
        opis="Brak";
    }


    QSqlQuery qry;
    qry.prepare("insert into wizyty (doktor,cena,typ,opis,id_pacjenta) VALUES (:doktor, :cena, :typ, :opis,:id_pacjenta)");
    qry.bindValue(":doktor", doktor);
    qry.bindValue(":cena", cena);
    qry.bindValue(":typ", typ);
    qry.bindValue(":opis", opis);
    qry.bindValue(":id_pacjenta", id_pacjenta);
    if(qry.exec())
    {
        QMessageBox::information(this,"Zapisywanie danych wizyty","Zapisano");
        this->close();
    }
    else
    {
        QMessageBox::critical(this,tr("error"),qry.lastError().text());
    }


}

