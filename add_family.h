#ifndef ADD_FAMILY_H
#define ADD_FAMILY_H

#include <QDialog>

namespace Ui {
class add_family;
}

class add_family : public QDialog
{
    Q_OBJECT

public:
    explicit add_family(QWidget *parent = nullptr);
    ~add_family();
QString sendFamily();

private slots:
    void on_bt_family_clicked();

private:
    Ui::add_family *ui;
};

#endif // ADD_FAMILY_H
