#include "pacjent.h"
#include "ui_pacjent.h"
#include <QMessageBox>
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
        ui->textEdit->setDisabled(true);
        ui->textEdit_2->setDisabled(true);
        ui->textEdit_3->setDisabled(true);
        ui->textEdit_4->setDisabled(true);
        ui->opis->setDisabled(true);
    }
    else
    {
        ui->edit->show();
        ui->textEdit->setDisabled(false);
        ui->textEdit_2->setDisabled(false);
        ui->textEdit_3->setDisabled(false);
        ui->textEdit_4->setDisabled(false);
        ui->opis->setDisabled(false);

    }

    QSqlDatabase baza = QSqlDatabase::database();
    QSqlQuery qry;
    qry.prepare("SELECT * FROM rejestr where id = :id");
    qry.bindValue(":id",id);

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

void Pacjent::on_edit_clicked()
{

    QSqlDatabase baza = QSqlDatabase::database();
    QSqlQuery qry;
    QString imie,nazwisko,pokoj,pesel,opis;

    imie =  ui->textEdit->toPlainText();
    nazwisko = ui->textEdit_2->toPlainText();
    pokoj = ui->textEdit_3->toPlainText();
    pesel = ui->textEdit_4->toPlainText();
    opis = ui->opis->toPlainText();

    qry.prepare("UPDATE rejestr SET imie=:imie,nazwisko=:nazwisko,pesel=:pesel,nr=:nr,opis=:opis WHERE id = :id");
    qry.bindValue(":id",id);
    qry.bindValue(":imie",imie);
    qry.bindValue(":nazwisko",nazwisko);
    qry.bindValue(":nr",pokoj);
    qry.bindValue(":pesel",pesel);
    qry.bindValue(":opis",opis);

    if(qry.exec())
    {
        QMessageBox::information(this,"Edycja danych","Zapisano");
    }
    else
    {
        QMessageBox::critical(this,tr("error"),qry.lastError().text());
    }

}

