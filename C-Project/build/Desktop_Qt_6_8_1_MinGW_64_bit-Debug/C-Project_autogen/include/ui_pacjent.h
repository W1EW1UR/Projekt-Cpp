/********************************************************************************
** Form generated from reading UI file 'pacjent.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PACJENT_H
#define UI_PACJENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Pacjent
{
public:
    QTextEdit *textEdit_4;
    QTextEdit *textEdit_2;
    QTextEdit *textEdit_3;
    QLabel *label_nazwisko;
    QLabel *label_imie;
    QTextEdit *textEdit;
    QLabel *zdj_pacjenta;
    QLabel *label_pesel;
    QLabel *label_nr_2;
    QPlainTextEdit *opis;
    QLabel *label_pesel_2;
    QPushButton *edit;

    void setupUi(QDialog *Pacjent)
    {
        if (Pacjent->objectName().isEmpty())
            Pacjent->setObjectName("Pacjent");
        Pacjent->resize(477, 488);
        textEdit_4 = new QTextEdit(Pacjent);
        textEdit_4->setObjectName("textEdit_4");
        textEdit_4->setEnabled(true);
        textEdit_4->setGeometry(QRect(200, 210, 181, 31));
        textEdit_4->setMouseTracking(false);
        textEdit_4->setReadOnly(false);
        textEdit_2 = new QTextEdit(Pacjent);
        textEdit_2->setObjectName("textEdit_2");
        textEdit_2->setEnabled(true);
        textEdit_2->setGeometry(QRect(200, 90, 181, 31));
        textEdit_2->setMouseTracking(false);
        textEdit_2->setReadOnly(false);
        textEdit_3 = new QTextEdit(Pacjent);
        textEdit_3->setObjectName("textEdit_3");
        textEdit_3->setEnabled(true);
        textEdit_3->setGeometry(QRect(200, 150, 181, 31));
        textEdit_3->setMouseTracking(false);
        textEdit_3->setReadOnly(false);
        label_nazwisko = new QLabel(Pacjent);
        label_nazwisko->setObjectName("label_nazwisko");
        label_nazwisko->setGeometry(QRect(200, 70, 141, 21));
        label_imie = new QLabel(Pacjent);
        label_imie->setObjectName("label_imie");
        label_imie->setGeometry(QRect(200, 10, 141, 21));
        textEdit = new QTextEdit(Pacjent);
        textEdit->setObjectName("textEdit");
        textEdit->setEnabled(true);
        textEdit->setGeometry(QRect(200, 30, 181, 31));
        textEdit->setMouseTracking(false);
        textEdit->setReadOnly(false);
        zdj_pacjenta = new QLabel(Pacjent);
        zdj_pacjenta->setObjectName("zdj_pacjenta");
        zdj_pacjenta->setGeometry(QRect(10, 10, 171, 211));
        label_pesel = new QLabel(Pacjent);
        label_pesel->setObjectName("label_pesel");
        label_pesel->setGeometry(QRect(200, 190, 141, 21));
        label_nr_2 = new QLabel(Pacjent);
        label_nr_2->setObjectName("label_nr_2");
        label_nr_2->setGeometry(QRect(200, 130, 141, 21));
        opis = new QPlainTextEdit(Pacjent);
        opis->setObjectName("opis");
        opis->setGeometry(QRect(10, 280, 221, 141));
        label_pesel_2 = new QLabel(Pacjent);
        label_pesel_2->setObjectName("label_pesel_2");
        label_pesel_2->setGeometry(QRect(10, 250, 141, 21));
        edit = new QPushButton(Pacjent);
        edit->setObjectName("edit");
        edit->setEnabled(true);
        edit->setGeometry(QRect(250, 260, 141, 51));
        QFont font;
        font.setPointSize(14);
        edit->setFont(font);

        retranslateUi(Pacjent);

        QMetaObject::connectSlotsByName(Pacjent);
    } // setupUi

    void retranslateUi(QDialog *Pacjent)
    {
        Pacjent->setWindowTitle(QCoreApplication::translate("Pacjent", "Dialog", nullptr));
        label_nazwisko->setText(QCoreApplication::translate("Pacjent", "Nazwisko:", nullptr));
        label_imie->setText(QCoreApplication::translate("Pacjent", "Imie:", nullptr));
        zdj_pacjenta->setText(QString());
        label_pesel->setText(QCoreApplication::translate("Pacjent", "Nr. Pokoju:", nullptr));
        label_nr_2->setText(QCoreApplication::translate("Pacjent", "Pesel:", nullptr));
        label_pesel_2->setText(QCoreApplication::translate("Pacjent", "Dodatkowe uwagi:", nullptr));
        edit->setText(QCoreApplication::translate("Pacjent", "Zapisz", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Pacjent: public Ui_Pacjent {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PACJENT_H
