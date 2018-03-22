#ifndef READLVL_H
#define READLVL_H

#include "myarray.h"
//#include "counters.h"
#include <QFile>
#include <QStringList>
#include <QTextStream>

class Readlvl
{
public:
    Readlvl(int numlvl);
    void fullarray(int numlvl);
    int getcell(int x, int y);
    int getstep();
    void getmove(int **arr );


private:
    int nx_{ int() };
    int countstep{ int() };
    int countcell{ int() };
    int allcookie { int() };
    Myarray cells;

};

#endif // READLVL_H
