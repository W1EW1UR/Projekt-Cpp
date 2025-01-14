/********************************************************************************
** Form generated from reading UI file 'dodaj_wizyte.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DODAJ_WIZYTE_H
#define UI_DODAJ_WIZYTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dodaj_wizyte
{
public:
    QLineEdit *lineEdit_3;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label_4;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *label;
    QPlainTextEdit *opis;
    QPushButton *edit;

    void setupUi(QDialog *Dodaj_wizyte)
    {
        if (Dodaj_wizyte->objectName().isEmpty())
            Dodaj_wizyte->setObjectName("Dodaj_wizyte");
        Dodaj_wizyte->resize(402, 274);
        lineEdit_3 = new QLineEdit(Dodaj_wizyte);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(80, 70, 161, 22));
        label_3 = new QLabel(Dodaj_wizyte);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(40, 40, 41, 20));
        label_2 = new QLabel(Dodaj_wizyte);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 10, 51, 20));
        label_4 = new QLabel(Dodaj_wizyte);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(50, 70, 31, 20));
        lineEdit = new QLineEdit(Dodaj_wizyte);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(80, 10, 161, 22));
        lineEdit_2 = new QLineEdit(Dodaj_wizyte);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(80, 40, 161, 22));
        label = new QLabel(Dodaj_wizyte);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 110, 41, 16));
        opis = new QPlainTextEdit(Dodaj_wizyte);
        opis->setObjectName("opis");
        opis->setGeometry(QRect(10, 130, 231, 131));
        edit = new QPushButton(Dodaj_wizyte);
        edit->setObjectName("edit");
        edit->setEnabled(true);
        edit->setGeometry(QRect(250, 10, 141, 51));
        QFont font;
        font.setPointSize(14);
        edit->setFont(font);

        retranslateUi(Dodaj_wizyte);

        QMetaObject::connectSlotsByName(Dodaj_wizyte);
    } // setupUi

    void retranslateUi(QDialog *Dodaj_wizyte)
    {
        Dodaj_wizyte->setWindowTitle(QCoreApplication::translate("Dodaj_wizyte", "Dialog", nullptr));
        label_3->setText(QCoreApplication::translate("Dodaj_wizyte", "CENA:", nullptr));
        label_2->setText(QCoreApplication::translate("Dodaj_wizyte", "DOKTOR:", nullptr));
        label_4->setText(QCoreApplication::translate("Dodaj_wizyte", "TYP:", nullptr));
        label->setText(QCoreApplication::translate("Dodaj_wizyte", "OPIS:", nullptr));
        edit->setText(QCoreApplication::translate("Dodaj_wizyte", "Dodaj", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dodaj_wizyte: public Ui_Dodaj_wizyte {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DODAJ_WIZYTE_H
