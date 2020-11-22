/********************************************************************************
** Form generated from reading UI file 'add_family.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_FAMILY_H
#define UI_ADD_FAMILY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_add_family
{
public:
    QLabel *lb_family;
    QLineEdit *line_family;
    QLabel *lb_familytitle;
    QPushButton *bt_family;

    void setupUi(QDialog *add_family)
    {
        if (add_family->objectName().isEmpty())
            add_family->setObjectName(QString::fromUtf8("add_family"));
        add_family->resize(503, 302);
        lb_family = new QLabel(add_family);
        lb_family->setObjectName(QString::fromUtf8("lb_family"));
        lb_family->setGeometry(QRect(80, 160, 71, 20));
        QFont font;
        font.setPointSize(12);
        lb_family->setFont(font);
        line_family = new QLineEdit(add_family);
        line_family->setObjectName(QString::fromUtf8("line_family"));
        line_family->setGeometry(QRect(180, 160, 241, 20));
        lb_familytitle = new QLabel(add_family);
        lb_familytitle->setObjectName(QString::fromUtf8("lb_familytitle"));
        lb_familytitle->setGeometry(QRect(120, 70, 221, 31));
        QFont font1;
        font1.setPointSize(16);
        lb_familytitle->setFont(font1);
        bt_family = new QPushButton(add_family);
        bt_family->setObjectName(QString::fromUtf8("bt_family"));
        bt_family->setGeometry(QRect(350, 220, 111, 31));

        retranslateUi(add_family);

        QMetaObject::connectSlotsByName(add_family);
    } // setupUi

    void retranslateUi(QDialog *add_family)
    {
        add_family->setWindowTitle(QCoreApplication::translate("add_family", "Dialog", nullptr));
        lb_family->setText(QCoreApplication::translate("add_family", "Fam\303\255lia:", nullptr));
        lb_familytitle->setText(QCoreApplication::translate("add_family", "Adicionar fam\303\255lias", nullptr));
        bt_family->setText(QCoreApplication::translate("add_family", "Guardar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class add_family: public Ui_add_family {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_FAMILY_H
