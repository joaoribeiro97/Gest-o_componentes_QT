/********************************************************************************
** Form generated from reading UI file 'cod_cores.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COD_CORES_H
#define UI_COD_CORES_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_cod_cores
{
public:
    QComboBox *Tolerance;
    QComboBox *Multiplier;
    QLabel *ValueResistor;
    QComboBox *FirstRing;
    QLabel *lb_Multi;
    QLabel *lb_tolerance;
    QLabel *Titulo;
    QLabel *lb_anel_1;
    QLabel *lb_anel_2;
    QComboBox *SecondRing;
    QPushButton *bt_Calculate;

    void setupUi(QDialog *cod_cores)
    {
        if (cod_cores->objectName().isEmpty())
            cod_cores->setObjectName(QString::fromUtf8("cod_cores"));
        cod_cores->resize(410, 448);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/imgs/resources/logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        cod_cores->setWindowIcon(icon);
        Tolerance = new QComboBox(cod_cores);
        Tolerance->addItem(QString());
        Tolerance->addItem(QString());
        Tolerance->addItem(QString());
        Tolerance->setObjectName(QString::fromUtf8("Tolerance"));
        Tolerance->setGeometry(QRect(30, 310, 341, 21));
        Multiplier = new QComboBox(cod_cores);
        Multiplier->addItem(QString());
        Multiplier->addItem(QString());
        Multiplier->addItem(QString());
        Multiplier->addItem(QString());
        Multiplier->addItem(QString());
        Multiplier->addItem(QString());
        Multiplier->addItem(QString());
        Multiplier->addItem(QString());
        Multiplier->setObjectName(QString::fromUtf8("Multiplier"));
        Multiplier->setGeometry(QRect(30, 240, 341, 21));
        Multiplier->setStyleSheet(QString::fromUtf8(""));
        ValueResistor = new QLabel(cod_cores);
        ValueResistor->setObjectName(QString::fromUtf8("ValueResistor"));
        ValueResistor->setGeometry(QRect(120, 400, 161, 21));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        ValueResistor->setFont(font);
        ValueResistor->setAlignment(Qt::AlignCenter);
        FirstRing = new QComboBox(cod_cores);
        FirstRing->addItem(QString());
        FirstRing->addItem(QString());
        FirstRing->addItem(QString());
        FirstRing->addItem(QString());
        FirstRing->addItem(QString());
        FirstRing->addItem(QString());
        FirstRing->addItem(QString());
        FirstRing->addItem(QString());
        FirstRing->addItem(QString());
        FirstRing->addItem(QString());
        FirstRing->setObjectName(QString::fromUtf8("FirstRing"));
        FirstRing->setGeometry(QRect(30, 110, 341, 21));
        FirstRing->setStyleSheet(QString::fromUtf8(""));
        lb_Multi = new QLabel(cod_cores);
        lb_Multi->setObjectName(QString::fromUtf8("lb_Multi"));
        lb_Multi->setGeometry(QRect(30, 210, 81, 16));
        lb_tolerance = new QLabel(cod_cores);
        lb_tolerance->setObjectName(QString::fromUtf8("lb_tolerance"));
        lb_tolerance->setGeometry(QRect(30, 280, 81, 16));
        Titulo = new QLabel(cod_cores);
        Titulo->setObjectName(QString::fromUtf8("Titulo"));
        Titulo->setGeometry(QRect(30, 40, 191, 21));
        Titulo->setFont(font);
        lb_anel_1 = new QLabel(cod_cores);
        lb_anel_1->setObjectName(QString::fromUtf8("lb_anel_1"));
        lb_anel_1->setGeometry(QRect(30, 80, 91, 16));
        lb_anel_2 = new QLabel(cod_cores);
        lb_anel_2->setObjectName(QString::fromUtf8("lb_anel_2"));
        lb_anel_2->setGeometry(QRect(30, 150, 91, 16));
        SecondRing = new QComboBox(cod_cores);
        SecondRing->addItem(QString());
        SecondRing->addItem(QString());
        SecondRing->addItem(QString());
        SecondRing->addItem(QString());
        SecondRing->addItem(QString());
        SecondRing->addItem(QString());
        SecondRing->addItem(QString());
        SecondRing->addItem(QString());
        SecondRing->addItem(QString());
        SecondRing->addItem(QString());
        SecondRing->setObjectName(QString::fromUtf8("SecondRing"));
        SecondRing->setGeometry(QRect(30, 180, 341, 21));
        SecondRing->setStyleSheet(QString::fromUtf8(""));
        bt_Calculate = new QPushButton(cod_cores);
        bt_Calculate->setObjectName(QString::fromUtf8("bt_Calculate"));
        bt_Calculate->setGeometry(QRect(150, 360, 101, 31));

        retranslateUi(cod_cores);

        QMetaObject::connectSlotsByName(cod_cores);
    } // setupUi

    void retranslateUi(QDialog *cod_cores)
    {
        cod_cores->setWindowTitle(QCoreApplication::translate("cod_cores", "Codigo Cores Resistencias", nullptr));
        Tolerance->setItemText(0, QCoreApplication::translate("cod_cores", "Castanho (1%)", nullptr));
        Tolerance->setItemText(1, QCoreApplication::translate("cod_cores", "Vermelho (2%)", nullptr));
        Tolerance->setItemText(2, QCoreApplication::translate("cod_cores", "Dourado (5%)", nullptr));

        Multiplier->setItemText(0, QCoreApplication::translate("cod_cores", "Preto(1)", nullptr));
        Multiplier->setItemText(1, QCoreApplication::translate("cod_cores", "Castanho(10)", nullptr));
        Multiplier->setItemText(2, QCoreApplication::translate("cod_cores", "Vermelho(100)", nullptr));
        Multiplier->setItemText(3, QCoreApplication::translate("cod_cores", "Laranja(1000)", nullptr));
        Multiplier->setItemText(4, QCoreApplication::translate("cod_cores", "Amarelo(10000)", nullptr));
        Multiplier->setItemText(5, QCoreApplication::translate("cod_cores", "Verde(100000)", nullptr));
        Multiplier->setItemText(6, QCoreApplication::translate("cod_cores", "Azul(1000000)", nullptr));
        Multiplier->setItemText(7, QCoreApplication::translate("cod_cores", "Violeta(10000000)", nullptr));

        ValueResistor->setText(QCoreApplication::translate("cod_cores", "0.0k ohm", nullptr));
        FirstRing->setItemText(0, QCoreApplication::translate("cod_cores", "Preto(0)", nullptr));
        FirstRing->setItemText(1, QCoreApplication::translate("cod_cores", "Castanho(1)", nullptr));
        FirstRing->setItemText(2, QCoreApplication::translate("cod_cores", "Vermelho(2)", nullptr));
        FirstRing->setItemText(3, QCoreApplication::translate("cod_cores", "Laranja(3)", nullptr));
        FirstRing->setItemText(4, QCoreApplication::translate("cod_cores", "Amarelo(4)", nullptr));
        FirstRing->setItemText(5, QCoreApplication::translate("cod_cores", "Verde(5)", nullptr));
        FirstRing->setItemText(6, QCoreApplication::translate("cod_cores", "Azul(6)", nullptr));
        FirstRing->setItemText(7, QCoreApplication::translate("cod_cores", "Violeta(7)", nullptr));
        FirstRing->setItemText(8, QCoreApplication::translate("cod_cores", "Cinza(8)", nullptr));
        FirstRing->setItemText(9, QCoreApplication::translate("cod_cores", "Branco(9)", nullptr));

        lb_Multi->setText(QCoreApplication::translate("cod_cores", "Multiplicador", nullptr));
        lb_tolerance->setText(QCoreApplication::translate("cod_cores", "Toler\303\242ncia", nullptr));
        Titulo->setText(QCoreApplication::translate("cod_cores", "Escolher Cores", nullptr));
        lb_anel_1->setText(QCoreApplication::translate("cod_cores", "Primeiro Anel", nullptr));
        lb_anel_2->setText(QCoreApplication::translate("cod_cores", "Segundo Anel", nullptr));
        SecondRing->setItemText(0, QCoreApplication::translate("cod_cores", "Preto(0)", nullptr));
        SecondRing->setItemText(1, QCoreApplication::translate("cod_cores", "Castanho(1)", nullptr));
        SecondRing->setItemText(2, QCoreApplication::translate("cod_cores", "Vermelho(2)", nullptr));
        SecondRing->setItemText(3, QCoreApplication::translate("cod_cores", "Laranja(3)", nullptr));
        SecondRing->setItemText(4, QCoreApplication::translate("cod_cores", "Amarelo(4)", nullptr));
        SecondRing->setItemText(5, QCoreApplication::translate("cod_cores", "Verde(5)", nullptr));
        SecondRing->setItemText(6, QCoreApplication::translate("cod_cores", "Azul(6)", nullptr));
        SecondRing->setItemText(7, QCoreApplication::translate("cod_cores", "Violeta(7)", nullptr));
        SecondRing->setItemText(8, QCoreApplication::translate("cod_cores", "Cinza(8)", nullptr));
        SecondRing->setItemText(9, QCoreApplication::translate("cod_cores", "Branco(9)", nullptr));

        bt_Calculate->setText(QCoreApplication::translate("cod_cores", "Calcular", nullptr));
    } // retranslateUi

};

namespace Ui {
    class cod_cores: public Ui_cod_cores {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COD_CORES_H
