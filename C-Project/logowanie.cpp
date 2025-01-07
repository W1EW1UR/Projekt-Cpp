#include "logowanie.h"
#include "mainwindow_podglad.h"
#include "mainwindow.h"
#include "ui_logowanie.h"

logowanie::logowanie(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::logowanie)
{
    ui->setupUi(this);
}

logowanie::~logowanie()
{
    delete ui;
}

void logowanie::on_pomin_clicked()
{
    poziom =0;
    // Ukryj okno dialogowe
    this->hide();

    // Otwórz główne okno
    MainWindow *mainWindow = new MainWindow(poziom,this);
    mainWindow->show();

    // Zamknij okno dialogowe (jeśli chcesz, aby dialog nie był dostępny po tym)
    this->close();
}

void logowanie::on_zaloguj_clicked()
{
    QString login, haslo;
    login = ui->login->text();
    haslo = ui->haslo->text();

    if(QString::compare(login, "123", Qt::CaseInsensitive) == 0 && haslo =="123")
    {
        poziom =1;
        this->hide();
        MainWindow *mainWindow = new MainWindow(poziom,this);
        mainWindow->show();
        this->close();
    }
    else
    {
        ui->err->setText("Błąd: Niepoprawne dane");
    }
}

