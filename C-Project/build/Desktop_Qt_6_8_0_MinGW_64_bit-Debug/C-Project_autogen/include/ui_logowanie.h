/********************************************************************************
** Form generated from reading UI file 'logowanie.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGOWANIE_H
#define UI_LOGOWANIE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_logowanie
{
public:
    QWidget *centralwidget;
    QPushButton *zaloguj;
    QLineEdit *login;
    QLabel *label;
    QLineEdit *haslo;
    QLabel *label_2;
    QPushButton *pomin;
    QLabel *err;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *logowanie)
    {
        if (logowanie->objectName().isEmpty())
            logowanie->setObjectName("logowanie");
        logowanie->resize(171, 233);
        centralwidget = new QWidget(logowanie);
        centralwidget->setObjectName("centralwidget");
        zaloguj = new QPushButton(centralwidget);
        zaloguj->setObjectName("zaloguj");
        zaloguj->setGeometry(QRect(10, 150, 75, 24));
        login = new QLineEdit(centralwidget);
        login->setObjectName("login");
        login->setGeometry(QRect(20, 30, 113, 22));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 10, 49, 16));
        haslo = new QLineEdit(centralwidget);
        haslo->setObjectName("haslo");
        haslo->setGeometry(QRect(20, 80, 113, 22));
        haslo->setReadOnly(false);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 60, 49, 16));
        pomin = new QPushButton(centralwidget);
        pomin->setObjectName("pomin");
        pomin->setGeometry(QRect(90, 150, 75, 24));
        err = new QLabel(centralwidget);
        err->setObjectName("err");
        err->setGeometry(QRect(10, 110, 151, 20));
        logowanie->setCentralWidget(centralwidget);
        menubar = new QMenuBar(logowanie);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 171, 22));
        logowanie->setMenuBar(menubar);
        statusbar = new QStatusBar(logowanie);
        statusbar->setObjectName("statusbar");
        logowanie->setStatusBar(statusbar);

        retranslateUi(logowanie);

        QMetaObject::connectSlotsByName(logowanie);
    } // setupUi

    void retranslateUi(QMainWindow *logowanie)
    {
        logowanie->setWindowTitle(QCoreApplication::translate("logowanie", "MainWindow", nullptr));
        zaloguj->setText(QCoreApplication::translate("logowanie", "Zaloguj", nullptr));
        label->setText(QCoreApplication::translate("logowanie", "Login:", nullptr));
        haslo->setText(QString());
        label_2->setText(QCoreApplication::translate("logowanie", "Has\305\202o:", nullptr));
        pomin->setText(QCoreApplication::translate("logowanie", "Pomi\305\204", nullptr));
        err->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class logowanie: public Ui_logowanie {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGOWANIE_H
