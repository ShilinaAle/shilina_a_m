#include "array.h"
#include <sstream>
#include <iostream>

Array::Array()
	:pData_(new int[defSize] {0}), size(0), phySize(defSize)
{
}

Array::Array(const int n)
	: size(n), phySize(n * 2)
{
	pData_ = new int[n] {0};
}

Array::Array(const Array & rhs)
	: pData_(rhs.pData_), size(rhs.size), phySize(rhs.phySize)
{
}

Array::~Array()
{
	delete[] pData_;
}

int & Array::operator[](const ptrdiff_t i)
{
	return pData_[i];
}

const int & Array::operator[](const ptrdiff_t i) const
{
	return pData_[i];
}

ostream & Array::writeTo(std::ostream & ostrm) const
{
	ostrm << leftBrace << ' ';
	for (int i(0); i < size; i += 1)
	{
		ostrm << pData_[i] << ' ';
	}
	ostrm << rightBrace;
	return ostrm;
}

int Array::length()
{
	return size;
}

void Array::insert(const int a, const int i)
{
	size += 1;
	if (size > phySize)
	{
		phySize *= 2;
	}
	for (int j(size-1); j > i + 1; j -= 1)
	{
		pData_[j] = pData_[j - 1];
	}
	pData_[i + 1] = a;
}

ostream & operator<<(std::ostream & ostrm, const Array & rhs)
{
	return rhs.writeTo(ostrm);
}
