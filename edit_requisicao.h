#ifndef EDIT_REQUISICAO_H
#define EDIT_REQUISICAO_H

#include <QDialog>

namespace Ui {
class edit_requisicao;
}

class edit_requisicao : public QDialog
{
    Q_OBJECT

public:
    explicit edit_requisicao(QWidget *parent = nullptr);
    ~edit_requisicao();

    void mandarValores(QString,QString,QString,QString,QString,QString,QString,QString);

    int funcaodiferenca();

    QString idauxiliar();


    int resDif;

    QString _id,_num,_nome,_databeg,_dataend,_tipocomp,_descr,_quant;

    QString idrequisicao();
    QString numaluno();
    QString nomealuno();
    QString dataBegin();
    QString dataEnd();
    QString tipocomponente();
    QString descricao();
    QString quantidade();
    //QString Ler_requisicao();
    void tipos_componentes();

    QString tipo_aux,tipo_aux2;
    QString id_aux, _quantidade,quantRequisitada;
    int quantDisponivel;
     QString quantDisp;
     QString atual;

private slots:
    void on_bt_addrequisicao_clicked();

    void on_pushButton_clicked();

    void on_comboBox_componente_currentTextChanged(QString);

    void on_comboBox_descricao_currentTextChanged(QString);





private:
    Ui::edit_requisicao *ui;
};

#endif // EDIT_REQUISICAO_H
