#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <cod_cores.h>
#include <QTableWidget>
#include "user_login.h"
#include "add_component.h"



QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT


public:
    MainWindow(QWidget *parent = nullptr);

    ~MainWindow();


       void saveFile();

       //void saveFileID();

       void saveFileRequisicao();

       void saveFileIDrequisicao();

       QString Ler_ID_requisicao();

       void Ler_txt_requisicao();

       void mandarRequisicao(QString,QString,QString,QString,QString,QString,QString,QString);

       void Adicionar_Requisicao();

       QString utilizadores(QString,QString);

       void lerutilizadornome();

       void Ler_txt_aux();

       QString idaux, _nomealuno;

       int lerNumReqClient(QString);

       QString nome_uti;

 private slots:

    void ShowDialogCod_Cores();

    void ShowDialogAdd_Remove();

    void ShowDialogAdd_Remove_requisicao();

    void closeEvent (QCloseEvent *event);

    void on_bt_logout_clicked();

    void on_bt_add_clicked();

    void Ler_txt();

    QString Ler_ID();

   void Remover_componente();

   void on_bt_edit_clicked();

   void resizeEvent(QResizeEvent *evt);

   void on_bt_menu_clicked();

   int on_bt_pdf_clicked();

   void on_bt_delete_clicked();

   void on_bt_gestaocomponentes_clicked();

   void on_bt_requesition_clicked();

   void on_bt_add_requisicao_clicked();

   void on_bt_cod_cores_clicked();

   void EditarComponente();

   void Adicionar_componente();

   void on_bt_edit_requisicao_clicked();

   void EditarRequisicao();

   void Remover_requisicao();

   void on_bt_delete_requisicao_clicked();

   void on_bt_utilizadores_clicked();

   void adicionarUtilizador();

  void Ler_utilizadores();

  void InicializarTableWidgetUtilizadores();

  void ShowDialogAdd_Remove_utilizadores();

  void adicionarquantidadearequisitar();

  QString Ler_qty_requisitada();

  QString Ler_qty_requisao_removida();

  void tipos_componentes();

  void on_comboBox_componente_currentTextChanged(QString);

  int lerNumRequisicaoTotal();

  int lerNumCompTotal();

  void on_bt_disponibilidade_clicked();

  void on_calendarWidget_selectionChanged();

  void lerQuantDisponivel();

  void on_bt_disponibilidade_2_clicked();

  void Ler_requisao_disponibilidade(QString);

  void centerposition_tablewidget_4();

  void on_pushButton_10_clicked();

  void on_bt_remove_user_clicked();

  void Remover_utilizador();

  void saveFileUtilizador();

  void Adicionar_utilizador();

  void on_bt_add_user_clicked();

  void inicializagestaocomponentes();

  void inicializaComponentes();

  QString Ler_qty_requisitadaFinal();

  void on_actionRequisi_o_triggered();

private:
    Ui::MainWindow *ui;
    User_Login *login;
    void resizeEvent(QResizeEvent evt); // declare The members
    cod_cores *cod_form;


    QString _id,_num,_nome,_dataBeg,_dataEnd,_tipoComp,_descr,_quant;

    QString _numeroaluno,_password;
    QString text_selected,qty_lida_txt,qty_total, id_selected ;
    QString tipo_aux, tipo_aux2, id_aux, _quantidade, quantRequisitada;
    QString dataSelecionada, quantInserida;
      int quantDisponivel;
    QString _numeroUtilizador, _nomeUtilizador, _passwordUtilizador;
    int _resultadoDif;
    QString _idAux;

    int qty_soma;

    void centerposition();

    void centerposition_requisicao();

    void centerposition_utilizadores();

    enum Coluna
    {
        ID_Row , Componente_Row, Quantidade_Row, Descricao_Row, QuantRequisitada_Row
    };


    enum Coluna2
    {
        ID_req , Num_req, Nome_req, Databeg_req, Dataend_req, tipoCom_req, descr_req, quant_req, id_comp
    };

    enum Coluna3
    {
        Numaluno , Nomealuno, Password
    };

    enum Coluna4
    {
       ID_Row2 , Componente_Row2, Quantidade_Row2, Descricao_Row2, QuantRequisitada_Row2
    };
};
#endif // MAINWINDOW_H
