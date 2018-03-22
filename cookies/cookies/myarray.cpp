#include "myarray.h"

#include <stdexcept>


int & Myarray::operator[](const int index)
{
    return pdata[index];
}

const int & Myarray::operator[](const int index) const
{
    return pdata[index];
}

Myarray::Myarray()
{
    pdata = new int[fsize] { int() };
}

Myarray::~Myarray()
{
    delete[] pdata;
}

Myarray::Myarray(const Myarray & a)
{
    pdata = new int[a.fsize];
    fsize = a.fsize;
    size = a.size;
    for (int i(0); i < size; i += 1)
        pdata[i] = a.pdata[i];
}

Myarray::Myarray(int n)
{
    if (n <= 0) { throw std::invalid_argument("Error: Size can't be less or equals 0"); }
    else
    {
        fsize = n;
        size = n;
        pdata = new int[fsize] { int() };
    }
}

void Myarray::swap(Myarray& lhs, Myarray& rhs)
{
    int* newarr = lhs.pdata;
    lhs.pdata = rhs.pdata;
    rhs.pdata = newarr;
}

Myarray Myarray::operator=(const Myarray & a)
{
    swap(*this, Myarray(a));
    size = a.size;
    fsize = fsize;
    return *this;
}


void Myarray::resize(const int newsize)
{
    if (newsize <= 0) { throw std::invalid_argument("Error: Size can't be less or equals 0"); }
    if (newsize < fsize)
    {
        size = newsize;
    }
    else
    {
        int* newarr = new int[newsize];
        for (int i(0); i < size; i += 1)
        {
            newarr[i] = pdata[i];
        }
        delete[] pdata;
        pdata = newarr;
        fsize = newsize;
        size = newsize;
    }

}
