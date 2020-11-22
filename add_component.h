#ifndef ADD_COMPONENT_H
#define ADD_COMPONENT_H

#include <QDialog>
#include "mainwindow.h"

namespace Ui {
class add_component;
}

class add_component : public QDialog
{
    Q_OBJECT

public:
    explicit add_component(QWidget *parent = nullptr);

    ~add_component();


    QString nome() const;
    QString quantidade() const;
    QString descricao() const;
    void mandarID(QString);

    void sendFamily(QString);

    void saveFamily();
private slots:

    void on_bt_add_clicked();

    void on_btBox_clicked();


private:
    Ui::add_component *ui;

    QString _id,_family;
    QString teste;

    void lertipos();
    void guardarfamilias();

};

#endif // ADD_COMPONENT_H
