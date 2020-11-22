#include "resistorcalc.h"

#include <QString>


 QString ResistorCalc::toleranceCalc(int value)
    {
       QString tol;

       switch(value){
           case 0:
           tol="+-1%";
           break;
       case 1:
       tol="+-2%";
       break;
       case 2:
       tol="+-5%";
       break;
       case 3:
       tol="+-0.25%";
       break;
       case 4:
       tol="+-0.1%";
       break;
       case 5:
       tol="+-0.05%";
       break;
       case 6:
       tol="+-5%";
       break;
       case 7:
       tol="+-10%";
       break;

       }
       return tol;
    }


QString ResistorCalc::ResCalc (int r1, int r2, int mul)
{
    int value =r1*10 + r2;
    QString valueStr;
    switch(mul){
        case 0:
       valueStr=QString::number(value) + "ohms"; break;

    case 1:
    valueStr=QString::number(value*10) + "ohms"; break;

    case 2:
    valueStr=QString::number(value*100) + "ohms"; break;

    case 3:
    valueStr=QString::number(value) + "Kohms"; break;

    case 4:
    valueStr=QString::number(value*10) + "Kohms"; break;

    case 5:
    valueStr=QString::number(value*100) + "Kohms"; break;

    case 6:
    valueStr=QString::number(value) + "Mohms"; break;

    case 7:
    valueStr=QString::number(value*10) + "Mohms"; break;

    case 8:
    valueStr=QString::number(value*100) + "Mohms"; break;

    case 9:
    valueStr=QString::number(value) + "Gohms"; break;

    case 10:
    valueStr=QString::number(double (value)/10) + "ohms"; break;

    case 11:
    valueStr=QString::number(double (value)/100) + "ohms"; break;
    }
    return valueStr;
}
