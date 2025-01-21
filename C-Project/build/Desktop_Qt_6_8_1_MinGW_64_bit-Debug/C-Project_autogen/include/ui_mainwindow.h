/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

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

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QLabel *label;
    QListWidget *listWidget;
    QLabel *err_label;
    QLabel *zdj_pacjenta;
    QTextEdit *textEdit;
    QLabel *label_imie;
    QLabel *label_nazwisko;
    QTextEdit *textEdit_2;
    QLabel *label_nr_2;
    QTextEdit *textEdit_3;
    QLabel *label_pesel;
    QTextEdit *textEdit_4;
    QPushButton *back;
    QPushButton *edit;
    QPushButton *wizyty;
    QLabel *label_pesel_2;
    QTextEdit *opis;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 438);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setEnabled(true);
        pushButton_3->setGeometry(QRect(20, 180, 141, 51));
        QFont font;
        font.setPointSize(14);
        pushButton_3->setFont(font);
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setEnabled(true);
        pushButton_2->setGeometry(QRect(20, 240, 141, 51));
        pushButton_2->setFont(font);
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setEnabled(true);
        label->setGeometry(QRect(10, 360, 291, 31));
        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(180, 30, 161, 301));
        err_label = new QLabel(centralwidget);
        err_label->setObjectName("err_label");
        err_label->setEnabled(true);
        err_label->setGeometry(QRect(180, 340, 191, 31));
        zdj_pacjenta = new QLabel(centralwidget);
        zdj_pacjenta->setObjectName("zdj_pacjenta");
        zdj_pacjenta->setGeometry(QRect(360, 30, 171, 191));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");
        textEdit->setEnabled(false);
        textEdit->setGeometry(QRect(550, 50, 181, 31));
        textEdit->setMouseTracking(false);
        textEdit->setReadOnly(false);
        label_imie = new QLabel(centralwidget);
        label_imie->setObjectName("label_imie");
        label_imie->setGeometry(QRect(550, 30, 141, 21));
        label_nazwisko = new QLabel(centralwidget);
        label_nazwisko->setObjectName("label_nazwisko");
        label_nazwisko->setGeometry(QRect(550, 90, 141, 21));
        textEdit_2 = new QTextEdit(centralwidget);
        textEdit_2->setObjectName("textEdit_2");
        textEdit_2->setEnabled(false);
        textEdit_2->setGeometry(QRect(550, 110, 181, 31));
        textEdit_2->setMouseTracking(false);
        textEdit_2->setReadOnly(false);
        label_nr_2 = new QLabel(centralwidget);
        label_nr_2->setObjectName("label_nr_2");
        label_nr_2->setGeometry(QRect(550, 150, 141, 21));
        textEdit_3 = new QTextEdit(centralwidget);
        textEdit_3->setObjectName("textEdit_3");
        textEdit_3->setEnabled(false);
        textEdit_3->setGeometry(QRect(550, 170, 181, 31));
        textEdit_3->setMouseTracking(false);
        textEdit_3->setReadOnly(false);
        label_pesel = new QLabel(centralwidget);
        label_pesel->setObjectName("label_pesel");
        label_pesel->setGeometry(QRect(550, 210, 141, 21));
        textEdit_4 = new QTextEdit(centralwidget);
        textEdit_4->setObjectName("textEdit_4");
        textEdit_4->setEnabled(false);
        textEdit_4->setGeometry(QRect(550, 230, 181, 31));
        textEdit_4->setMouseTracking(false);
        textEdit_4->setReadOnly(false);
        back = new QPushButton(centralwidget);
        back->setObjectName("back");
        back->setEnabled(true);
        back->setGeometry(QRect(20, 20, 141, 51));
        back->setFont(font);
        edit = new QPushButton(centralwidget);
        edit->setObjectName("edit");
        edit->setEnabled(true);
        edit->setGeometry(QRect(550, 280, 141, 51));
        edit->setFont(font);
        wizyty = new QPushButton(centralwidget);
        wizyty->setObjectName("wizyty");
        wizyty->setEnabled(true);
        wizyty->setGeometry(QRect(20, 120, 141, 51));
        wizyty->setFont(font);
        label_pesel_2 = new QLabel(centralwidget);
        label_pesel_2->setObjectName("label_pesel_2");
        label_pesel_2->setGeometry(QRect(350, 230, 141, 21));
        opis = new QTextEdit(centralwidget);
        opis->setObjectName("opis");
        opis->setEnabled(false);
        opis->setGeometry(QRect(350, 250, 181, 81));
        opis->setMouseTracking(false);
        opis->setReadOnly(false);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Dodaj", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Usu\305\204", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\305\202\304\205czenie z baz\304\205 danych ...", nullptr));
        err_label->setText(QString());
        zdj_pacjenta->setText(QString());
        label_imie->setText(QCoreApplication::translate("MainWindow", "Imie:", nullptr));
        label_nazwisko->setText(QCoreApplication::translate("MainWindow", "Nazwisko:", nullptr));
        label_nr_2->setText(QCoreApplication::translate("MainWindow", "Nr. Pokoju:", nullptr));
        label_pesel->setText(QCoreApplication::translate("MainWindow", "Pesel:", nullptr));
        back->setText(QCoreApplication::translate("MainWindow", "Wr\303\263\304\207", nullptr));
        edit->setText(QCoreApplication::translate("MainWindow", "Edytuj", nullptr));
        wizyty->setText(QCoreApplication::translate("MainWindow", "Wizyty", nullptr));
        label_pesel_2->setText(QCoreApplication::translate("MainWindow", "Pesel:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
