/********************************************************************************
** Form generated from reading UI file 'wizyta.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIZYTA_H
#define UI_WIZYTA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Wizyta
{
public:
    QLabel *label_nazwisko;
    QTextEdit *textEdit;
    QLabel *zdj_pacjenta;
    QLabel *label_imie;
    QTextEdit *textEdit_2;
    QTableView *tabela_wizyt;

    void setupUi(QDialog *Wizyta)
    {
        if (Wizyta->objectName().isEmpty())
            Wizyta->setObjectName("Wizyta");
        Wizyta->resize(870, 348);
        label_nazwisko = new QLabel(Wizyta);
        label_nazwisko->setObjectName("label_nazwisko");
        label_nazwisko->setGeometry(QRect(210, 70, 141, 21));
        textEdit = new QTextEdit(Wizyta);
        textEdit->setObjectName("textEdit");
        textEdit->setEnabled(false);
        textEdit->setGeometry(QRect(210, 30, 181, 31));
        textEdit->setMouseTracking(false);
        textEdit->setReadOnly(false);
        zdj_pacjenta = new QLabel(Wizyta);
        zdj_pacjenta->setObjectName("zdj_pacjenta");
        zdj_pacjenta->setGeometry(QRect(20, 10, 171, 211));
        label_imie = new QLabel(Wizyta);
        label_imie->setObjectName("label_imie");
        label_imie->setGeometry(QRect(210, 10, 141, 21));
        textEdit_2 = new QTextEdit(Wizyta);
        textEdit_2->setObjectName("textEdit_2");
        textEdit_2->setEnabled(false);
        textEdit_2->setGeometry(QRect(210, 90, 181, 31));
        textEdit_2->setMouseTracking(false);
        textEdit_2->setReadOnly(false);
        tabela_wizyt = new QTableView(Wizyta);
        tabela_wizyt->setObjectName("tabela_wizyt");
        tabela_wizyt->setGeometry(QRect(210, 130, 651, 192));

        retranslateUi(Wizyta);

        QMetaObject::connectSlotsByName(Wizyta);
    } // setupUi

    void retranslateUi(QDialog *Wizyta)
    {
        Wizyta->setWindowTitle(QCoreApplication::translate("Wizyta", "Dialog", nullptr));
        label_nazwisko->setText(QCoreApplication::translate("Wizyta", "Nazwisko:", nullptr));
        zdj_pacjenta->setText(QString());
        label_imie->setText(QCoreApplication::translate("Wizyta", "Imie:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Wizyta: public Ui_Wizyta {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIZYTA_H
