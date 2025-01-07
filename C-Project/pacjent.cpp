#include "pacjent.h"
#include "ui_pacjent.h"

#include <QDir>


Pacjent::Pacjent(int id_pacjenta, QDir pro_path, int poziom, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Pacjent),
    id(id_pacjenta),
    path(pro_path)

{
    ui->setupUi(this);
    if(poziom==0)
    {
        ui->edit->hide();
    }
    else{
        ui->edit->show();
    }

    QSqlDatabase baza = QSqlDatabase::database();
    QSqlQuery qry;
    qry.prepare("SELECT * FROM rejestr where id = :id");
    qry.bindValue(":id",id);

    qDebug() <<"Przed załądowaniem:"<<"ID:"<<id<<"PATH:"<<path;

    if(qry.exec()) {
        qry.next();
        QString imie,nazwisko,pokoj,pesel,opis;

        imie = qry.value("imie").toString();
        nazwisko = qry.value("nazwisko").toString();
        pokoj = qry.value("nr").toString();
        pesel = qry.value("pesel").toString();
        opis = qry.value("opis").toString();


        ui->textEdit->setText(imie);
        ui->textEdit_2->setText(nazwisko);
        ui->textEdit_3->setText(pokoj);
        ui->textEdit_4->setText(pesel);
        ui->opis->insertPlainText(opis);

    }


    // Zdjęcie
    QDir img_path = pro_path.absolutePath() + "/Zdjęcia";
    qDebug() << "Bieżący katalog roboczy 2 :" << img_path;

    QPixmap pix(img_path.absoluteFilePath("placeholder.jpg"));

    ui->zdj_pacjenta->setPixmap(pix.scaled(ui->zdj_pacjenta->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation));



}

Pacjent::~Pacjent()
{
    delete ui;
}

int id_pacjenta = -1;

QDir pro_path;
