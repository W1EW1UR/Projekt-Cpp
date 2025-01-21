#ifndef WIZYTA_H
#define WIZYTA_H

#include <QDialog>
#include <QListWidgetItem>
#include <QDir>
#include <QtSql>
#include <QFileInfo>
#include <QStandardItemModel>

namespace Ui {
class Wizyta;
}

class Wizyta : public QDialog
{
    Q_OBJECT

public:
    explicit Wizyta(int id_pacjenta,QDir pro_path,int poziom,QWidget *parent = nullptr);
    void loadVisitsData(QStandardItemModel *model);
    ~Wizyta();

    int poziom_autoryzacji;
    int id_pacjenta;

    // Zmienna członkowska typu wskaźnikowego
    QStandardItemModel *q_model;

private slots:
    void on_edit_clicked();
    void on_tabela_wizyt_clicked(const QModelIndex &index);

private:
    Ui::Wizyta *ui;
    int id;
    QDir path;
};

#endif // WIZYTA_H
