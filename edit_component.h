#ifndef EDIT_COMPONENT_H
#define EDIT_COMPONENT_H

#include <QDialog>
#include "mainwindow.h"

namespace Ui {
class edit_component;
}

class edit_component : public QDialog
{
    Q_OBJECT

public:
    explicit edit_component(QWidget *parent = nullptr);
    ~edit_component();

    QString ID();
    QString nome();
    QString quantidade();
    QString descricao();
    void mandarValores(QString,QString,QString,QString);
private slots:
    void on_bt_edit_clicked();

private:
    Ui::edit_component *ui;

    QString _id,_nome,_quantidade,_descricao;


    void lertipos();

};

#endif // EDIT_COMPONENT_H
