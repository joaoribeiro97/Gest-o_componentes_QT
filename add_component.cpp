//Include library
#include "add_component.h"
#include "ui_add_component.h"
#include "mainwindow.h"
#include "add_family.h"
#include <iostream>
#include <QStatusBar>
#include <QObject>
#include "user_login.h"
#include <qdebug.h>
#include <QFile>
#include <QMessageBox>
#include <QTextStream>
#include <QFileDialog>


add_component::add_component(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::add_component)
{
    ui->setupUi(this);
    ui->line_quantidade->setValidator( new QIntValidator);
    lertipos();
}
add_component::~add_component()
{
    delete ui;
}


void add_component::on_bt_add_clicked()
{
    //Ao adicionar verifica se tem todos os campos preenchidos
    if(nome() == "" || quantidade() == "" || descricao() == "")
    {
       QMessageBox::information(this,"Alerta", "Tem de introduzir valores");
    }else{
       guardarfamilias();
       accept();
    }
}

void add_component::mandarID(QString id)
{
   _id = id;
   ui->line_ID->setText(_id);
}

QString add_component::nome() const
{

return ui->comboBox_component->currentText();
}

QString add_component::quantidade() const
{
    ui->line_quantidade->setValidator( new QIntValidator(0,1000));
   return ui->line_quantidade->text();
}

QString add_component::descricao() const
{
 return ui->line_Descricao->text();
}

void add_component::on_btBox_clicked()
{
   add_family *add = new add_family();
   int res;
   add->setModal(true);
   add->setWindowTitle("Adicionar tipo componente");
   res = add->exec();
   if (res == QDialog::Rejected)
   return;

    _family = add->sendFamily();
    ui->comboBox_component->addItem(_family);
}

void add_component::lertipos()
{

QFile inputFile("tipos.txt");

    if (inputFile.open(QIODevice::ReadOnly))
    {
        QTextStream out(&inputFile);
        while (!out.atEnd())
        {
            QString line = out.readLine();
            ui->comboBox_component->addItem (line);
        }
    inputFile.close();
    }
}

void add_component::guardarfamilias()
{
    QFile data("tipos.txt");
    if (data.open(QFile::WriteOnly))
    {
       QTextStream out(&data);

       for (int i = 0; i < ui->comboBox_component->count(); i++)
       {
         out << ui->comboBox_component->itemText(i) << endl;
       }
    }
 }


