#ifndef OKNO2_H
#define OKNO2_H

#include <QDialog>

namespace Ui {
class Okno2;
}

class Okno2 : public QDialog
{
    Q_OBJECT

public:
    explicit Okno2(QWidget *parent = nullptr);
    ~Okno2();

private:
    Ui::Okno2 *ui;
};

#endif // OKNO2_H
