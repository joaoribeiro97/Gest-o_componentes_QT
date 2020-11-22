#include "add_user.h"
#include "ui_add_user.h"
#include <QMessageBox>

add_user::add_user(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::add_user)
{
    ui->setupUi(this);
}

add_user::~add_user()
{
    delete ui;
}



QString add_user::numero()
{

   return ui->line_numero->text();
}


QString add_user::nome()
{

   return ui->line_nome->text();
}


QString add_user::password()
{

   return ui->line_passsword->text();
}

void add_user::on_bt_add_clicked()
{
    //Ao adicionar verifica se tem todos os campos preenchidos
    if(numero() == "" || nome() == "" || password() == "")
    {
       QMessageBox::information(this,"Alerta", "Tem de preencher os campos em vazio.");
    }else{

       accept();
    }
}
