#include "component_form.h"
#include "ui_component_form.h"

Component_form::Component_form(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Component_form)
{
    ui->setupUi(this);
}

Component_form::~Component_form()
{
    delete ui;
}
