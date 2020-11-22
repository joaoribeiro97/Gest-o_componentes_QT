//#ifndef SAVE_TXT_H
#define SAVE_TXT_H

#include <algorithm>
#include <fstream>
#include <iterator>
#include <iostream>
#include <list>
#include <string>

using namespace std;

class componentes
{
    public:
        int id;
        string name;
        int age;
        componentes();
        componentes(int,string,int);
};

