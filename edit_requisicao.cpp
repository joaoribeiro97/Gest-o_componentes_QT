#include "edit_requisicao.h"
#include "ui_edit_requisicao.h"
#include "mainwindow.h"
#include <QDebug>
#include <QFile>
#include <QMessageBox>

//Inicializacao da pagina edit_requisicao
edit_requisicao::edit_requisicao(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::edit_requisicao)
{
    ui->setupUi(this);
    ui->line_quantidade->setValidator( new QIntValidator);
    tipos_componentes();

}

//Destrutor do edit_requisicao
edit_requisicao::~edit_requisicao()
{
    delete ui;
}

//Funcao que retorna os valores para a mainwindow.cpp com os valores da requisicao.
void edit_requisicao::mandarValores(QString id,QString num,QString nome,QString databeg,QString dataend,QString tipocomp,QString descr,QString quant)
{

    //Data
    QString string = databeg;
    QString format = "dd/MM/yyyy";
    QDateTime valid = QDateTime::fromString(string,format);

    //Variáveis locais no edit_requisicao
    _id=id;
    _num =num;
    _nome=nome;
    _databeg =databeg;
    _dataend = dataend;
    _tipocomp = tipocomp;
    _descr = descr;
    _quant = quant;

     atual = _quant;
    qDebug () << "atual" << atual;



    //Coloca os valores da função que vem por parametro nos respetivos locais na dialog edit_requisicao
    ui->line_ID_requisicao->setText(_id);
    ui->line_numaluno->setText(_num);
    ui->line_namealuno->setText(_nome);
    ui->dateEdit_end->QDateTimeEdit::setDateTime(valid);
    ui->dateEdit_begin->setDateTime(valid);
    ui->line_quantidade->setText(_quant);

    //verifica componente combobox
    //Retorna para a combobox o tipo de componente e descricao inserida para quando for editada transportar o mesmo valor para a requisicao
    QString verificaComp = ui->comboBox_componente->itemText(0);
    QString verificaDescr = ui->comboBox_descricao->itemText(0);

    if(_tipocomp == verificaComp && _descr==verificaDescr){}

    else {
       ui->comboBox_componente->setCurrentText(_tipocomp);
       ui->comboBox_descricao->setCurrentText(_descr);
    }
}

// Funcoes que retornam para a mainwindow
QString edit_requisicao::idrequisicao()
{
  return ui->line_ID_requisicao->text();
}
QString edit_requisicao::numaluno()
{
 return ui->line_numaluno->text();
}
QString edit_requisicao::nomealuno()
{
  return ui->line_namealuno->text();
}

QString edit_requisicao::dataBegin()
{
  return ui->dateEdit_begin->text();
}

QString edit_requisicao::dataEnd()
{
 return   ui->dateEdit_end->text();
}
QString edit_requisicao::tipocomponente()
{

 return ui->comboBox_componente->currentText();

}

QString edit_requisicao::descricao()
{
  return ui->comboBox_descricao->currentText();
}

QString edit_requisicao::quantidade()
{
  return  ui->line_quantidade->text();
}

QString edit_requisicao::idauxiliar()
{
    return id_aux;
}

// Funcao que permite guardar requsicao verficando possiveis erros.
void edit_requisicao::on_bt_addrequisicao_clicked()
{
    QString text_quantidade = ui->line_quantidade->text();
    int text_quantidadeInt = text_quantidade.toInt();
    qDebug () << "text_quantidadeInt" << text_quantidadeInt;

    int quantDispInt = quantDisp.toInt();
    qDebug () << "quantidade disponivel" << quantDisp;

    if(quantidade() == "")
    {
        QMessageBox::information(this,"Alerta", "Os valores não podem estar vazios.");

    }

        if (text_quantidadeInt > quantDispInt)
        {
                QMessageBox::information(this,"Alerta", "Quantidade superior à quantidade disponível, por favor escolha uma quantidade inferior à disponível. ");
        }

        if ( text_quantidadeInt == quantDispInt)
        {
            QMessageBox::information(this, "Alerta", "A quantidade a ser editada é igual à disponível por favor feche a janela.");
        }
        if ( text_quantidadeInt < 0)
        {
            QMessageBox::information(this, "Alerta", "Não é possível introduzir quantidades negativas");
        }

        if ( text_quantidadeInt < quantDispInt && quantidade() != "" && text_quantidadeInt > 0)
        {
            accept();
            funcaodiferenca();
        }

}

//Funcao que verifica a diferença de quantidades a serem editadas
int edit_requisicao::funcaodiferenca()
{
    QString teste1 = ui->line_quantidade->text();
    int v = teste1.toInt();
    qDebug () << "v" << v;

    int atual2 = atual.toInt();

    int diferenca = atual2 - v;
    qDebug () << "diferenca" << diferenca;

    qDebug () << "quantidade escolhida" << _quant;

    if (diferenca <0)
    {
    int difPositiva = abs(diferenca);
    qDebug() <<"difPositiva" <<difPositiva;
    resDif = difPositiva;


    }

    if (diferenca > 0)
    {
        int difNegativa = 0 - diferenca;
        qDebug () << "difnegativa" << difNegativa;
        resDif = difNegativa;
    }
        qDebug() << "resdif" << resDif;
        return resDif;


}

//Funcao que permite o utilizador consultar o calendario
void edit_requisicao::on_pushButton_clicked()
{
       ui->calendario_widget->setCurrentIndex(1);
}

//Funcao que define o tipo de componentes na combobox
void edit_requisicao::tipos_componentes()
{
    QFile data1("componentes.txt");
       if (!data1.open(QIODevice::ReadOnly | QIODevice::Text))
       {
           qDebug() << "text1.txt file can't be opened...";
       }

        QTextStream line(&data1);

QStringList list, list_aux;


        while (!line.atEnd())
    {

        QString read_line = line.readLine();

        list = read_line.split(";");

        tipo_aux = list.at(1);

        if ( list_aux.contains(tipo_aux)){
        }

        else {
            list_aux.append((tipo_aux));
            ui->comboBox_componente->addItem(tipo_aux);
            }
        }


    data1.close();

 }

//combobox componente
void edit_requisicao::on_comboBox_componente_currentTextChanged(QString componenteIn)
{
    QString comp = componenteIn;
  //  qDebug() << "Compoentein" << componenteIn;
 //Quando se altera o valor da entrada do componente, fazemos uma clear à combobox da descricao.
    ui->comboBox_descricao->clear();

    QFile data1("componentes.txt");
       if (!data1.open(QIODevice::ReadOnly | QIODevice::Text))
       {
           qDebug() << "text1.txt file can't be opened...";
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

//Quando a combobox altera
void edit_requisicao::on_comboBox_descricao_currentTextChanged(QString descricaoIn )
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
            //qDebug() << "eu sou descricao:" << descricaoIn;

                id_aux = list.at(0);
                 qDebug() << "id descricao:" << id_aux;

           _quantidade = list.at(2);
           quantRequisitada = list.at(4);

           quantDisponivel = _quantidade.toInt() - quantRequisitada.toInt();

          quantDisp = QString::number(quantDisponivel);
           qDebug() << "soma" << quantDisp;

                  // QVariant(quantDisponivel).toString();

       //quant_disponivel = _quantidade - quantide_requisitada

        ui->line_quantidade_disponivel_edit->setText(quantDisp);




    }

    }

}
