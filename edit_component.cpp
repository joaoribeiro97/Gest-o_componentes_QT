#include "edit_component.h"
#include "ui_edit_component.h"

#include <QFile>
#include <QMessageBox>
#include <QTextStream>
#include <QFileDialog>
#include <QMessageBox>
#include <QDebug>


edit_component::edit_component(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::edit_component)
{
    ui->setupUi(this);
    ui->line_quantidade->setValidator( new QIntValidator(0,10000));
    //Retira o ponto de interregocao da dialog
    setWindowFlag(Qt::WindowContextHelpButtonHint,false);
     lertipos();
}

edit_component::~edit_component()
{
    delete ui;
}

//receber da mainwindow

void edit_component::mandarValores(QString ID,QString nome,QString quantidade,QString descricao)

{
    _id = ID;
    _nome = nome;
    _quantidade=quantidade;
    _descricao=descricao;

    ui->line_ID->setText(_id);

    ui->line_quantidade->setText(_quantidade);
     ui->line_Descricao->setText(_descricao);

   QString verificaComp = ui->comboBox_component->itemText(0);

   if(_nome == verificaComp){

     ui->comboBox_component->setCurrentText(nome);
   }else {
       ui->comboBox_component->setCurrentText(_nome);
   }





}


//

//retornar para mainwindow

QString edit_component::ID()
{
  return ui->line_ID->text();
}


QString edit_component::nome()
{
    return ui->comboBox_component->currentText();
}

QString edit_component::quantidade()
{
    return ui->line_quantidade->text();
}

QString edit_component::descricao()
{
    return ui->line_Descricao->text();
}


void edit_component::on_bt_edit_clicked()
{
    accept();
}

void edit_component::lertipos()
{
QFile inputFile("tipos.txt");

if (inputFile.open(QIODevice::ReadOnly))
{
    //QMessageBox::information(this,"consg","entrar");
    QTextStream out(&inputFile);
  while (!out.atEnd())

  {
     QString line = out.readLine();
    ui->comboBox_component->addItem (line);
  }
  inputFile.close();
    }
}
