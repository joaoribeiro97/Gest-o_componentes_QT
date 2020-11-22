/********************************************************************************
** Form generated from reading UI file 'add_component.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_COMPONENT_H
#define UI_ADD_COMPONENT_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_add_component
{
public:
    QPushButton *bt_add;
    QLabel *label;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QComboBox *comboBox_component;
    QLineEdit *line_ID;
    QLabel *lb_id;
    QLabel *lb_name_comp;
    QLineEdit *line_Descricao;
    QLabel *lb_desc_comp;
    QLabel *lb_quant_comp;
    QLineEdit *line_quantidade;
    QPushButton *btBox;
    QPushButton *bt_add_2;

    void setupUi(QDialog *add_component)
    {
        if (add_component->objectName().isEmpty())
            add_component->setObjectName(QString::fromUtf8("add_component"));
        add_component->resize(568, 403);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/imgs/resources/logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        add_component->setWindowIcon(icon);
        bt_add = new QPushButton(add_component);
        bt_add->setObjectName(QString::fromUtf8("bt_add"));
        bt_add->setGeometry(QRect(410, 340, 131, 41));
        QFont font;
        font.setPointSize(9);
        font.setBold(true);
        font.setWeight(75);
        bt_add->setFont(font);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/imgs/resources/check.png"), QSize(), QIcon::Normal, QIcon::Off);
        bt_add->setIcon(icon1);
        bt_add->setIconSize(QSize(40, 40));
        label = new QLabel(add_component);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 30, 431, 31));
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(false);
        font1.setWeight(50);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);
        layoutWidget = new QWidget(add_component);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(60, 80, 431, 221));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        comboBox_component = new QComboBox(layoutWidget);
        comboBox_component->setObjectName(QString::fromUtf8("comboBox_component"));

        gridLayout->addWidget(comboBox_component, 1, 2, 1, 1);

        line_ID = new QLineEdit(layoutWidget);
        line_ID->setObjectName(QString::fromUtf8("line_ID"));
        line_ID->setEnabled(false);
        line_ID->setMouseTracking(true);
        line_ID->setReadOnly(false);

        gridLayout->addWidget(line_ID, 0, 2, 1, 1);

        lb_id = new QLabel(layoutWidget);
        lb_id->setObjectName(QString::fromUtf8("lb_id"));
        QFont font2;
        font2.setPointSize(10);
        lb_id->setFont(font2);
        lb_id->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(lb_id, 0, 0, 1, 2);

        lb_name_comp = new QLabel(layoutWidget);
        lb_name_comp->setObjectName(QString::fromUtf8("lb_name_comp"));
        lb_name_comp->setFont(font2);

        gridLayout->addWidget(lb_name_comp, 1, 0, 1, 2);

        line_Descricao = new QLineEdit(layoutWidget);
        line_Descricao->setObjectName(QString::fromUtf8("line_Descricao"));

        gridLayout->addWidget(line_Descricao, 2, 2, 1, 1);

        lb_desc_comp = new QLabel(layoutWidget);
        lb_desc_comp->setObjectName(QString::fromUtf8("lb_desc_comp"));
        lb_desc_comp->setFont(font2);

        gridLayout->addWidget(lb_desc_comp, 2, 0, 1, 2);

        lb_quant_comp = new QLabel(layoutWidget);
        lb_quant_comp->setObjectName(QString::fromUtf8("lb_quant_comp"));
        lb_quant_comp->setFont(font2);

        gridLayout->addWidget(lb_quant_comp, 3, 0, 1, 2);

        line_quantidade = new QLineEdit(layoutWidget);
        line_quantidade->setObjectName(QString::fromUtf8("line_quantidade"));

        gridLayout->addWidget(line_quantidade, 3, 2, 1, 1);

        btBox = new QPushButton(add_component);
        btBox->setObjectName(QString::fromUtf8("btBox"));
        btBox->setGeometry(QRect(500, 156, 31, 20));
        bt_add_2 = new QPushButton(add_component);
        bt_add_2->setObjectName(QString::fromUtf8("bt_add_2"));
        bt_add_2->setGeometry(QRect(600, 570, 131, 41));
        bt_add_2->setFont(font);
        bt_add_2->setIcon(icon1);
        bt_add_2->setIconSize(QSize(40, 40));

        retranslateUi(add_component);

        QMetaObject::connectSlotsByName(add_component);
    } // setupUi

    void retranslateUi(QDialog *add_component)
    {
        add_component->setWindowTitle(QCoreApplication::translate("add_component", "Adicionar Componente", nullptr));
        bt_add->setText(QCoreApplication::translate("add_component", "Guardar", nullptr));
        label->setText(QCoreApplication::translate("add_component", "Adicionar Componente", nullptr));
        line_ID->setText(QString());
        lb_id->setText(QCoreApplication::translate("add_component", "C\303\263digo:", nullptr));
        lb_name_comp->setText(QCoreApplication::translate("add_component", "Tipo componente:", nullptr));
        lb_desc_comp->setText(QCoreApplication::translate("add_component", "Descri\303\247\303\243o:", nullptr));
        lb_quant_comp->setText(QCoreApplication::translate("add_component", "Quantidade:", nullptr));
        btBox->setText(QCoreApplication::translate("add_component", "+", nullptr));
        bt_add_2->setText(QCoreApplication::translate("add_component", "Guardar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class add_component: public Ui_add_component {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_COMPONENT_H
