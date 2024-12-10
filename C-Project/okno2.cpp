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

void Okno2::on_pushButton_clicked()
{
    QSqlDatabase baza = QSqlDatabase::database();
    QString imie,nazwisko,pokoj,pesel;
    imie=ui->lineEdit->text();
    nazwisko=ui->lineEdit_2->text();
    pesel=ui->lineEdit_3->text();   //int
    pokoj=ui->lineEdit_4->text();   //int



    QSqlQuery qry;
    qry.prepare("insert into rejestr (imie,nazwisko,pesel,nr) values ('"+imie+"','"+nazwisko+"',"+pesel+","+pokoj+");");
    if(qry.exec())
    {
        QMessageBox::critical(this,tr("save"),tr("saved"));
        emit dataAdded();
    }
    else
    {
        QMessageBox::critical(this,tr("error"),qry.lastError().text());
    }


}

