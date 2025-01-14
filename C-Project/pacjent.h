#ifndef PACJENT_H
#define PACJENT_H

#include <QDialog>
#include <QListWidgetItem>
#include <QDir>
#include <QtSql>
#include <QFileInfo>

namespace Ui {
class Pacjent;
}

class Pacjent : public QDialog
{
    Q_OBJECT

public:
    explicit Pacjent(int id_pacjenta,QDir pro_path,int poziom,QWidget *parent = nullptr);
    ~Pacjent();

    int poziom_autoryzacji;

private slots:
    void on_edit_clicked();

private:
    Ui::Pacjent *ui;
             // Przechowywanie elementu listy
    int id;                 // ID pacjenta
    QDir path;
};

#endif // PACJENT_H
