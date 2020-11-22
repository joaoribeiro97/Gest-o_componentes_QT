#include "login_form.h"
#include "ui_login_form.h"
#include <QMessageBox>
#include <QString>
#include "mainwindow.h"

Login_form::Login_form(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login_form)
{
    ui->setupUi(this);
    QImage img("C:\\Users\\RicardoIsidrodaCosta\\OneDrive\\Licenciatura_EEC_IPCA\\ProgramaçãoOrientaObjetos_HelenaTorres\\POO-15-11-2019-00-52\\POO_TP\\resources\\LogoIPCA.png");
    QImage img2 = img.scaled(100, 100, Qt::KeepAspectRatio);

   // mainWindow = new MainWindow(this);
     //mainWindow->show();
}

Login_form::~Login_form()
{
    delete ui;
}

void Login_form::on_bt_login_clicked()
{
    QString username = ui->line_username->text();
       QString password = ui->line_password->text();

//       if (username.isEmpty() || password.isEmpty()){
//               QMessageBox::information(this, tr("Peringatan!"), "Username atau password tidak boleh kosong");
//           else{
//               this->destroy();
//               }
//       }

       if(username ==  "admin" && password == "admin") {
           QMessageBox::information(this, "Login", "Utilizador e password estão corretos.");
           this->hide();
          mainWindow = new MainWindow(this);

          mainWindow->setWindowState(Qt::WindowMaximized);
          mainWindow->show();

       }
       else {
           QMessageBox::warning(this,"Login", "Utilizador e password não estão corretos.");
       }
}
