#include "wizyta.h"
#include "ui_wizyta.h"
#include <QDebug>
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include <QStandardItemModel>
#include <QTableView>


Wizyta::Wizyta(int id_pacjenta, QDir pro_path, int poziom, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Wizyta)
{
    ui->setupUi(this);

    QStandardItemModel *model = new QStandardItemModel(this);
    model->setHorizontalHeaderLabels({"ID", "Data Wizyty", "Pacjent ID", "Typ Wizyty", "Opis"});

    // Przypisz model do QTableView
    ui->tabela_wizyt->setModel(model);

    // Ładuj dane z bazy danych do modelu
    loadVisitsData(model);
}

Wizyta::~Wizyta()
{
    delete ui;
}


//
void Wizyta::loadVisitsData(QStandardItemModel *model) {
    // Właściwa implementacja funkcji
    QSqlQuery query("SELECT * FROM wizyty");

    if (query.exec()) {
        while (query.next()) {
            QList<QStandardItem *> row;
            row << new QStandardItem(query.value("id").toString());
            row << new QStandardItem(query.value("doktor").toString());
            row << new QStandardItem(query.value("cena").toString());
            row << new QStandardItem(query.value("typ").toString());
            row << new QStandardItem(query.value("opis").toString());

            model->appendRow(row);
        }
    } else {
        QMessageBox::critical(nullptr, "Błąd", "Nie udało się pobrać danych z bazy.");
    }
}
