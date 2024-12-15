#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include <QtSql>
#include <QFileInfo>
#include <QListWidgetItem>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void on_listWidget_itemClicked(QListWidgetItem *item);

    void on_back_clicked();

    void on_edit_clicked();

private:
    Ui::MainWindow *ui;

    int id_pacjenta = -1;

    QDir pro_path;

    void loadDataIntoListWidget(); // Deklaracja funkcji
};
#endif // MAINWINDOW_H
