#ifndef LOGOWANIE_H
#define LOGOWANIE_H

#include <QMainWindow>

namespace Ui {
class logowanie;
}

class logowanie : public QMainWindow
{
    Q_OBJECT

public:
    explicit logowanie(QWidget *parent = nullptr);
    ~logowanie();

    int poziom ;

private slots:
    void on_pomin_clicked();

    void on_zaloguj_clicked();

private:
    Ui::logowanie *ui;
};

#endif // LOGOWANIE_H
