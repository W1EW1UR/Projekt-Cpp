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

private:
    Ui::Wizyta *ui;

    int id;
    QDir path;
};

#endif // WIZYTA_H
