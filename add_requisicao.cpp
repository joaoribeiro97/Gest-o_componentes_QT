
#include "add_requisicao.h"
#include "ui_add_requisicao.h"
#include "mainwindow.h"
#include <QDateTime>
#include <QDate>
#include <QDebug>
#include <QFile>
#include <QMessageBox>

add_requisicao::add_requisicao(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::add_requisicao)
{
    ui->setupUi(this);
    ui->line_quantidade->setValidator( new QIntValidator);

    tipos_componentes();

    QDateTime dateTime = dateTime.currentDateTime();
    ui->dateEdit_end->setDateTime(dateTime);
    ui->dateEdit_begin->setDateTime(dateTime);
}

add_requisicao::~add_requisicao()
{
    delete ui;
}

void add_requisicao::on_pushButton_clicked()
{
    ui->calendario_widget->setCurrentIndex(1);

}

//funcoes que retornam para a pagina requisicao(mainwindow)
void add_requisicao::idrequisicao(QString id)
{
    _id = id;
    ui->line_ID_requisicao->setText(_id);
}


void add_requisicao::utilizadores_req(QString num, QString nome)
{
    _num = num;
    _nome = nome;
    ui->line_numaluno->setText(_num);
    ui->line_namealuno->setText(_nome);
}


QString add_requisicao::numaluno()
{
    return ui->line_numaluno->text();
}

QString add_requisicao::nomealuno()
{
    return ui->line_namealuno->text();
}

QString add_requisicao::dataBegin()
{
    return ui->dateEdit_begin->text();
}

QString add_requisicao::dataEnd()
{
    return   ui->dateEdit_end->text();
}

QString add_requisicao::tipocomponente()
{
    return ui->comboBox_componente->currentText();
}

QString add_requisicao::descricao()
{
    return ui->comboBox_descricao->currentText();
}

QString add_requisicao::quantidade()
{
    return  ui->line_quantidade->text();
}

QString add_requisicao::idauxuliar()
{
    return id_aux;
}


void add_requisicao::on_bt_addrequisicao_clicked()
{
    QString quant = ui->line_quantidade->text();
    int quantInt = quant.toInt();

    QString disp = ui->line_quantidade_disponivel->text();
    int dispInt = disp.toInt();

    if(quantidade() == "")
    {
        QMessageBox::information(this,"Alerta", "Estão dados por preencher, por favor insira os mesmos.");
    }
    else{

//        if ( (dispInt ==0  && quantInt > 0)  || (dispInt == 0 < dispInt) || (quantInt > dispInt ) /*|| (- quantInt <= dispInt)*/)
//        {
//            QMessageBox::information(this,"Alerta", "A quantidade que pretende requisitar é superior à quantidade disponível.");
//        }

        if ( quantInt > dispInt)
        {
             QMessageBox::information(this,"Alerta", "A quantidade que pretende requisitar é superior à quantidade disponível.");
        }

        if (quantInt < 0)
        {
             QMessageBox::information(this,"Alerta", "Não pode inserir valores negativos.");
        }

        if (quantInt == 0)
        {
            QMessageBox::information(this,"Alerta", "Não pode requisitar valores nulos");
        }

            if(quantInt < dispInt && quantInt > 0 )
        {

            accept();

        }
            if (quantInt == dispInt && quantInt >0)
            {
                accept();
            }
    }

}




void add_requisicao::on_bt_calendario_clicked()
{
   ui->calendario_widget->setCurrentIndex(1);
}


//Funcao que define o tipo de componentes na combobox
void add_requisicao::tipos_componentes()
{
    QFile data1("componentes.txt");
       if (!data1.open(QIODevice::ReadOnly | QIODevice::Text))
       {
           qDebug() << "componentes.txt file can't be opened...";
       }

        QTextStream line(&data1);

        QStringList list, list_aux;

     while (!line.atEnd())
     {
        QString read_line = line.readLine();
        list = read_line.split(";");
        tipo_aux = list.at(1);

        if ( list_aux.contains(tipo_aux))
        {
        }

        else
        {
            list_aux.append((tipo_aux));
            ui->comboBox_componente->addItem(tipo_aux);
        }
     }
    data1.close();
 }

//Funcao que altera a descricao da combobox quando a combobox do componente é alterada.
void add_requisicao::on_comboBox_componente_currentTextChanged(QString componenteIn)
{
        QString comp = componenteIn;
     //Quando se altera o valor da entrada do componente, fazemos uma clear à combobox da descricao.
        ui->comboBox_descricao->clear();

        QFile data1("componentes.txt");
           if (!data1.open(QIODevice::ReadOnly | QIODevice::Text))
           {
               qDebug() << "componentes.txt file can't be opened...";
           }

        QTextStream line(&data1);

        QStringList list, list_aux_descricao;

      while (!line.atEnd())
        {
            QString read_line = line.readLine();
            list = read_line.split(";");

            if ( list.contains(componenteIn))

            {

                tipo_aux2 = list.at(3);
                ui->comboBox_descricao->addItem(tipo_aux2);
            }

        }

data1.close();
}

void add_requisicao::on_comboBox_descricao_currentTextChanged(QString descricaoIn)
{

    QFile data1("componentes.txt");
       if (!data1.open(QIODevice::ReadOnly | QIODevice::Text))
       {
           qDebug() << "text1.txt file can't be opened...";
       }

    QTextStream line(&data1);

    QStringList list;

  while (!line.atEnd())
    {

      QString read_line = line.readLine();
      list = read_line.split(";");

    if ( list.contains(descricaoIn))
    {
            qDebug() << "eu sou descricao:" << descricaoIn;

                id_aux = list.at(0);
                 qDebug() << "id descricao:" << id_aux;

           _quantidade = list.at(2);
           quantRequisitada = list.at(4);

           quantDisponivel = _quantidade.toInt() - quantRequisitada.toInt();

          a = QString::number(quantDisponivel);
           qDebug() << "quantidade disponivel" << a;

                  // QVariant(quantDisponivel).toString();

       //quant_disponivel = _quantidade - quantide_requisitada

        ui->line_quantidade_disponivel->setText(a);



    }

    }

}




