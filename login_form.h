#ifndef LOGIN_FORM_H
#define LOGIN_FORM_H

#include <QDialog>
#include "mainwindow.h"
#include <QLineEdit>

namespace Ui {
class Login_form;
}

class Login_form : public QDialog
{
    Q_OBJECT

public:
    explicit Login_form(QWidget *parent = nullptr);
    ~Login_form();
    QLineEdit *line_username;

private slots:
    void on_bt_login_clicked();

private:
    Ui::Login_form *ui;
    MainWindow *mainWindow;
};

#endif // LOGIN_FORM_H
