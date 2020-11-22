/********************************************************************************
** Form generated from reading UI file 'edit_component.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDIT_COMPONENT_H
#define UI_EDIT_COMPONENT_H

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

class Ui_edit_component
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QComboBox *comboBox_component;
    QLabel *lb_desc_comp;
    QLabel *lb_name_comp;
    QLineEdit *line_Descricao;
    QLineEdit *line_ID;
    QLabel *lb_id;
    QLineEdit *line_quantidade;
    QLabel *lb_quant_comp;
    QPushButton *bt_edit;
    QLabel *label;

    void setupUi(QDialog *edit_component)
    {
        if (edit_component->objectName().isEmpty())
            edit_component->setObjectName(QString::fromUtf8("edit_component"));
        edit_component->resize(640, 480);
        layoutWidget = new QWidget(edit_component);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(90, 100, 431, 221));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        comboBox_component = new QComboBox(layoutWidget);
        comboBox_component->setObjectName(QString::fromUtf8("comboBox_component"));

        gridLayout->addWidget(comboBox_component, 1, 2, 1, 1);

        lb_desc_comp = new QLabel(layoutWidget);
        lb_desc_comp->setObjectName(QString::fromUtf8("lb_desc_comp"));
        QFont font;
        font.setPointSize(10);
        lb_desc_comp->setFont(font);

        gridLayout->addWidget(lb_desc_comp, 2, 0, 1, 2);

        lb_name_comp = new QLabel(layoutWidget);
        lb_name_comp->setObjectName(QString::fromUtf8("lb_name_comp"));
        lb_name_comp->setFont(font);

        gridLayout->addWidget(lb_name_comp, 1, 0, 1, 2);

        line_Descricao = new QLineEdit(layoutWidget);
        line_Descricao->setObjectName(QString::fromUtf8("line_Descricao"));

        gridLayout->addWidget(line_Descricao, 2, 2, 1, 1);

        line_ID = new QLineEdit(layoutWidget);
        line_ID->setObjectName(QString::fromUtf8("line_ID"));
        line_ID->setEnabled(false);
        line_ID->setMouseTracking(true);
        line_ID->setReadOnly(false);

        gridLayout->addWidget(line_ID, 0, 2, 1, 1);

        lb_id = new QLabel(layoutWidget);
        lb_id->setObjectName(QString::fromUtf8("lb_id"));
        lb_id->setFont(font);
        lb_id->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(lb_id, 0, 0, 1, 2);

        line_quantidade = new QLineEdit(layoutWidget);
        line_quantidade->setObjectName(QString::fromUtf8("line_quantidade"));

        gridLayout->addWidget(line_quantidade, 3, 2, 1, 1);

        lb_quant_comp = new QLabel(layoutWidget);
        lb_quant_comp->setObjectName(QString::fromUtf8("lb_quant_comp"));
        lb_quant_comp->setFont(font);

        gridLayout->addWidget(lb_quant_comp, 3, 0, 1, 2);

        bt_edit = new QPushButton(edit_component);
        bt_edit->setObjectName(QString::fromUtf8("bt_edit"));
        bt_edit->setGeometry(QRect(440, 360, 131, 41));
        QFont font1;
        font1.setPointSize(9);
        font1.setBold(true);
        font1.setWeight(75);
        bt_edit->setFont(font1);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/imgs/resources/check.png"), QSize(), QIcon::Normal, QIcon::Off);
        bt_edit->setIcon(icon);
        bt_edit->setIconSize(QSize(40, 40));
        label = new QLabel(edit_component);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 50, 431, 31));
        QFont font2;
        font2.setPointSize(16);
        font2.setBold(false);
        font2.setWeight(50);
        label->setFont(font2);
        label->setAlignment(Qt::AlignCenter);

        retranslateUi(edit_component);

        QMetaObject::connectSlotsByName(edit_component);
    } // setupUi

    void retranslateUi(QDialog *edit_component)
    {
        edit_component->setWindowTitle(QCoreApplication::translate("edit_component", "Dialog", nullptr));
        lb_desc_comp->setText(QCoreApplication::translate("edit_component", "Descri\303\247\303\243o:", nullptr));
        lb_name_comp->setText(QCoreApplication::translate("edit_component", "Tipo componente:", nullptr));
        line_ID->setText(QString());
        lb_id->setText(QCoreApplication::translate("edit_component", "C\303\263digo:", nullptr));
        lb_quant_comp->setText(QCoreApplication::translate("edit_component", "Quantidade:", nullptr));
        bt_edit->setText(QCoreApplication::translate("edit_component", "Editar", nullptr));
        label->setText(QCoreApplication::translate("edit_component", "Editar Componente", nullptr));
    } // retranslateUi

};

namespace Ui {
    class edit_component: public Ui_edit_component {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDIT_COMPONENT_H
