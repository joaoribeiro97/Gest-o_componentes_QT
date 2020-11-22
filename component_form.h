#ifndef COMPONENT_FORM_H
#define COMPONENT_FORM_H

#include <QMainWindow>

namespace Ui {
class Component_form;
}

class Component_form : public QMainWindow
{
    Q_OBJECT

public:
    explicit Component_form(QWidget *parent = nullptr);
    ~Component_form();

private:
    Ui::Component_form *ui;
};

#endif // COMPONENT_FORM_H
