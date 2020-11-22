/********************************************************************************
** Form generated from reading UI file 'add_user.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_USER_H
#define UI_ADD_USER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_add_user
{
public:
    QPushButton *bt_add;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *line_nome;
    QLabel *lb_nome;
    QLineEdit *line_passsword;
    QLabel *lb_numero;
    QLabel *lb_password;
    QLineEdit *line_numero;
    QLabel *label;

    void setupUi(QDialog *add_user)
    {
        if (add_user->objectName().isEmpty())
            add_user->setObjectName(QString::fromUtf8("add_user"));
        add_user->resize(640, 480);
        bt_add = new QPushButton(add_user);
        bt_add->setObjectName(QString::fromUtf8("bt_add"));
        bt_add->setGeometry(QRect(460, 390, 131, 41));
        QFont font;
        font.setPointSize(9);
        font.setBold(true);
        font.setWeight(75);
        bt_add->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/imgs/resources/check.png"), QSize(), QIcon::Normal, QIcon::Off);
        bt_add->setIcon(icon);
        bt_add->setIconSize(QSize(40, 40));
        layoutWidget = new QWidget(add_user);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(110, 130, 431, 221));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        line_nome = new QLineEdit(layoutWidget);
        line_nome->setObjectName(QString::fromUtf8("line_nome"));

        gridLayout->addWidget(line_nome, 1, 3, 1, 1);

        lb_nome = new QLabel(layoutWidget);
        lb_nome->setObjectName(QString::fromUtf8("lb_nome"));
        QFont font1;
        font1.setPointSize(10);
        lb_nome->setFont(font1);

        gridLayout->addWidget(lb_nome, 1, 0, 1, 2);

        line_passsword = new QLineEdit(layoutWidget);
        line_passsword->setObjectName(QString::fromUtf8("line_passsword"));

        gridLayout->addWidget(line_passsword, 2, 3, 1, 1);

        lb_numero = new QLabel(layoutWidget);
        lb_numero->setObjectName(QString::fromUtf8("lb_numero"));
        lb_numero->setFont(font1);

        gridLayout->addWidget(lb_numero, 0, 0, 1, 2);

        lb_password = new QLabel(layoutWidget);
        lb_password->setObjectName(QString::fromUtf8("lb_password"));
        lb_password->setFont(font1);

        gridLayout->addWidget(lb_password, 2, 0, 1, 2);

        line_numero = new QLineEdit(layoutWidget);
        line_numero->setObjectName(QString::fromUtf8("line_numero"));

        gridLayout->addWidget(line_numero, 0, 3, 1, 1);

        label = new QLabel(add_user);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(110, 80, 431, 31));
        QFont font2;
        font2.setPointSize(16);
        font2.setBold(false);
        font2.setWeight(50);
        label->setFont(font2);
        label->setAlignment(Qt::AlignCenter);

        retranslateUi(add_user);

        QMetaObject::connectSlotsByName(add_user);
    } // setupUi

    void retranslateUi(QDialog *add_user)
    {
        add_user->setWindowTitle(QCoreApplication::translate("add_user", "Dialog", nullptr));
        bt_add->setText(QCoreApplication::translate("add_user", "Guardar", nullptr));
        lb_nome->setText(QCoreApplication::translate("add_user", "Nome:", nullptr));
        lb_numero->setText(QCoreApplication::translate("add_user", "N\303\272mero:", nullptr));
        lb_password->setText(QCoreApplication::translate("add_user", "Password:", nullptr));
        label->setText(QCoreApplication::translate("add_user", "Adicionar utilizador", nullptr));
    } // retranslateUi

};

namespace Ui {
    class add_user: public Ui_add_user {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_USER_H
