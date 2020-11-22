#include "add_family.h"
#include "ui_add_family.h"
#include "add_component.h"
#include <QMessageBox>

add_family::add_family(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::add_family)
{
    ui->setupUi(this);
}

add_family::~add_family()
{
    delete ui;
}

void add_family::on_bt_family_clicked()
{
    if (ui->line_family->text()== "")
    {
        QMessageBox::information(this, "Alerta", "O campo 'família' não pode estar vazio. ");
        return;
    }
    accept();
}

QString add_family::sendFamily()
{
  return ui->line_family->text();
}
