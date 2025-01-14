#ifndef DODAJ_WIZYTE_H
#define DODAJ_WIZYTE_H

#include <QDialog>

namespace Ui {
class Dodaj_wizyte;
}

class Dodaj_wizyte : public QDialog
{
    Q_OBJECT

public:
    explicit Dodaj_wizyte(int id_pacjenta,QWidget *parent = nullptr);
    ~Dodaj_wizyte();

    int id_pacjenta;

private slots:
    void on_edit_clicked();

private:
    Ui::Dodaj_wizyte *ui;
};

#endif // DODAJ_WIZYTE_H
