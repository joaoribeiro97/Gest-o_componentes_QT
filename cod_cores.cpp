#include "cod_cores.h"
#include "ui_cod_cores.h"
#include "resistorcalc.h"


cod_cores::cod_cores(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::cod_cores)
{
    ui->setupUi(this);
    //Cores
    ui->FirstRing->setItemData(0, QColor(Qt::black),Qt::BackgroundRole);
    ui->FirstRing->setItemData(0, QColor(Qt::white),Qt::TextColorRole);
    ui->FirstRing->setItemData(1, QColor(185,122,87),Qt::BackgroundRole);
    ui->FirstRing->setItemData(2, QColor(Qt::red),Qt::BackgroundRole);
    ui->FirstRing->setItemData(3, QColor(255,127,39),Qt::BackgroundRole);
    ui->FirstRing->setItemData(4, QColor(Qt::yellow),Qt::BackgroundRole);
    ui->FirstRing->setItemData(5, QColor(Qt::green),Qt::BackgroundRole);
    ui->FirstRing->setItemData(6, QColor(Qt::blue),Qt::BackgroundRole);
    ui->FirstRing->setItemData(7, QColor(Qt::magenta),Qt::BackgroundRole);
    ui->FirstRing->setItemData(8, QColor(Qt::gray),Qt::BackgroundRole);
    ui->FirstRing->setItemData(9, QColor(Qt::white),Qt::BackgroundRole);
    ui->SecondRing->setItemData(0, QColor(Qt::black),Qt::BackgroundRole);
    ui->SecondRing->setItemData(0, QColor(Qt::white),Qt::TextColorRole);
    ui->SecondRing->setItemData(1, QColor(185,122,87),Qt::BackgroundRole);
    ui->SecondRing->setItemData(2, QColor(Qt::red),Qt::BackgroundRole);
    ui->SecondRing->setItemData(3, QColor(255,127,39),Qt::BackgroundRole);
    ui->SecondRing->setItemData(4, QColor(Qt::yellow),Qt::BackgroundRole);
    ui->SecondRing->setItemData(5, QColor(Qt::green),Qt::BackgroundRole);
    ui->SecondRing->setItemData(6, QColor(Qt::blue),Qt::BackgroundRole);
    ui->SecondRing->setItemData(7, QColor(Qt::magenta),Qt::BackgroundRole);
    ui->SecondRing->setItemData(8, QColor(Qt::gray),Qt::BackgroundRole);
    ui->SecondRing->setItemData(9, QColor(Qt::white),Qt::BackgroundRole);
    connect(ui->bt_Calculate,SIGNAL(released()),this,SLOT(Calculate_R()));
}

cod_cores::~cod_cores()
{
    delete ui;
}

void cod_cores::Calculate_R()
{
    int FirstRingValue = ui->FirstRing->currentIndex();
    int SecondRingValue = ui->SecondRing->currentIndex();
    int MultiplerValue = ui->Multiplier->currentIndex();
    int ToleranceValue = ui->Tolerance->currentIndex();

   QString tolerance = resistor.toleranceCalc(ToleranceValue);
   QString value = resistor.ResCalc(FirstRingValue,SecondRingValue,MultiplerValue);

    QString final = value + tolerance;

   ui->ValueResistor->setText(final);

}

void cod_cores::on_bt_Calculate_released()
{

}
