/********************************************************************************
** Form generated from reading UI file 'edit_requisicao.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDIT_REQUISICAO_H
#define UI_EDIT_REQUISICAO_H

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

class Ui_edit_requisicao
{
public:
    QStackedWidget *calendario_widget;
    QWidget *calendario;
    QPushButton *pushButton;
    QWidget *page_2;
    QCalendarWidget *calendarWidget;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *line_numaluno;
    QLabel *lb_id;
    QLineEdit *line_ID_requisicao;
    QLineEdit *line_namealuno;
    QComboBox *comboBox_descricao;
    QLabel *lb_quant_comp_2;
    QLabel *lb_quant_comp_5;
    QDateEdit *dateEdit_end;
    QLabel *lb_quant_comp_4;
    QLabel *lb_name_comp;
    QLabel *lb_desc_comp;
    QLabel *lb_quant_comp;
    QLineEdit *line_quantidade;
    QDateEdit *dateEdit_begin;
    QLabel *lb_quant_comp_3;
    QComboBox *comboBox_componente;
    QLabel *lb_quant_comp_6;
    QLineEdit *line_quantidade_disponivel_edit;
    QLabel *label;
    QPushButton *bt_addrequisicao;

    void setupUi(QDialog *edit_requisicao)
    {
        if (edit_requisicao->objectName().isEmpty())
            edit_requisicao->setObjectName(QString::fromUtf8("edit_requisicao"));
        edit_requisicao->resize(1071, 872);
        calendario_widget = new QStackedWidget(edit_requisicao);
        calendario_widget->setObjectName(QString::fromUtf8("calendario_widget"));
        calendario_widget->setGeometry(QRect(700, 30, 321, 231));
        calendario = new QWidget();
        calendario->setObjectName(QString::fromUtf8("calendario"));
        pushButton = new QPushButton(calendario);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(60, 130, 131, 31));
        calendario_widget->addWidget(calendario);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        calendarWidget = new QCalendarWidget(page_2);
        calendarWidget->setObjectName(QString::fromUtf8("calendarWidget"));
        calendarWidget->setGeometry(QRect(0, 30, 312, 183));
        calendario_widget->addWidget(page_2);
        layoutWidget = new QWidget(edit_requisicao);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(230, 130, 431, 521));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(8);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        line_numaluno = new QLineEdit(layoutWidget);
        line_numaluno->setObjectName(QString::fromUtf8("line_numaluno"));
        line_numaluno->setEnabled(false);

        gridLayout->addWidget(line_numaluno, 1, 2, 1, 1);

        lb_id = new QLabel(layoutWidget);
        lb_id->setObjectName(QString::fromUtf8("lb_id"));
        QFont font;
        font.setPointSize(10);
        lb_id->setFont(font);
        lb_id->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(lb_id, 0, 0, 1, 2);

        line_ID_requisicao = new QLineEdit(layoutWidget);
        line_ID_requisicao->setObjectName(QString::fromUtf8("line_ID_requisicao"));
        line_ID_requisicao->setEnabled(false);
        line_ID_requisicao->setMouseTracking(true);
        line_ID_requisicao->setReadOnly(false);

        gridLayout->addWidget(line_ID_requisicao, 0, 2, 1, 1);

        line_namealuno = new QLineEdit(layoutWidget);
        line_namealuno->setObjectName(QString::fromUtf8("line_namealuno"));
        line_namealuno->setEnabled(false);

        gridLayout->addWidget(line_namealuno, 3, 2, 1, 1);

        comboBox_descricao = new QComboBox(layoutWidget);
        comboBox_descricao->setObjectName(QString::fromUtf8("comboBox_descricao"));

        gridLayout->addWidget(comboBox_descricao, 9, 2, 1, 1);

        lb_quant_comp_2 = new QLabel(layoutWidget);
        lb_quant_comp_2->setObjectName(QString::fromUtf8("lb_quant_comp_2"));
        lb_quant_comp_2->setFont(font);

        gridLayout->addWidget(lb_quant_comp_2, 6, 0, 1, 1);

        lb_quant_comp_5 = new QLabel(layoutWidget);
        lb_quant_comp_5->setObjectName(QString::fromUtf8("lb_quant_comp_5"));
        lb_quant_comp_5->setFont(font);

        gridLayout->addWidget(lb_quant_comp_5, 10, 0, 1, 1);

        dateEdit_end = new QDateEdit(layoutWidget);
        dateEdit_end->setObjectName(QString::fromUtf8("dateEdit_end"));

        gridLayout->addWidget(dateEdit_end, 6, 2, 1, 1);

        lb_quant_comp_4 = new QLabel(layoutWidget);
        lb_quant_comp_4->setObjectName(QString::fromUtf8("lb_quant_comp_4"));
        lb_quant_comp_4->setFont(font);

        gridLayout->addWidget(lb_quant_comp_4, 9, 0, 1, 1);

        lb_name_comp = new QLabel(layoutWidget);
        lb_name_comp->setObjectName(QString::fromUtf8("lb_name_comp"));
        lb_name_comp->setFont(font);

        gridLayout->addWidget(lb_name_comp, 8, 0, 1, 1);

        lb_desc_comp = new QLabel(layoutWidget);
        lb_desc_comp->setObjectName(QString::fromUtf8("lb_desc_comp"));
        lb_desc_comp->setFont(font);

        gridLayout->addWidget(lb_desc_comp, 5, 0, 1, 2);

        lb_quant_comp = new QLabel(layoutWidget);
        lb_quant_comp->setObjectName(QString::fromUtf8("lb_quant_comp"));
        lb_quant_comp->setFont(font);

        gridLayout->addWidget(lb_quant_comp, 3, 0, 1, 2);

        line_quantidade = new QLineEdit(layoutWidget);
        line_quantidade->setObjectName(QString::fromUtf8("line_quantidade"));

        gridLayout->addWidget(line_quantidade, 10, 2, 1, 1);

        dateEdit_begin = new QDateEdit(layoutWidget);
        dateEdit_begin->setObjectName(QString::fromUtf8("dateEdit_begin"));

        gridLayout->addWidget(dateEdit_begin, 5, 2, 1, 1);

        lb_quant_comp_3 = new QLabel(layoutWidget);
        lb_quant_comp_3->setObjectName(QString::fromUtf8("lb_quant_comp_3"));
        lb_quant_comp_3->setFont(font);

        gridLayout->addWidget(lb_quant_comp_3, 1, 0, 1, 1);

        comboBox_componente = new QComboBox(layoutWidget);
        comboBox_componente->setObjectName(QString::fromUtf8("comboBox_componente"));

        gridLayout->addWidget(comboBox_componente, 8, 2, 1, 1);

        lb_quant_comp_6 = new QLabel(layoutWidget);
        lb_quant_comp_6->setObjectName(QString::fromUtf8("lb_quant_comp_6"));
        lb_quant_comp_6->setFont(font);

        gridLayout->addWidget(lb_quant_comp_6, 11, 0, 1, 1);

        line_quantidade_disponivel_edit = new QLineEdit(layoutWidget);
        line_quantidade_disponivel_edit->setObjectName(QString::fromUtf8("line_quantidade_disponivel_edit"));
        line_quantidade_disponivel_edit->setEnabled(false);

        gridLayout->addWidget(line_quantidade_disponivel_edit, 11, 2, 1, 1);

        label = new QLabel(edit_requisicao);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(330, 40, 301, 51));
        QFont font1;
        font1.setPointSize(22);
        label->setFont(font1);
        bt_addrequisicao = new QPushButton(edit_requisicao);
        bt_addrequisicao->setObjectName(QString::fromUtf8("bt_addrequisicao"));
        bt_addrequisicao->setGeometry(QRect(820, 750, 131, 41));
        QFont font2;
        font2.setPointSize(9);
        font2.setBold(true);
        font2.setWeight(75);
        bt_addrequisicao->setFont(font2);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/imgs/resources/check.png"), QSize(), QIcon::Normal, QIcon::Off);
        bt_addrequisicao->setIcon(icon);
        bt_addrequisicao->setIconSize(QSize(40, 40));

        retranslateUi(edit_requisicao);

        calendario_widget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(edit_requisicao);
    } // setupUi

    void retranslateUi(QDialog *edit_requisicao)
    {
        edit_requisicao->setWindowTitle(QCoreApplication::translate("edit_requisicao", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("edit_requisicao", "Consultar calend\303\241rio", nullptr));
        lb_id->setText(QCoreApplication::translate("edit_requisicao", "C\303\263digo Requisi\303\247\303\243o:", nullptr));
        line_ID_requisicao->setText(QString());
        lb_quant_comp_2->setText(QCoreApplication::translate("edit_requisicao", "Data fim requisi\303\247\303\243o:", nullptr));
        lb_quant_comp_5->setText(QCoreApplication::translate("edit_requisicao", "Quantidade:", nullptr));
        lb_quant_comp_4->setText(QCoreApplication::translate("edit_requisicao", "Descri\303\247\303\243o", nullptr));
        lb_name_comp->setText(QCoreApplication::translate("edit_requisicao", "Tipo componente:", nullptr));
        lb_desc_comp->setText(QCoreApplication::translate("edit_requisicao", "Data in\303\255cio requisi\303\247\303\243o:", nullptr));
        lb_quant_comp->setText(QCoreApplication::translate("edit_requisicao", "Nome aluno:", nullptr));
        lb_quant_comp_3->setText(QCoreApplication::translate("edit_requisicao", "N\303\272mero aluno:", nullptr));
        lb_quant_comp_6->setText(QCoreApplication::translate("edit_requisicao", "Quantidade dispon\303\255vel:", nullptr));
        label->setText(QCoreApplication::translate("edit_requisicao", "Editar requisi\303\247\303\243o", nullptr));
        bt_addrequisicao->setText(QCoreApplication::translate("edit_requisicao", "Guardar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class edit_requisicao: public Ui_edit_requisicao {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDIT_REQUISICAO_H
