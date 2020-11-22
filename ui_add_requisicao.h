/********************************************************************************
** Form generated from reading UI file 'add_requisicao.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_REQUISICAO_H
#define UI_ADD_REQUISICAO_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_add_requisicao
{
public:
    QPushButton *bt_addrequisicao;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *line_numaluno;
    QLineEdit *line_namealuno;
    QLabel *lb_quant_comp_4;
    QComboBox *comboBox_descricao;
    QLabel *lb_name_comp;
    QLabel *lb_id;
    QLabel *lb_quant_comp_3;
    QLabel *lb_quant_comp_5;
    QDateEdit *dateEdit_end;
    QLabel *lb_quant_comp_2;
    QLabel *lb_quant_comp;
    QLineEdit *line_ID_requisicao;
    QLineEdit *line_quantidade;
    QComboBox *comboBox_componente;
    QLabel *lb_desc_comp;
    QDateEdit *dateEdit_begin;
    QLabel *lb_quant_comp_6;
    QLineEdit *line_quantidade_disponivel;
    QLabel *label;
    QStackedWidget *calendario_widget;
    QWidget *calendario;
    QPushButton *bt_calendario;
    QWidget *page_2;
    QCalendarWidget *calendarWidget;

    void setupUi(QDialog *add_requisicao)
    {
        if (add_requisicao->objectName().isEmpty())
            add_requisicao->setObjectName(QString::fromUtf8("add_requisicao"));
        add_requisicao->resize(1030, 782);
        bt_addrequisicao = new QPushButton(add_requisicao);
        bt_addrequisicao->setObjectName(QString::fromUtf8("bt_addrequisicao"));
        bt_addrequisicao->setGeometry(QRect(730, 650, 131, 41));
        QFont font;
        font.setPointSize(9);
        font.setBold(true);
        font.setWeight(75);
        bt_addrequisicao->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/imgs/resources/check.png"), QSize(), QIcon::Normal, QIcon::Off);
        bt_addrequisicao->setIcon(icon);
        bt_addrequisicao->setIconSize(QSize(40, 40));
        layoutWidget = new QWidget(add_requisicao);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(220, 130, 431, 521));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        line_numaluno = new QLineEdit(layoutWidget);
        line_numaluno->setObjectName(QString::fromUtf8("line_numaluno"));
        line_numaluno->setEnabled(false);

        gridLayout->addWidget(line_numaluno, 1, 2, 1, 1);

        line_namealuno = new QLineEdit(layoutWidget);
        line_namealuno->setObjectName(QString::fromUtf8("line_namealuno"));
        line_namealuno->setEnabled(false);

        gridLayout->addWidget(line_namealuno, 3, 2, 1, 1);

        lb_quant_comp_4 = new QLabel(layoutWidget);
        lb_quant_comp_4->setObjectName(QString::fromUtf8("lb_quant_comp_4"));
        QFont font1;
        font1.setPointSize(10);
        lb_quant_comp_4->setFont(font1);

        gridLayout->addWidget(lb_quant_comp_4, 9, 0, 1, 1);

        comboBox_descricao = new QComboBox(layoutWidget);
        comboBox_descricao->setObjectName(QString::fromUtf8("comboBox_descricao"));

        gridLayout->addWidget(comboBox_descricao, 9, 2, 1, 1);

        lb_name_comp = new QLabel(layoutWidget);
        lb_name_comp->setObjectName(QString::fromUtf8("lb_name_comp"));
        lb_name_comp->setFont(font1);

        gridLayout->addWidget(lb_name_comp, 8, 0, 1, 1);

        lb_id = new QLabel(layoutWidget);
        lb_id->setObjectName(QString::fromUtf8("lb_id"));
        lb_id->setFont(font1);
        lb_id->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(lb_id, 0, 0, 1, 2);

        lb_quant_comp_3 = new QLabel(layoutWidget);
        lb_quant_comp_3->setObjectName(QString::fromUtf8("lb_quant_comp_3"));
        lb_quant_comp_3->setFont(font1);

        gridLayout->addWidget(lb_quant_comp_3, 1, 0, 1, 1);

        lb_quant_comp_5 = new QLabel(layoutWidget);
        lb_quant_comp_5->setObjectName(QString::fromUtf8("lb_quant_comp_5"));
        lb_quant_comp_5->setFont(font1);

        gridLayout->addWidget(lb_quant_comp_5, 10, 0, 1, 1);

        dateEdit_end = new QDateEdit(layoutWidget);
        dateEdit_end->setObjectName(QString::fromUtf8("dateEdit_end"));

        gridLayout->addWidget(dateEdit_end, 6, 2, 1, 1);

        lb_quant_comp_2 = new QLabel(layoutWidget);
        lb_quant_comp_2->setObjectName(QString::fromUtf8("lb_quant_comp_2"));
        lb_quant_comp_2->setFont(font1);

        gridLayout->addWidget(lb_quant_comp_2, 6, 0, 1, 1);

        lb_quant_comp = new QLabel(layoutWidget);
        lb_quant_comp->setObjectName(QString::fromUtf8("lb_quant_comp"));
        lb_quant_comp->setFont(font1);

        gridLayout->addWidget(lb_quant_comp, 3, 0, 1, 2);

        line_ID_requisicao = new QLineEdit(layoutWidget);
        line_ID_requisicao->setObjectName(QString::fromUtf8("line_ID_requisicao"));
        line_ID_requisicao->setEnabled(false);
        line_ID_requisicao->setMouseTracking(true);
        line_ID_requisicao->setReadOnly(false);

        gridLayout->addWidget(line_ID_requisicao, 0, 2, 1, 1);

        line_quantidade = new QLineEdit(layoutWidget);
        line_quantidade->setObjectName(QString::fromUtf8("line_quantidade"));

        gridLayout->addWidget(line_quantidade, 10, 2, 1, 1);

        comboBox_componente = new QComboBox(layoutWidget);
        comboBox_componente->setObjectName(QString::fromUtf8("comboBox_componente"));

        gridLayout->addWidget(comboBox_componente, 8, 2, 1, 1);

        lb_desc_comp = new QLabel(layoutWidget);
        lb_desc_comp->setObjectName(QString::fromUtf8("lb_desc_comp"));
        lb_desc_comp->setFont(font1);

        gridLayout->addWidget(lb_desc_comp, 5, 0, 1, 2);

        dateEdit_begin = new QDateEdit(layoutWidget);
        dateEdit_begin->setObjectName(QString::fromUtf8("dateEdit_begin"));

        gridLayout->addWidget(dateEdit_begin, 5, 2, 1, 1);

        lb_quant_comp_6 = new QLabel(layoutWidget);
        lb_quant_comp_6->setObjectName(QString::fromUtf8("lb_quant_comp_6"));
        lb_quant_comp_6->setFont(font1);

        gridLayout->addWidget(lb_quant_comp_6, 11, 0, 1, 1);

        line_quantidade_disponivel = new QLineEdit(layoutWidget);
        line_quantidade_disponivel->setObjectName(QString::fromUtf8("line_quantidade_disponivel"));
        line_quantidade_disponivel->setEnabled(false);

        gridLayout->addWidget(line_quantidade_disponivel, 11, 2, 1, 1);

        label = new QLabel(add_requisicao);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(320, 40, 301, 51));
        QFont font2;
        font2.setPointSize(22);
        label->setFont(font2);
        calendario_widget = new QStackedWidget(add_requisicao);
        calendario_widget->setObjectName(QString::fromUtf8("calendario_widget"));
        calendario_widget->setGeometry(QRect(690, 30, 321, 231));
        calendario = new QWidget();
        calendario->setObjectName(QString::fromUtf8("calendario"));
        bt_calendario = new QPushButton(calendario);
        bt_calendario->setObjectName(QString::fromUtf8("bt_calendario"));
        bt_calendario->setGeometry(QRect(60, 130, 131, 31));
        calendario_widget->addWidget(calendario);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        calendarWidget = new QCalendarWidget(page_2);
        calendarWidget->setObjectName(QString::fromUtf8("calendarWidget"));
        calendarWidget->setGeometry(QRect(0, 30, 312, 183));
        calendario_widget->addWidget(page_2);

        retranslateUi(add_requisicao);

        calendario_widget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(add_requisicao);
    } // setupUi

    void retranslateUi(QDialog *add_requisicao)
    {
        add_requisicao->setWindowTitle(QCoreApplication::translate("add_requisicao", "Dialog", nullptr));
        bt_addrequisicao->setText(QCoreApplication::translate("add_requisicao", "Guardar", nullptr));
        lb_quant_comp_4->setText(QCoreApplication::translate("add_requisicao", "Descri\303\247\303\243o", nullptr));
        lb_name_comp->setText(QCoreApplication::translate("add_requisicao", "Tipo componente:", nullptr));
        lb_id->setText(QCoreApplication::translate("add_requisicao", "C\303\263digo Requisi\303\247\303\243o:", nullptr));
        lb_quant_comp_3->setText(QCoreApplication::translate("add_requisicao", "N\303\272mero aluno:", nullptr));
        lb_quant_comp_5->setText(QCoreApplication::translate("add_requisicao", "Quantidade a requisitar:", nullptr));
        lb_quant_comp_2->setText(QCoreApplication::translate("add_requisicao", "Data fim requisi\303\247\303\243o:", nullptr));
        lb_quant_comp->setText(QCoreApplication::translate("add_requisicao", "Nome aluno:", nullptr));
        line_ID_requisicao->setText(QString());
        lb_desc_comp->setText(QCoreApplication::translate("add_requisicao", "Data in\303\255cio requisi\303\247\303\243o:", nullptr));
        lb_quant_comp_6->setText(QCoreApplication::translate("add_requisicao", "Quantidade dispon\303\255vel:", nullptr));
        label->setText(QCoreApplication::translate("add_requisicao", "Inserir requisi\303\247\303\243o", nullptr));
        bt_calendario->setText(QCoreApplication::translate("add_requisicao", "Consultar calend\303\241rio", nullptr));
    } // retranslateUi

};

namespace Ui {
    class add_requisicao: public Ui_add_requisicao {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_REQUISICAO_H
