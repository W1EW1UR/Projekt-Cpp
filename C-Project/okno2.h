#ifndef OKNO2_H
#define OKNO2_H

#include <QDialog>
#include <QtSql>
#include <QFileInfo>

namespace Ui {
class Okno2;
}

class Okno2 : public QDialog
{
    Q_OBJECT

public:
    explicit Okno2(QWidget *parent = nullptr);
    ~Okno2();
signals:
    void dataAdded();  // Sygnał, który będzie emitowany po dodaniu danych do bazy

private slots:
    void on_pushButton_clicked();

private:
    Ui::Okno2 *ui;
};

#endif // OKNO2_H
