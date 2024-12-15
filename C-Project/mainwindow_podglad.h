#ifndef MAINWINDOW_PODGLAD_H
#define MAINWINDOW_PODGLAD_H

#include <QMainWindow>
#include <QDebug>
#include <QtSql>
#include <QFileInfo>
#include <QListWidgetItem>



#include <QMainWindow>
#include <QDebug>
#include <QtSql>
#include <QFileInfo>
#include <QListWidgetItem>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow_podglad;
}
QT_END_NAMESPACE

class MainWindow_podglad : public QMainWindow
{
    Q_OBJECT

public:

    MainWindow_podglad(QWidget *parent = nullptr);
    ~MainWindow_podglad();

private slots:

    void on_listWidget_itemClicked(QListWidgetItem *item);

    void on_pushButton_clicked();

private:
    Ui::MainWindow_podglad *ui;

    int id_pacjenta = -1;

    QDir pro_path;

    void loadDataIntoListWidget(); // Deklaracja funkcji
};

#endif // MAINWINDOW_PODGLAD_H
