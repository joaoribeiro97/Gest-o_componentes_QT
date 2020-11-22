#ifndef MAIN_LOGIN_H
#define MAIN_LOGIN_H

#include <QMainWindow>
#include <QDialog>
#include "mainwindow.h"
#include <QLineEdit>
namespace Ui {
class Main_Login;
}

class Main_Login : public QMainWindow
{
    Q_OBJECT

public:
    explicit Main_Login(QWidget *parent = nullptr);
    ~Main_Login();

private slots:
    void on_bt_login_clicked();

private:
    Ui::Main_Login *ui;
    MainWindow *mainWindow;
};

#endif // MAIN_LOGIN_H
