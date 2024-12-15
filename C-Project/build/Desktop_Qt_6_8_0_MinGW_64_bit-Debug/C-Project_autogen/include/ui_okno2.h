/********************************************************************************
** Form generated from reading UI file 'okno2.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OKNO2_H
#define UI_OKNO2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Okno2
{
public:
    QPlainTextEdit *plainTextEdit;
    QLabel *label;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton;
    QLineEdit *lineEdit_3;
    QLabel *label_4;
    QLineEdit *lineEdit_4;
    QLabel *label_5;

    void setupUi(QDialog *Okno2)
    {
        if (Okno2->objectName().isEmpty())
            Okno2->setObjectName("Okno2");
        Okno2->resize(400, 300);
        plainTextEdit = new QPlainTextEdit(Okno2);
        plainTextEdit->setObjectName("plainTextEdit");
        plainTextEdit->setGeometry(QRect(160, 160, 221, 121));
        label = new QLabel(Okno2);
        label->setObjectName("label");
        label->setGeometry(QRect(160, 130, 41, 16));
        lineEdit = new QLineEdit(Okno2);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(220, 10, 161, 22));
        lineEdit_2 = new QLineEdit(Okno2);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(220, 40, 161, 22));
        label_2 = new QLabel(Okno2);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(190, 10, 31, 16));
        label_3 = new QLabel(Okno2);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(150, 40, 71, 16));
        pushButton = new QPushButton(Okno2);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(10, 230, 121, 51));
        QFont font;
        font.setPointSize(12);
        pushButton->setFont(font);
        lineEdit_3 = new QLineEdit(Okno2);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(220, 70, 161, 22));
        label_4 = new QLabel(Okno2);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(180, 70, 41, 20));
        lineEdit_4 = new QLineEdit(Okno2);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setGeometry(QRect(220, 100, 161, 22));
        label_5 = new QLabel(Okno2);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(150, 100, 71, 20));

        retranslateUi(Okno2);

        QMetaObject::connectSlotsByName(Okno2);
    } // setupUi

    void retranslateUi(QDialog *Okno2)
    {
        Okno2->setWindowTitle(QCoreApplication::translate("Okno2", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Okno2", "Opis", nullptr));
        label_2->setText(QCoreApplication::translate("Okno2", "IMIE:", nullptr));
        label_3->setText(QCoreApplication::translate("Okno2", "  NAZWISKO:", nullptr));
        pushButton->setText(QCoreApplication::translate("Okno2", "Dodaj", nullptr));
        label_4->setText(QCoreApplication::translate("Okno2", "  PESEL:", nullptr));
        label_5->setText(QCoreApplication::translate("Okno2", "  NR POKOJU:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Okno2: public Ui_Okno2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OKNO2_H
