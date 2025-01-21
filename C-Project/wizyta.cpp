#include "wizyta.h"
#include "ui_wizyta.h"
#include "dodaj_wizyte.h"

#include <QDebug>
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include <QStandardItemModel>
#include <QTableView>


Wizyta::Wizyta(int id_pacjenta, QDir pro_path, int poziom, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Wizyta),
    id_pacjenta(id_pacjenta)
{
    ui->setupUi(this);

    // Zainicjalizuj model i przypisz go do zmiennej członkowskiej
    q_model = new QStandardItemModel(this);
    q_model->setHorizontalHeaderLabels({"Data Wizyty", "Pacjent ID", "Typ Wizyty", "Opis"});

    // Przypisz model do QTableView
    ui->tabela_wizyt->setModel(q_model);

    // Ładuj dane z bazy danych do modelu
    loadVisitsData(q_model);

    QSqlQuery qry;
    qry.prepare("SELECT * FROM rejestr where id = :id");
    qry.bindValue(":id", id_pacjenta);

    if (qry.exec()) {
        qry.next();
        QString imie, nazwisko;

        imie = qry.value("imie").toString();
        nazwisko = qry.value("nazwisko").toString();

        ui->textEdit->setText(imie);
        ui->textEdit_2->setText(nazwisko);
    }

    // Zdjęcie
    QDir img_path = pro_path.absolutePath() + "/Zdjęcia";
    qDebug() << "Bieżący katalog roboczy 2 :" << img_path;

    QPixmap pix(img_path.absoluteFilePath("placeholder.jpg"));
    ui->zdj_pacjenta->setPixmap(pix.scaled(ui->zdj_pacjenta->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation));
}

Wizyta::~Wizyta()
{
    delete ui;
}

// Ładowanie danych do modelu
void Wizyta::loadVisitsData(QStandardItemModel *model) {
    QSqlQuery query;
    query.prepare("SELECT * FROM wizyty where id_pacjenta=:id");
    query.bindValue(":id", id_pacjenta);

    if (query.exec()) {
        while (query.next()) {
            QList<QStandardItem *> row;
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

void Wizyta::on_edit_clicked()
{
    Dodaj_wizyte Okno(id_pacjenta, this);
    Okno.setModal(true);
    Okno.exec();
}

// Funkcja do obsługi kliknięcia na wiersz w tabeli
void Wizyta::on_tabela_wizyt_clicked(const QModelIndex &index)
{
    qDebug() << "test = " << index;

    int row = index.row();
    int col = 0;  // Chcemy pobrać dane z pierwszej kolumny

    // Tworzymy indeks dla pierwszej kolumny klikniętego wiersza
    QModelIndex id_index = q_model->index(row, col);

    // Pobieramy dane z pierwszej kolumny
    QVariant id = q_model->data(id_index);
    QString id_wizyty = id.toString();  // Zakładając, że wartość w pierwszej kolumnie to liczba

    qDebug() << "ID Wizyty = " << id_wizyty;
}
