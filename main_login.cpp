#include "main_login.h"
#include "ui_main_login.h"
#include <QMessageBox>
#include <QString>
#include "mainwindow.h"

Main_Login::Main_Login(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Main_Login)
{
    ui->setupUi(this);
}

Main_Login::~Main_Login()
{
    delete ui;
}


void Main_Login::on_bt_login_clicked()
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
               QMessageBox::information(this, "Login", "Username and password is correct");
               hide();
               mainWindow = new MainWindow(this);
               mainWindow->show();

           }
           else {
               QMessageBox::warning(this,"Login", "Username and password is not correct");
           }
    }


