#include "okno2.h"
#include "ui_okno2.h"

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

}

