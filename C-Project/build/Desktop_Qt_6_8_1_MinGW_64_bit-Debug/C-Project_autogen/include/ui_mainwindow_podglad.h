/********************************************************************************
** Form generated from reading UI file 'mainwindow_podglad.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_PODGLAD_H
#define UI_MAINWINDOW_PODGLAD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow_podglad
{
public:
    QWidget *centralwidget;
    QLabel *err_label;
    QLabel *label_nr_2;
    QTextEdit *textEdit_4;
    QTextEdit *textEdit_2;
    QLabel *label_imie;
    QLabel *label;
    QLabel *label_pesel;
    QTextEdit *textEdit;
    QListWidget *listWidget;
    QTextEdit *textEdit_3;
    QLabel *label_nazwisko;
    QLabel *zdj_pacjenta;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow_podglad)
    {
        if (MainWindow_podglad->objectName().isEmpty())
            MainWindow_podglad->setObjectName("MainWindow_podglad");
        MainWindow_podglad->resize(800, 600);
        centralwidget = new QWidget(MainWindow_podglad);
        centralwidget->setObjectName("centralwidget");
        err_label = new QLabel(centralwidget);
        err_label->setObjectName("err_label");
        err_label->setEnabled(true);
        err_label->setGeometry(QRect(180, 340, 191, 31));
        label_nr_2 = new QLabel(centralwidget);
        label_nr_2->setObjectName("label_nr_2");
        label_nr_2->setGeometry(QRect(550, 150, 141, 21));
        textEdit_4 = new QTextEdit(centralwidget);
        textEdit_4->setObjectName("textEdit_4");
        textEdit_4->setEnabled(true);
        textEdit_4->setGeometry(QRect(550, 230, 181, 31));
        textEdit_4->setMouseTracking(false);
        textEdit_4->setReadOnly(true);
        textEdit_2 = new QTextEdit(centralwidget);
        textEdit_2->setObjectName("textEdit_2");
        textEdit_2->setEnabled(true);
        textEdit_2->setGeometry(QRect(550, 110, 181, 31));
        textEdit_2->setMouseTracking(false);
        textEdit_2->setReadOnly(true);
        label_imie = new QLabel(centralwidget);
        label_imie->setObjectName("label_imie");
        label_imie->setGeometry(QRect(550, 30, 141, 21));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setEnabled(true);
        label->setGeometry(QRect(10, 520, 291, 31));
        label_pesel = new QLabel(centralwidget);
        label_pesel->setObjectName("label_pesel");
        label_pesel->setGeometry(QRect(550, 210, 141, 21));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");
        textEdit->setEnabled(true);
        textEdit->setGeometry(QRect(550, 50, 181, 31));
        textEdit->setMouseTracking(false);
        textEdit->setReadOnly(true);
        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(180, 30, 161, 301));
        textEdit_3 = new QTextEdit(centralwidget);
        textEdit_3->setObjectName("textEdit_3");
        textEdit_3->setEnabled(true);
        textEdit_3->setGeometry(QRect(550, 170, 181, 31));
        textEdit_3->setMouseTracking(false);
        textEdit_3->setReadOnly(true);
        label_nazwisko = new QLabel(centralwidget);
        label_nazwisko->setObjectName("label_nazwisko");
        label_nazwisko->setGeometry(QRect(550, 90, 141, 21));
        zdj_pacjenta = new QLabel(centralwidget);
        zdj_pacjenta->setObjectName("zdj_pacjenta");
        zdj_pacjenta->setGeometry(QRect(360, 30, 171, 211));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setEnabled(true);
        pushButton->setGeometry(QRect(10, 20, 141, 51));
        QFont font;
        font.setPointSize(14);
        pushButton->setFont(font);
        MainWindow_podglad->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow_podglad);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow_podglad->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow_podglad);
        statusbar->setObjectName("statusbar");
        MainWindow_podglad->setStatusBar(statusbar);

        retranslateUi(MainWindow_podglad);

        QMetaObject::connectSlotsByName(MainWindow_podglad);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow_podglad)
    {
        MainWindow_podglad->setWindowTitle(QCoreApplication::translate("MainWindow_podglad", "MainWindow", nullptr));
        err_label->setText(QString());
        label_nr_2->setText(QCoreApplication::translate("MainWindow_podglad", "Nr. Pokoju:", nullptr));
        label_imie->setText(QCoreApplication::translate("MainWindow_podglad", "Imie:", nullptr));
        label->setText(QCoreApplication::translate("MainWindow_podglad", "\305\202\304\205czenie z baz\304\205 danych ...", nullptr));
        label_pesel->setText(QCoreApplication::translate("MainWindow_podglad", "Pesel:", nullptr));
        label_nazwisko->setText(QCoreApplication::translate("MainWindow_podglad", "Nazwisko:", nullptr));
        zdj_pacjenta->setText(QString());
        pushButton->setText(QCoreApplication::translate("MainWindow_podglad", "Wr\303\263\304\207", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow_podglad: public Ui_MainWindow_podglad {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_PODGLAD_H
