#ifndef COD_CORES_H
#define COD_CORES_H

#include <QDialog>
#include "resistorcalc.h"

namespace Ui {
class cod_cores;
}

class cod_cores : public QDialog
{
    Q_OBJECT

public:
    explicit cod_cores(QWidget *parent = nullptr);
    ~cod_cores();
 ResistorCalc resistor;

private slots:
    void on_bt_Calculate_released();
    void Calculate_R();


private:
    Ui::cod_cores *ui;

};

#endif // COD_CORES_H
