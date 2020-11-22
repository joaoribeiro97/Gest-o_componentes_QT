#ifndef ADD_REQUISICAO_H
#define ADD_REQUISICAO_H

#include <QDialog>
#include <mainwindow.h>

namespace Ui {
class add_requisicao;
}

class add_requisicao : public QDialog
{
    Q_OBJECT

public:
    explicit add_requisicao(QWidget *parent = nullptr);
    ~add_requisicao();



     QString a;
    void idrequisicao(QString);
    QString numaluno();
    QString nomealuno();
    QString dataBegin();
    QString dataEnd();
    QString tipocomponente();
    QString descricao();
    QString quantidade();
    QString idauxuliar();

    void utilizadores_req(QString num, QString nome);
    void tipos_componentes();


    QString tipo_aux;
    QString tipo_aux2;
    QString id_aux;



private slots:
    void on_pushButton_clicked();

    void on_bt_addrequisicao_clicked();

    void on_bt_calendario_clicked();  

    void on_comboBox_componente_currentTextChanged(QString);
    void on_comboBox_descricao_currentTextChanged(QString);




private:
    Ui::add_requisicao *ui;

    QString _id, _nome ,_num, _quantidade,quantRequisitada;
    int quantDisponivel;


};

#endif // ADD_REQUISICAO_H
