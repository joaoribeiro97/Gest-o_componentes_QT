
//INCLUDE HEADERS
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "cod_cores.h"
#include "resistorcalc.h"
#include "Register.h"
#include "mainwindow.h"
#include "save_txt.h"
#include "user_login.h"
#include "add_component.h"
#include "edit_component.h"
#include "add_requisicao.h"
#include "edit_requisicao.h"
#include "add_user.h"

//INCLUDE LIBRARY'S
#include <QPixmap>
#include <iostream>
#include <QTextStream>
#include <QMessageBox>
#include <QCloseEvent>
#include <QFile>
#include <QFileDialog>
#include <QStringListModel>
#include <QDebug>
#include <QTableWidget>
#include <QTableWidgetItem>
#include <QAbstractItemView>
#include <QWindow>
#include <QModelIndex>
#include <QApplication>
#include <QDesktopWidget>
#include <QCoreApplication>
#include <qdebug.h>
#include <QDebug>
#include <QDate>
#include <QPrintDialog>
#include <QPrinter>
#include <QPainter>

using namespace std;

//Inicializa a MainWindow

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)

{
    ui->setupUi(this);
    //Inicializa a stackedwidget na pagina inicial pretendida
    ui->Sub_Menu->setCurrentIndex(0);

    QDateTime dateTime = dateTime.currentDateTime();
    QString dateTimeString = dateTime.toString("dd-MM-yyyy");
    ui->lb_date->setText(dateTimeString);

 //Invoca funções necessários no início do programa

 tipos_componentes();
 lerNumRequisicaoTotal();
 lerNumCompTotal();
 on_calendarWidget_selectionChanged();

 Ler_txt();
 ui->line_quantidade->setValidator( new QIntValidator);



}

//Funcao propria do qt
void MainWindow::resizeEvent(QResizeEvent *evt)
{

QMainWindow::resizeEvent(evt);

}

//Destrutor da MainWindow
MainWindow::~MainWindow()
{
    delete ui;
}

//Funcao closeEvent (Sair Software)
void MainWindow::closeEvent (QCloseEvent *event)
{

QMessageBox msgBox;
msgBox.setWindowTitle("Sair");
msgBox.setText(tr("\nDeseja sair?\n"));
QAbstractButton* pButtonYes = msgBox.addButton(tr("Sim"), QMessageBox::YesRole);
msgBox.addButton(tr("Não"), QMessageBox::NoRole);

msgBox.exec();

if (msgBox.clickedButton()==pButtonYes) {

     event ->accept();
}
     else {
event ->ignore();

}

}

//Voltar ao menu inicial
void MainWindow::on_bt_menu_clicked()
{

     ui->Sub_Menu->setCurrentIndex(0);
     ui->comboBox_componente->clear();
        tipos_componentes();
     lerNumRequisicaoTotal();
     lerNumCompTotal();
     Ler_txt();
     lerNumReqClient(_nomealuno);
}

//Calculadora de resistências
void MainWindow::on_bt_cod_cores_clicked()
{
    cod_cores *cod_Cores = new cod_cores();
    cod_Cores->exec();


}

// DIALOG WINDOWS CORES RESISTENCIAS
void MainWindow::ShowDialogCod_Cores()
{
  cod_form  = new cod_cores(this);
  cod_form->show();
}

//Funcao utilizadores que permite privilégios ao utilizador admin
QString MainWindow::utilizadores(QString num,QString nome)
{
    _numeroaluno = num;
    _nomealuno = nome;
   // qDebug () << _nomealuno;
    ui->lb_user_main->setText(_nomealuno);

    //Desativar botao gestao componentes
       if (_nomealuno == "admin")
       {
           ui->bt_gestaocomponentes->setEnabled(true);
           ui->bt_utilizadores->setEnabled(true);
       }
       else
       {
            ui->bt_gestaocomponentes->setEnabled(false);
            ui->bt_utilizadores->setEnabled(false);
       }
       return _nomealuno;
}

//Logout
void MainWindow::on_bt_logout_clicked()
{
    login = new User_Login();
    login->show();
    this->hide(); // Esconder MainWindow
}

// ---------------------------------------------- GESTAO COMPONENTES ELETRONICOS -------------------------------------------------------------

//Funcao que lê o ficheiro componentes.txt (principal)
void MainWindow::Ler_txt()
{


    QFile file("componentes.txt");
    if(!file.exists()){return;}
    int line_count = 0;
    QString line;
    QStringList line_data;
    if(file.open(QIODevice::ReadOnly)){
    while(!file.atEnd())
    {
        line=file.readLine();
        line_data=line.split(";", QString::SkipEmptyParts);
        //Adicionar Linha
        ui->tableWidget->insertRow(ui->tableWidget->rowCount());
        line_count= ui->tableWidget->rowCount() - 1;
    for(int j=0;j<line_data.size();j++)
    {
        QString m_prop=line_data.at(j);
        QTableWidgetItem *item=new QTableWidgetItem(m_prop);
        ui->tableWidget->setItem(line_count,j,item);
        ui->tableWidget->update();
    }
        line_count++;
    }
    }
}

//Funcao que le o ultimo id na ultima linha do ficheiro de texto
QString MainWindow::Ler_ID()
   {
QString idcomp;
    QFile data1("componentes.txt");
       if (!data1.open(QIODevice::ReadOnly | QIODevice::Text))
       {
           qDebug() << "componentes.txt file can't be opened...";
       }

        QTextStream line(&data1);

        QStringList list, listaux;

     while (!line.atEnd())
     {
        QString read_line = line.readLine();
        list = read_line.split(";");

        tipo_aux = list.at(0);
         qDebug() << "id" << tipo_aux;

        if (listaux.contains(tipo_aux)){}
        else {
            idcomp = tipo_aux;

        }

     }

    data1.close();
    return idcomp;

    }


// ---------------------------------------------------------------------- MAINWINDOW ----------------------------------------------------------

//Funcao que permite verificar se o componente esta disponivel para a data selecionada
void MainWindow::on_bt_disponibilidade_clicked()
{
    lerQuantDisponivel();


    QString componente = ui->comboBox_componente->currentText();
    QString descricao = ui->comboBox_descricao->currentText();
    QString quantidade = ui->line_quantidade->text();
    int quantidadeInt = quantidade.toInt();

   // qDebug() << "quantidade a requisitar" << quantidadeInt;

    QFile data1("componentes.txt");
       if (!data1.open(QIODevice::ReadOnly | QIODevice::Text))
       {
           qDebug() << "componentes.txt file can't be opened...";
       }

    QTextStream line(&data1);

    QStringList list;

    QString quantString;
    quantString = QString::number(quantidadeInt);


  while (!line.atEnd())
    {
        QString read_line = line.readLine();
        list = read_line.split(";");

        if ( /*list.contains(componente) && */list.contains(descricao) /*&& list.contains(dataSelecionada)*/)
        {

            if(quantidade == "")
            {
                 QMessageBox::information(this, "alerta", "Tem que introduzir uma quantidade.");
                 return;

            }
            else
            {
                if (quantidadeInt > quantDisponivel || quantDisponivel == 0)
                {
                    ui->lb_disponibilidade->setText("Não disponível");
                    ui->lb_disponibilidade->setStyleSheet("background: red; color: white; qproperty-alignment: AlignCenter; border-radius: 10px; font-weight: bold");

                }
                else
                {
                    ui->lb_disponibilidade->setText("Disponível");
                    ui->lb_disponibilidade->setStyleSheet("color: white; background: green; qproperty-alignment: AlignCenter; border-radius: 10px; font-weight: bold");

                }
            }
        }

  }

}

//Funcao que define o tipo de componentes na combobox
void MainWindow::tipos_componentes()
{
    QFile data1("componentes.txt");
       if (!data1.open(QIODevice::ReadOnly | QIODevice::Text))
       {
           qDebug() << "componentes.txt file can't be opened...";
       }

        QTextStream line(&data1);

        QStringList list, list_aux;

     while (!line.atEnd())
     {
        QString read_line = line.readLine();
        list = read_line.split(";");
        tipo_aux = list.at(1);

        if ( list_aux.contains(tipo_aux))
        {}
        else
        {
            list_aux.append((tipo_aux));
            ui->comboBox_componente->addItem(tipo_aux);
        }
     }
    data1.close();
 }

//Funcao que altera a descricao da combobox quando a combobox do componente é alterada.
void MainWindow::on_comboBox_componente_currentTextChanged(QString componenteIn)
{

        QString comp = componenteIn;
     //Quando se altera o valor da entrada do componente, fazemos uma clear à combobox da descricao.
        ui->comboBox_descricao->clear();

        QFile data1("componentes.txt");
           if (!data1.open(QIODevice::ReadOnly | QIODevice::Text))
           {
               qDebug() << "componentes.txt file can't be opened...";
           }

        QTextStream line(&data1);

        QStringList list, list_aux_descricao;

      while (!line.atEnd())
        {
            QString read_line = line.readLine();
            list = read_line.split(";");

            if ( list.contains(componenteIn))

            {

                tipo_aux2 = list.at(3);
                ui->comboBox_descricao->addItem(tipo_aux2);
            }

        }

data1.close();
}


//Funcao que le o numero total de requisicoes inseridas no sistema
int MainWindow::lerNumRequisicaoTotal()
{
    int count = 0;
    QString b = nullptr;
    QFile file("requisicao.txt");
        if(!file.exists()){}
       // int line_count = 0;

        if(file.open(QIODevice::ReadOnly)){
            while(!file.atEnd())
                {
                 count++;
                file.readLine();
                QString b = QString::number(count);
                ui->line_requisicao->setText(b);

                }

            }
return count;
}

// Inicializacao da table widget da requisicao com a data escolhida
void MainWindow::on_actionRequisi_o_triggered()
{
    ui->Sub_Menu->setCurrentIndex(2);

    //=================== TABLE =================
    QStringList titulos;

//Inicializacao da table widget
    ui->tableWidget_2->setColumnCount(9);
     titulos << "ID" << "Numero aluno" << "Nome aluno" << "Data inicio" << "Data fim"<< "Tipo componente" << "Descricao" << "Quantidade" << "IDcomp";
    ui->tableWidget_2->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableWidget_2->setHorizontalHeaderLabels(titulos);
    ui->tableWidget_2->resizeColumnsToContents();
    ui->tableWidget_2->setFocusPolicy(Qt::WheelFocus);
    ui->tableWidget_2->setColumnWidth(0,50);
    ui->tableWidget_2->setColumnWidth(1,100);
    ui->tableWidget_2->setColumnWidth(2,300);
    ui->tableWidget_2->setColumnWidth(3,100);
    ui->tableWidget_2->setColumnWidth(4,100);
    ui->tableWidget_2->setColumnWidth(5,250);
    ui->tableWidget_2->setColumnWidth(6,200);
    ui->tableWidget_2->setColumnWidth(7,200);
    ui->tableWidget_2->setColumnWidth(8,100);
    ui->tableWidget_2->verticalHeader()->setVisible(false);

ShowDialogAdd_Remove_requisicao();
centerposition_requisicao();
}

//Funcao que le o numero toral de componentes inseridos no sistema
int MainWindow::lerNumCompTotal()
{
    int count = 0;
    QString b = nullptr;
    QFile file("componentes.txt");
        if(!file.exists()){}

        if(file.open(QIODevice::ReadOnly)){
            while(!file.atEnd())
                {
                 count++;
                file.readLine();
                QString b = QString::number(count);
                ui->line_comp->setText(b);
                }
            }
return count;
}

//Funcao que le o numero toral de requisicoes do utilizador
int MainWindow::lerNumReqClient(QString nome_uti)
{
   QString utili_nome = nome_uti;

   qDebug() << "client" << utili_nome;

    QFile data1("requisicao.txt");
       if (!data1.open(QIODevice::ReadOnly | QIODevice::Text))
       {
           qDebug() << "text1.txt file can't be opened...";
       }

        QTextStream line(&data1);

        QStringList list;

    int count = 0;
    while (!line.atEnd())
    {

        QString read_line = line.readLine();

        list = read_line.split(";");

        if ( list.contains(utili_nome))

        {


       qty_lida_txt = list.at(2);
       count++;
       qDebug() << "qty_lida_txt" << qty_lida_txt;
       QString b = QString::number(count);
       ui->line_requisicao_utilizador->setText(b);
        }
    }
    data1.close();

    return count;


}

//inicializa a tablewidget da gestao componentes
void MainWindow::inicializagestaocomponentes()
{

    //=================== TABLE =================
    QStringList titulos;


//Inicializacao da table widget
    ui->tableWidget->setColumnCount(5);
     titulos << "ID" << "Componente" << "Quantidade" << "Descrição" <<"Quantidade Requisitada";
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableWidget->setHorizontalHeaderLabels(titulos);
    ui->tableWidget->resizeColumnsToContents();
    ui->tableWidget->setFocusPolicy(Qt::WheelFocus);
    ui->tableWidget->setColumnWidth(0,50);
    ui->tableWidget->setColumnWidth(1,200);
    ui->tableWidget->setColumnWidth(2,100);
    ui->tableWidget->setColumnWidth(3,400);
    ui->tableWidget->setColumnWidth(4,200);
    ui->tableWidget->verticalHeader()->setVisible(false);

  ui->Sub_Menu->setCurrentIndex(1);
  ShowDialogAdd_Remove();

centerposition();
}

//------------------------------------------------------------- GESTAO COMPONENTES -----------------------------------------------------------------------------------------------

void MainWindow::inicializaComponentes()
{
    //=================== TABLE =================
    QStringList titulos;


//Inicializacao da table widget
    ui->tableWidget->setColumnCount(5);
     titulos << "ID" << "Componente" << "Quantidade" << "Descrição" <<"Quantidade Requisitada";
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableWidget->setHorizontalHeaderLabels(titulos);
    ui->tableWidget->resizeColumnsToContents();
    ui->tableWidget->setFocusPolicy(Qt::WheelFocus);
    ui->tableWidget->setColumnWidth(0,50);
    ui->tableWidget->setColumnWidth(1,200);
    ui->tableWidget->setColumnWidth(2,100);
    ui->tableWidget->setColumnWidth(3,400);
    ui->tableWidget->setColumnWidth(4,200);
    ui->tableWidget->verticalHeader()->setVisible(false);

    ui->Sub_Menu->setCurrentIndex(2);
    ShowDialogAdd_Remove();

  centerposition();
}

//inicializa a pagina Gestao Componentes
void MainWindow::on_bt_gestaocomponentes_clicked()
{
inicializagestaocomponentes();
}

// DIALOG WINDOW - inicializa a table widget com uma limpeza e leitura do ficheiro de texto
void MainWindow::ShowDialogAdd_Remove()
{
    while (ui->tableWidget->rowCount() > 0)
    {
        ui->tableWidget->removeRow(0);
    }

    //Funcao que le o ficheiro componentes.txt
     Ler_txt();
}

//Funcao que centra o texto da tablewidget
void MainWindow::centerposition()
{

    for( int r = 0; r < ui->tableWidget->rowCount(); ++r )
    {

        for( int c = 0; c < ui->tableWidget->columnCount(); ++c )
        {
            //Centrar todos os elementos no meio da tablewidget
            ui->tableWidget->item(r,c)->setTextAlignment(Qt::AlignCenter);
        }
    }
}

// ADICIONAR COMPONENTE - abre outra dialog
void MainWindow::on_bt_add_clicked()
{
   Adicionar_componente();
}

// Editar componente
void MainWindow::on_bt_edit_clicked()
{
    EditarComponente();
}

//Remover componente
void MainWindow::on_bt_delete_clicked()
{
    Remover_componente();
}

//Funcao que adiciona componente
void MainWindow::Adicionar_componente()
{
    //variavel que retorna o valor lido na ultima linha do ficheiro de texto
     QString idread = Ler_ID();
    //conversao da variavel qstring para int
     int id_row = idread.toInt();
    //auto incremente da variavel id
     int id = ++id_row;

     QString nome, quantidade, descricao;

     int res;
     int fila;

     add_component *pd= new add_component();

     QString id_inc = QString::number(id);
     pd->mandarID(id_inc);
     pd->setModal(true);
     pd->setWindowTitle("Componentes");
     res = pd->exec();

     if (res == QDialog::Rejected)

          return;

     nome = pd->nome();
     quantidade = pd->quantidade();
     descricao = pd->descricao();


     ui->tableWidget->insertRow(ui->tableWidget->rowCount());
     fila = ui->tableWidget->rowCount() -1;
     ui->tableWidget->setItem(fila, ID_Row, new QTableWidgetItem(id_inc));
     ui->tableWidget->setItem(fila, Componente_Row, new QTableWidgetItem(nome));
     ui->tableWidget->setItem(fila, Quantidade_Row, new QTableWidgetItem(quantidade));
     ui->tableWidget->setItem(fila, Descricao_Row, new QTableWidgetItem(descricao));
     ui->tableWidget->setItem(fila, QuantRequisitada_Row, new QTableWidgetItem(0));
     saveFile();
     //saveFileID();
     centerposition();



}

//Funcao que edita o componente selecionado
void MainWindow::EditarComponente()
{
    int selected = ui->tableWidget->currentRow();

    if (selected == -1)
    {

        QMessageBox::information(this,"ALERTA", "Precisa de selecionar um componente.");
    }else{


//Variavel res que verifica se consegue abrir o dialog do edit_component
    int res;
//Variavel selected que retorna o numero da linha corrente da tablewidget
     int selected = ui->tableWidget->currentRow();
//Variavies ID,nome,quantidade,descricao irao ser enviadas por paramentro na funcao mandarvalores()
//para a dialog edit_component
        QString ID = ui->tableWidget->item(selected,0)->text();
        QString nome = ui->tableWidget->item(selected,1)->text();
        QString quantidade = ui->tableWidget->item(selected,2)->text();
        QString descricao = ui->tableWidget->item(selected,3)->text();


       edit_component *edit_Component = new edit_component();
       edit_Component->mandarValores(ID,nome,quantidade,descricao);

       edit_Component->setWindowTitle("Componentes");
       edit_Component->setModal(true);

       res = edit_Component->exec();

       if (res == QDialog::Rejected)

            return;

       ID = edit_Component->ID();
       nome = edit_Component->nome();
       quantidade = edit_Component->quantidade();
       descricao = edit_Component->descricao();

   ui->tableWidget->setItem(selected, ID_Row, new QTableWidgetItem(ID));
   ui->tableWidget->setItem(selected, Componente_Row, new QTableWidgetItem(nome));
   ui->tableWidget->setItem(selected, Quantidade_Row, new QTableWidgetItem(quantidade));
   ui->tableWidget->setItem(selected,Descricao_Row,new QTableWidgetItem(descricao));
   ui->tableWidget->reset();
   saveFile();
   centerposition();
    }
}

//Funcao que remove o componente selecionado
void MainWindow::Remover_componente()
{
    int selected = ui->tableWidget->currentRow();

    if (selected == -1)
    {

        QMessageBox::information(this,"ALERTA", "Precisa de selecionar um componente.");
    }else{


    QMessageBox msgBox;
    msgBox.setWindowTitle("Remover");
    msgBox.setText(tr("\nTem a certeza que pretende remover?\n"));
    QAbstractButton* pButtonYes = msgBox.addButton(tr("Sim"), QMessageBox::YesRole);
    msgBox.addButton(tr("Não"), QMessageBox::NoRole);

    msgBox.exec();

    if (msgBox.clickedButton()==pButtonYes) {

       ui->tableWidget->removeRow(selected);
       ui->tableWidget->reset();
       Ler_ID();
       saveFile();
       centerposition();

        }
         else {
   ui->Sub_Menu->setCurrentIndex(1);

              }
    }

}

//Guardar ficheiro principal componentes.txt
void MainWindow::saveFile()
{

   QFile Update_txt("componentes.txt");

    if (Update_txt.open(QFile::WriteOnly | QFile::Truncate))
    {
        QTextStream data( &Update_txt );
        QStringList strList;

        data << strList.join(';') ;
        for( int r = 0; r < ui->tableWidget->rowCount(); ++r )
        {
            strList.clear();
            for( int c = 0; c < ui->tableWidget->columnCount(); ++c )
            {   QTableWidgetItem* item = ui->tableWidget->item(r,c);        //Load items
                if (!item || item->text().isEmpty())                        //Test if there is something at item(r,c)
                {
                    ui->tableWidget->setItem(r,c,new QTableWidgetItem("0"));//IF there is nothing write 0
                }
                strList << ui->tableWidget->item( r, c )->text();

            }
            data << strList.join( ';' )+ ";"+"\n";

        }
        statusBar()->showMessage(tr("Ficheiro Atualizado com Sucesso!"), 2000);
        Update_txt.close();
    }


}

//Imprimir em formato PDF
int MainWindow::on_bt_pdf_clicked()
{

    //    QPrinter *impressora;
    //    QPrintDialog pd;
    //    if (pd.exec() == QDialog::Rejected)
    //    return;
    //    impressora = pd.printer();
    //   // impressora->setOutputFormat(QPrinter::PdfFormat);
    //    //impressora->setOutputFileName("D:/teste.pdf");

    //    ui->textEdit->print(impressora);


        QPrinter printer;
             printer.setOutputFormat(QPrinter::PdfFormat);
             printer.setOutputFileName("D:/teste.pdf");
             QPainter painter;
             if (! painter.begin(&printer)) { // failed to open file
                 qWarning("failed to open file, is it writable?");
                 return 1;
             }
             //escreve primeira pagina
             painter.drawText(10, 10, "Test");
             //adicionar pagina
             if (! printer.newPage()) {
                 qWarning("failed in flushing page to disk, disk full?");
                 return 1;
             }
             painter.drawText(10, 10, "Test 2");
             painter.end();
             return 0 ;

}

// -----------------------------------------------------------------  REQUISICAO ----------------------------------------------------------------//

//Funcao que lê o ficheiro requisicao.txt (principal)
void MainWindow::Ler_txt_requisicao()
{
    QFile file("requisicao.txt");
    if(!file.exists()){return;}
    int line_count = 0;
    QString line;
    QStringList line_data;
    if(file.open(QIODevice::ReadOnly)){
    while(!file.atEnd())
    {
        line=file.readLine();
        line_data=line.split(";", QString::SkipEmptyParts);
        //Adicionar Linha
        ui->tableWidget_2->insertRow(ui->tableWidget_2->rowCount());
        line_count= ui->tableWidget_2->rowCount() - 1;
    for(int j=0;j<line_data.size();j++)
    {
        QString m_prop=line_data.at(j);
        QTableWidgetItem *item=new QTableWidgetItem(m_prop);
        ui->tableWidget_2->setItem(line_count,j,item);
        ui->tableWidget_2->update();
    }
        line_count++;
    }
    }
}

//Funcao que le o ultimo id na ultima linha do ficheiro de texto
QString MainWindow::Ler_ID_requisicao()
   {

    QString idreq;
        QFile data1("requisicao.txt");
           if (!data1.open(QIODevice::ReadOnly | QIODevice::Text))
           {
               qDebug() << "componentes.txt file can't be opened...";
           }

            QTextStream line(&data1);

            QStringList list, listaux;

         while (!line.atEnd())
         {
            QString read_line = line.readLine();
            list = read_line.split(";");

            tipo_aux = list.at(0);
             qDebug() << "id" << tipo_aux;

            if (listaux.contains(tipo_aux)){}
            else {
                idreq = tipo_aux;

            }

         }

        data1.close();
        return idreq;
    }

//Funcao que lê a quantidade requisitada de um componente em especifico no ficheiro componentes.txt quando é adicionada uma requisicao
QString MainWindow::Ler_qty_requisitada()
   {
    QFile data1("componentes.txt");
       if (!data1.open(QIODevice::ReadOnly | QIODevice::Text))
       {
           qDebug() << "text1.txt file can't be opened...";
       }

        QTextStream line(&data1);

        QStringList list;


    while (!line.atEnd())
    {

        QString read_line = line.readLine();

        list = read_line.split(";");

        if ( list.contains(idaux))
        {
       qty_lida_txt = list.at(4);

      // qDebug() << "qty_lida_txt" << qty_lida_txt;

        }
    }
    data1.close();

    return(qty_lida_txt);
    }

//Funcao que lê a quantidade requisitada de um componente em especifico no ficheiro componentes.txt quando uma requisicao é editada.
QString MainWindow::Ler_qty_requisitadaFinal()
   {
    QFile data1("componentes.txt");
       if (!data1.open(QIODevice::ReadOnly | QIODevice::Text))
       {
           qDebug() << "text1.txt file can't be opened...";
       }

        QTextStream line(&data1);

        QStringList list;


    while (!line.atEnd())
    {

        QString read_line = line.readLine();

        list = read_line.split(";");

        if ( list.contains(_idAux))
        {
       qty_lida_txt = list.at(4);

      // qDebug() << "qty_lida_txt" << qty_lida_txt;

        }
    }
    data1.close();

    return(qty_lida_txt);
    }

//Funcao que lê a quantidade requisitada de um componente em especifico no ficheiro componentes.txt quando uma requisicao é removida.
QString MainWindow::Ler_qty_requisao_removida()
   {
    QFile data1("componentes.txt");
       if (!data1.open(QIODevice::ReadOnly | QIODevice::Text))
       {
           qDebug() << "text1.txt file can't be opened...";
       }

        QTextStream line(&data1);

        QStringList list;


    while (!line.atEnd())
    {

        QString read_line = line.readLine();

        list = read_line.split(";");

        if ( list.contains(id_selected))
        {
       qty_lida_txt = list.at(4);

       //qDebug() << "qty_lida_txt" << qty_lida_txt;

        }
    }
    data1.close();

    return(qty_lida_txt);
    }

//Funcao que limpa a tablewidget das requisições e lê novamente o ficheiro requisicao.txt
void MainWindow::ShowDialogAdd_Remove_requisicao()
{
    while (ui->tableWidget_2->rowCount() > 0)
    {
        ui->tableWidget_2->removeRow(0);
    }

     Ler_txt_requisicao();

}

//Funcao que centra toda a informação da tablewidget da requisição
void MainWindow::centerposition_requisicao()
{

    for( int r = 0; r < ui->tableWidget_2->rowCount(); ++r )
    {

        for( int c = 0; c < ui->tableWidget_2->columnCount(); ++c )
        {
            //Centrar todos os elementos no meio da tablewidget
            ui->tableWidget_2->item(r,c)->setTextAlignment(Qt::AlignCenter);


        }
    }
}

// ADICIONAR REQUISICAO - abre outra dialog
void MainWindow::on_bt_add_requisicao_clicked()
{
    inicializaComponentes();
    Adicionar_Requisicao();

}

//Funcao que adiciona requisicao
void MainWindow::Adicionar_Requisicao()
{

    //variavel que retorna o valor lido na ultima linha do ficheiro de texto
     QString idread = Ler_ID_requisicao();


    //conversao da variavel qstring para int
     int id_row = idread.toInt();
    //auto incremente da variavel id
     int id = ++id_row;

     int fila, res;


     add_requisicao *requisicao = new add_requisicao();

     QString _id_inc = QString::number(id);
     requisicao->idrequisicao(_id_inc);

     requisicao->utilizadores_req(_numeroaluno,_nomealuno);


     //requisicao->setModal(true);
     requisicao->setWindowTitle("Requisicao");
     requisicao->setModal(true);
     res = requisicao->exec();

     if (res == QDialog::Rejected)

         return;
     _num =requisicao->numaluno();
     _nome = requisicao->nomealuno();
     _dataBeg=requisicao->dataBegin();
     _dataEnd=requisicao->dataEnd();
     _tipoComp=requisicao->tipocomponente();
     _descr=requisicao->descricao();
     _quant=requisicao->quantidade();
     idaux=requisicao->idauxuliar();

     adicionarquantidadearequisitar();

     ui->tableWidget_2->insertRow(ui->tableWidget_2->rowCount());
     fila = ui->tableWidget_2->rowCount() -1;
     ui->tableWidget_2->setItem(fila, ID_req, new QTableWidgetItem(_id_inc));
     ui->tableWidget_2->setItem(fila, Num_req, new QTableWidgetItem(_num));
     ui->tableWidget_2->setItem(fila, Nome_req, new QTableWidgetItem(_nome));
     ui->tableWidget_2->setItem(fila, Databeg_req, new QTableWidgetItem(_dataBeg));
     ui->tableWidget_2->setItem(fila, Dataend_req, new QTableWidgetItem(_dataEnd));
     ui->tableWidget_2->setItem(fila, tipoCom_req, new QTableWidgetItem(_tipoComp));
     ui->tableWidget_2->setItem(fila, descr_req, new QTableWidgetItem(_descr));
     ui->tableWidget_2->setItem(fila, quant_req, new QTableWidgetItem(_quant));
     ui->tableWidget_2->setItem(fila, id_comp, new QTableWidgetItem(idaux));

     saveFileRequisicao();
     saveFileIDrequisicao();
     centerposition_requisicao();


}

// Adicionar quantidade a requisitar e mostra o valor na quantidade requisitada na gestao componentes.
void MainWindow::adicionarquantidadearequisitar()
     {

      for( int r = 0; r < ui->tableWidget->rowCount(); ++r )
      {

          int c = 0;
          {
              QTableWidgetItem *item = ui->tableWidget->item(r,c);

              if ( item->text() == idaux )
              {

                   //ver linha
                   int b= item->row();

                   QString qty_r = Ler_qty_requisitada();

                    qty_soma = _quant.toInt()  + qty_r.toInt();

                    qty_total = QString::number(qty_soma);

                  ui->tableWidget->setItem(b, QuantRequisitada_Row, new QTableWidgetItem(qty_total));
               //   qDebug() << "adicionei quantidade a requisitar" << qty_total;
              }
          }

    }

    saveFile();
   }

// Editar requisicão
void MainWindow::on_bt_edit_requisicao_clicked()
{
    inicializaComponentes();
   EditarRequisicao();

}

//Funcao que edita o componente selecionado
void MainWindow::EditarRequisicao()
{

    int selected = ui->tableWidget_2->currentRow();

    if (selected == -1)
    {

        QMessageBox::information(this,"ALERTA", "Precisa de selecionar uma requisição.");
    }else{

     int res;
//Variavel selected que retorna o numero da linha corrente da tablewidget
     int selected = ui->tableWidget_2->currentRow();
//Variavies ID,nome,quantidade,descricao irao ser enviadas por paramentro na funcao mandarvalores()
//para a dialog edit_component

        QString id_req = ui->tableWidget_2->item(selected,0)->text();
        QString num = ui->tableWidget_2->item(selected,1)->text();
        QString nome = ui->tableWidget_2->item(selected,2)->text();
        QString databeg = ui->tableWidget_2->item(selected,3)->text();
        QString dataend = ui->tableWidget_2->item(selected,4)->text();
        QString tipocomp = ui->tableWidget_2->item(selected,5)->text();
        QString descr = ui->tableWidget_2->item(selected,6)->text();
        QString quant = ui->tableWidget_2->item(selected,7)->text();
        QString id_comp_req = ui->tableWidget_2->item(selected,8)->text();

        edit_requisicao *editrequisicao = new edit_requisicao();
        editrequisicao->mandarValores(id_req,num,nome,databeg,dataend,tipocomp,descr,quant);
        editrequisicao->setWindowTitle("Editar requisicao");
        editrequisicao->setModal(true);
        res = editrequisicao->exec();

        if (res == QDialog::Rejected)

             return;

       _id = editrequisicao->idrequisicao();
       _num =editrequisicao->numaluno();
       _nome = editrequisicao->nomealuno();
       _dataBeg=editrequisicao->dataBegin();
       _dataEnd=editrequisicao->dataEnd();
       _tipoComp=editrequisicao->tipocomponente();
       _descr=editrequisicao->descricao();
       _quant=editrequisicao->quantidade();
       _idAux = editrequisicao->idauxiliar();
       _resultadoDif = editrequisicao->funcaodiferenca();

   ui->tableWidget_2->setItem(selected, ID_req, new QTableWidgetItem(_id));
   ui->tableWidget_2->setItem(selected, Num_req, new QTableWidgetItem(_num));
   ui->tableWidget_2->setItem(selected, Nome_req, new QTableWidgetItem(_nome));
   ui->tableWidget_2->setItem(selected, Databeg_req, new QTableWidgetItem(_dataBeg));
   ui->tableWidget_2->setItem(selected, Dataend_req, new QTableWidgetItem(_dataEnd));
   ui->tableWidget_2->setItem(selected, tipoCom_req, new QTableWidgetItem(_tipoComp));
   ui->tableWidget_2->setItem(selected, descr_req, new QTableWidgetItem(_descr));
   ui->tableWidget_2->setItem(selected, quant_req, new QTableWidgetItem(_quant));
   ui->tableWidget_2->setItem(selected, id_comp, new QTableWidgetItem(_idAux));

   for( int r = 0; r < ui->tableWidget->rowCount(); ++r )
   {

       int c = 0;
       {
           QTableWidgetItem *item = ui->tableWidget->item(r,c);

           if ( item->text() == _idAux )
           {    //qDebug () << "_idAux" << _idAux;

                //ver linha
                int b= item->row();

                   QString qty_r = Ler_qty_requisitadaFinal();

                 qty_soma = _quant.toInt()  + qty_r.toInt();

                 qty_soma = _resultadoDif + qty_r.toInt() ;
                 //qDebug () << "resultado final" << qty_soma;

                 qty_total = QString::number(qty_soma);
                //qDebug () << "resultado final" << qty_total;

               ui->tableWidget->setItem(b, QuantRequisitada_Row, new QTableWidgetItem(qty_total));
            //   qDebug() << "adicionei quantidade a requisitar" << qty_total;
           }
 }

 }
   saveFile();
   ui->tableWidget_2->reset();
   saveFileRequisicao();
   centerposition_requisicao();
    }
}

//Eliminar requisicao
void MainWindow::on_bt_delete_requisicao_clicked()
{
    inicializaComponentes();
    Remover_requisicao();
   // saveFileIDrequisicao();
}

//Funcao que remove o componente selecionado
void MainWindow::Remover_requisicao()
{

    int selected = ui->tableWidget_2->currentRow();

      if (selected == -1 )
        {

             QMessageBox::information(this,"ALERTA", "Precisa de selecionar uma requisição.");
        }else{
             QTableWidgetItem *item1(ui->tableWidget_2->item(selected,7));
             QTableWidgetItem *item2(ui->tableWidget_2->item(selected,8));

             id_selected = item2->text();
             text_selected = item1->text();
              qDebug () << " id_selected" << id_selected;
              qDebug () << " text_selected_ antes" << text_selected;


            QMessageBox msgBox;
            msgBox.setWindowTitle("Remover");
            msgBox.setText(tr("\nTem a certeza que pretende remover?\n"));
            QAbstractButton* pButtonYes = msgBox.addButton(tr("Sim"), QMessageBox::YesRole);
            msgBox.addButton(tr("Não"), QMessageBox::NoRole);
            msgBox.exec();


    for( int r = 0; r < ui->tableWidget->rowCount(); ++r )
    {

        int c = 0;
        {
            QTableWidgetItem *item = ui->tableWidget->item(r,c);


            if ( item->text() == id_selected )
            {

                int b= item->row();

                 QString qty_r = Ler_qty_requisao_removida();
                    qDebug() <<"qtr_r" <<qty_r;
                 //valor quantidade requisitada da celula a remover
                 int text_int = text_selected.toInt();
                 //int qty = qty_total.toInt();

                int qty = qty_r.toInt() - text_int;

                QString qty_total2 = QString::number(qty);

                 qDebug() <<"quantidade requisitda excluida" << qty_total2;

                 ui->tableWidget->setItem(b, QuantRequisitada_Row, new QTableWidgetItem(qty_total2));
            }
       }
  }

    if (msgBox.clickedButton()==pButtonYes) {
        //Execute command

        //text_selected - contem valor da remoção
        //qty_total - valor final da requisicao



       ui->tableWidget_2->removeRow(selected);
       ui->tableWidget_2->reset();

       saveFile();
       saveFileRequisicao();
       centerposition();

    }
         else {
   ui->Sub_Menu->setCurrentIndex(2);

            }

    }

}

//Botão que mostra calendario ao utilizador
void MainWindow::on_bt_requesition_clicked()
{
     ui->Sub_Menu->setCurrentIndex(2);

     //=================== TABLE =================
     QStringList titulos;


 //Inicializacao da table widget
     ui->tableWidget_2->setColumnCount(9);
      titulos << "ID" << "Numero aluno" << "Nome aluno" << "Data inicio" << "Data fim"<< "Tipo componente" << "Descricao" << "Quantidade" << "IDcomp";
     ui->tableWidget_2->setSelectionBehavior(QAbstractItemView::SelectRows);
     ui->tableWidget_2->setHorizontalHeaderLabels(titulos);
     ui->tableWidget_2->resizeColumnsToContents();
     ui->tableWidget_2->setFocusPolicy(Qt::WheelFocus);
     ui->tableWidget_2->setColumnWidth(0,50);
     ui->tableWidget_2->setColumnWidth(1,100);
     ui->tableWidget_2->setColumnWidth(2,300);
     ui->tableWidget_2->setColumnWidth(3,100);
     ui->tableWidget_2->setColumnWidth(4,100);
     ui->tableWidget_2->setColumnWidth(5,250);
     ui->tableWidget_2->setColumnWidth(6,200);
     ui->tableWidget_2->setColumnWidth(7,200);
     ui->tableWidget_2->setColumnWidth(8,100);
     ui->tableWidget_2->verticalHeader()->setVisible(false);


   // connect(ui->bt_gestaocomponentes,SIGNAL(released()),this,SLOT(ShowDialogAdd_Remove()));

ShowDialogAdd_Remove_requisicao();


 centerposition_requisicao();
}

//Funcao que guardar o ficheiro principal requisicao.txt
void MainWindow::saveFileRequisicao()
{


   QFile Update_txt("requisicao.txt");


    if (Update_txt.open(QFile::WriteOnly | QFile::Truncate))
    {
        QTextStream data( &Update_txt );
        QStringList strList;

        data << strList.join(';') ;
        for( int r = 0; r < ui->tableWidget_2->rowCount(); ++r )
        {
            strList.clear();
            for( int c = 0; c < ui->tableWidget_2->columnCount(); ++c )
            {   QTableWidgetItem* item = ui->tableWidget_2->item(r,c);        //Load items
                if (!item || item->text().isEmpty())                        //Test if there is something at item(r,c)
                {
                    ui->tableWidget_2->setItem(r,c,new QTableWidgetItem("0"));//IF there is nothing write 0
                }
                strList << ui->tableWidget_2->item( r, c )->text();

            }
            data << strList.join( ';' )+ ";"+"\n";

        }
        statusBar()->showMessage(tr("Ficheiro Atualizado com Sucesso!"), 2000);
        Update_txt.close();
    }


}

//Funcao que guardar o ID da requisicao idrequisicao.txt
void MainWindow::saveFileIDrequisicao()
{


   QFile Update_txt("idrequisicao.txt");


    if (Update_txt.open(QFile::WriteOnly | QFile::Truncate))
    {
        QTextStream data( &Update_txt );
        QStringList strList;

        data << strList.join(';') ;
        for( int r = 0; r < ui->tableWidget_2->rowCount(); ++r )
        {
            strList.clear();
            int c = 0;
            {   QTableWidgetItem* item = ui->tableWidget_2->item(r,c);        //Load items
                if (!item || item->text().isEmpty())                        //Test if there is something at item(r,c)
                {
                    ui->tableWidget_2->setItem(r,c,new QTableWidgetItem("0"));//IF there is nothing write 0
                }
                strList << ui->tableWidget_2->item( r, c )->text();

            }
            data << strList.join( ';' )+ "\n";

        }
        statusBar()->showMessage(tr("Ficheiro Atualizado com Sucesso!"), 2000);
        Update_txt.close();
    }
}


//---------------------------------------------------------------UTILIZADORES ---------------------------------------------------------------------

//Botão que mostra a pagina utilizador
void MainWindow::on_bt_utilizadores_clicked()
{

InicializarTableWidgetUtilizadores();
ShowDialogAdd_Remove_utilizadores();
}

//Funcao que inicializa a tablewidget da pagina Utilizador
void MainWindow::InicializarTableWidgetUtilizadores()
{
    ui->Sub_Menu->setCurrentIndex(3);

     QStringList titulos;
    //Inicializacao da table widget
        ui->tableWidget_3->setColumnCount(3);
         titulos << "Número aluno" << "Nome do aluno" << "Password";
        ui->tableWidget_3->setSelectionBehavior(QAbstractItemView::SelectRows);
        ui->tableWidget_3->setHorizontalHeaderLabels(titulos);
        ui->tableWidget_3->resizeColumnsToContents();
        ui->tableWidget_3->setFocusPolicy(Qt::WheelFocus);
        ui->tableWidget_3->setColumnWidth(0,200);
        ui->tableWidget_3->setColumnWidth(1,300);
        ui->tableWidget_3->setColumnWidth(2,200);
        ui->tableWidget_3->verticalHeader()->setVisible(false);
}

//Funcao que limpa a tabelwidget utilizador
void MainWindow::ShowDialogAdd_Remove_utilizadores()
{
    while (ui->tableWidget_3->rowCount() > 0)
    {
        ui->tableWidget_3->removeRow(0);
    }

     Ler_utilizadores();
     centerposition_utilizadores();

}

//Funcao que centra a tablewidget da pagina utilizadores
void MainWindow::centerposition_utilizadores()
{

    for( int r = 0; r < ui->tableWidget_3->rowCount(); ++r )
    {

        for( int c = 0; c < ui->tableWidget_3->columnCount(); ++c )
        {
            //Centrar todos os elementos no meio da tablewidget
            ui->tableWidget_3->item(r,c)->setTextAlignment(Qt::AlignCenter);
        }
    }
}

//Funcao que lê o ficheiro utilizadores.txt
void MainWindow::Ler_utilizadores()
{
    QFile file("utilizadores.txt");
    if(!file.exists()){return;}
    int line_count = 0;
    QString line;
    QStringList line_data;
    if(file.open(QIODevice::ReadOnly)){
    while(!file.atEnd())
    {
        line=file.readLine();
        line_data=line.split(";", QString::SkipEmptyParts);
        //Adicionar Linha
        ui->tableWidget_3->insertRow(ui->tableWidget_3->rowCount());
        line_count= ui->tableWidget_3->rowCount() - 1;
    for(int j=0;j<line_data.size();j++)
    {
        QString m_prop=line_data.at(j);
        QTableWidgetItem *item=new QTableWidgetItem(m_prop);
        ui->tableWidget_3->setItem(line_count,j,item);
        ui->tableWidget_3->update();
    }
        line_count++;
    }
    }
}

//Funcao que permite adicionar utilizadores
void MainWindow::adicionarUtilizador()
{
    int fila;

    ui->tableWidget_3->insertRow(ui->tableWidget_3->rowCount());
    fila = ui->tableWidget->rowCount() -1;
    ui->tableWidget_3->setItem(fila, Numaluno, new QTableWidgetItem(_numeroaluno));
    ui->tableWidget_3->setItem(fila, Nomealuno, new QTableWidgetItem(_nomealuno));
    ui->tableWidget_3->setItem(fila, Password, new QTableWidgetItem(_password));


}

//Botao para adicionar utilizador
void MainWindow::on_bt_add_user_clicked()
{
    Adicionar_utilizador();
}

//Funcao que permite adionar utilizador
void MainWindow::Adicionar_utilizador()
{


     QString nome, quantidade, descricao;

     int res;
     int fila;

     add_user *user= new add_user();

     user->setModal(true);
     user->setWindowTitle("Utilizadores");
     res = user->exec();

     if (res == QDialog::Rejected)

          return;

     _numeroUtilizador = user->numero();
     _nomeUtilizador = user->nome();
     _passwordUtilizador = user->password();


     ui->tableWidget_3->insertRow(ui->tableWidget_3->rowCount());
     fila = ui->tableWidget_3->rowCount() -1;
     ui->tableWidget_3->setItem(fila, ID_Row, new QTableWidgetItem(_numeroUtilizador));
     ui->tableWidget_3->setItem(fila, Componente_Row, new QTableWidgetItem(_nomeUtilizador));
     ui->tableWidget_3->setItem(fila, Quantidade_Row, new QTableWidgetItem(_passwordUtilizador));
     saveFileUtilizador();
     centerposition_utilizadores();
}


//Botao que permite remover utilizador
void MainWindow::on_bt_remove_user_clicked()
{
Remover_utilizador();
}

//Funcao que remove o utilizador selecionado
void MainWindow::Remover_utilizador()
{
    int selected = ui->tableWidget_3->currentRow();

    if (selected == -1)
    {

        QMessageBox::information(this,"ALERTA", "Precisa de selecionar um utilizador.");
    }else{


    QMessageBox msgBox;
    msgBox.setWindowTitle("Remover");
    msgBox.setText(tr("\nTem a certeza que pretende remover?\n"));
    QAbstractButton* pButtonYes = msgBox.addButton(tr("Sim"), QMessageBox::YesRole);
    msgBox.addButton(tr("Não"), QMessageBox::NoRole);

    msgBox.exec();

    if (msgBox.clickedButton()==pButtonYes) {

       ui->tableWidget_3->removeRow(selected);
       ui->tableWidget_3->reset();
       saveFileUtilizador();

       centerposition();

        }
         else {
   ui->Sub_Menu->setCurrentIndex(3);

              }
    }

}


//Guardar ficheiro utilizadores.txt
void MainWindow::saveFileUtilizador()
{

   QFile Update_txt("utilizadores.txt");

    if (Update_txt.open(QFile::WriteOnly | QFile::Truncate))
    {
        QTextStream data( &Update_txt );
        QStringList strList;

        data << strList.join(';') ;
        for( int r = 0; r < ui->tableWidget_3->rowCount(); ++r )
        {
            strList.clear();
            for( int c = 0; c < ui->tableWidget_3->columnCount(); ++c )
            {   QTableWidgetItem* item = ui->tableWidget_3->item(r,c);        //Load items
                if (!item || item->text().isEmpty())                        //Test if there is something at item(r,c)
                {
                    ui->tableWidget_3->setItem(r,c,new QTableWidgetItem("0"));//IF there is nothing write 0
                }
                strList << ui->tableWidget_3->item( r, c )->text();

            }
            data << strList.join( ';' )+ ";"+"\n";

        }
        statusBar()->showMessage(tr("Ficheiro Atualizado com Sucesso!"), 2000);
        Update_txt.close();
    }


}

//--------------------------------------------------------------------------------------------------------------------------------------------------


//Funcao que verifica se a quantidade escolhida está disponivel
void MainWindow::lerQuantDisponivel()
{


    QString componente = ui->comboBox_componente->currentText();
    QString descricao = ui->comboBox_descricao->currentText();

    QFile data1("componentes.txt");
       if (!data1.open(QIODevice::ReadOnly | QIODevice::Text))
       {
           qDebug() << "componentes.txt file can't be opened...";
       }

    QTextStream line(&data1);

    QStringList list, list_aux_descricao;

  while (!line.atEnd())
    {
        QString read_line = line.readLine();
        list = read_line.split(";");

        if (list.contains(componente) && list.contains(descricao))

        {


            quantRequisitada = list.at(4);
            int a = quantRequisitada.toInt();
            qDebug() << "conseguir ler quantrequisitada" << a;
            quantInserida = list.at(2);
            int b = quantInserida.toInt();

            quantDisponivel = b - a;
            qDebug() << "quantDisponivel" << quantDisponivel;



        }

  }
}

//Funcao que permite ao utilizador carregar no calendario e o mesmo alterar em tempo real numa lineEdit
void MainWindow::on_calendarWidget_selectionChanged()
{

   ui->lb_dataprint->setText(ui->calendarWidget->selectedDate().toString("dd/MM/yyyy"));
   dataSelecionada = ui->lb_dataprint->text();

}


//Funcao que permite para uma data em especifico mostrar todos os componentes requisitados
void MainWindow::on_bt_disponibilidade_2_clicked()
{
    ui->Sub_Menu->setCurrentIndex(4);

    ui->lb_dataprint_disp->setText(ui->calendarWidget->selectedDate().toString("dd/MM/yyyy"));
    dataSelecionada = ui->lb_dataprint_disp->text();
    qDebug() << "data" << dataSelecionada;


    //=================== TABLE =================
    QStringList titulos;


//Inicializacao da table widget
    ui->tableWidget_4->setColumnCount(9);
     titulos << "ID" << "Numero aluno" << "Nome aluno" << "Data inicio" << "Data fim"<< "Tipo componente" << "Descricao" << "Quantidade" << "IDcomp";
    ui->tableWidget_4->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableWidget_4->setHorizontalHeaderLabels(titulos);
    ui->tableWidget_4->resizeColumnsToContents();
    ui->tableWidget_4->setFocusPolicy(Qt::WheelFocus);
    ui->tableWidget_4->setColumnWidth(0,50);
    ui->tableWidget_4->setColumnWidth(1,100);
    ui->tableWidget_4->setColumnWidth(2,300);
    ui->tableWidget_4->setColumnWidth(3,100);
    ui->tableWidget_4->setColumnWidth(4,100);
    ui->tableWidget_4->setColumnWidth(5,250);
    ui->tableWidget_4->setColumnWidth(6,200);
    ui->tableWidget_4->setColumnWidth(7,200);
    ui->tableWidget_4->setColumnWidth(8,100);
    ui->tableWidget_4->verticalHeader()->setVisible(false);
    while (ui->tableWidget_4->rowCount() > 0)
        {
            ui->tableWidget_4->removeRow(0);
        }


Ler_requisao_disponibilidade(dataSelecionada);

//Stylesheet da disponibilidade
 ui->lb_data_disp->setStyleSheet("color: white; qproperty-alignment: AlignCenter;/* border-radius: 10px; font-weight: bold*/");
 ui->lb_dataprint_disp->setStyleSheet("color: white; qproperty-alignment: AlignCenter;/* border-radius: 10px; font-weight: bold*/");
 ui->lb_titulo_disp->setStyleSheet("color: white; qproperty-alignment: AlignCenter;/* border-radius: 10px; font-weight: bold*/");


centerposition_tablewidget_4();
   }

//Funcao que permite centrar a tablewidget das requisicoes com data escolhida
void MainWindow::centerposition_tablewidget_4()
{

    for( int r = 0; r < ui->tableWidget_4->rowCount(); ++r )
    {

        for( int c = 0; c < ui->tableWidget_4->columnCount(); ++c )
        {
            //Centrar todos os elementos no meio da tablewidget
            ui->tableWidget_4->item(r,c)->setTextAlignment(Qt::AlignCenter);
        }
    }
}

//ler ficheiro requsicao.txt
void MainWindow::Ler_requisao_disponibilidade(QString data)
{
   QString data_select = data;

   QFile file("requisicao.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
       QMessageBox::information(this,"Alerta","Não foi possível abrir o ficheiro requisicao.txt.");
    }

    QTextStream line(&file);
    QStringList list;

    while (!line.atEnd())
        {
           QString read_line = line.readLine();
           list = read_line.split(";");

            if ( list.contains(data_select))
            {
               int line_count = 0;

                          ui->tableWidget_4->insertRow(ui->tableWidget_4->rowCount());
                          line_count= ui->tableWidget_4->rowCount() - 1;

                            for(int j=0;j<list.size();j++)
                            {
                                QString m_prop=list.at(j);
                                QTableWidgetItem *item=new QTableWidgetItem(m_prop);
                                ui->tableWidget_4->setItem(line_count,j,item);
                                ui->tableWidget_4->update();
                            }
                                line_count++;

            }
        }
        file.close();
        }


//Botao "voltar" que permite ao utilizador retomar à pagina principal
void MainWindow::on_pushButton_10_clicked()
{
    ui->Sub_Menu->setCurrentIndex(0);
}
