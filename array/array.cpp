#include "array.h"
#include <iostream>
#include <sstream>
#include <stdexcept>

Array::Array()
{
	pData_ = new int[defaultSize] {0};
	size = defaultSize;
	fsize = defaultSize;
}

Array::Array(const int leng)
{
	if (leng < 0)
	{
		throw invalid_argument("Length of array can not be < 0");
	}
	size = leng;
	fsize = size * 2;
	pData_ = new int[fsize] {0};
}

Array::Array(const Array& rhs)
{
	pData_ = new int[rhs.fsize]{ 0 };
	for (int i(0); i < rhs.size; i += 1)
	{
		pData_[i] = rhs.pData_[i];
	}
	size = rhs.size;
	fsize = rhs.fsize;
}

Array::~Array()
{
	delete[] pData_;
	pData_ = nullptr;
}

ostream& Array::wrireTo(std::ostream& ostrm) const
{
	ostrm << "{ ";
	for (int i(0); i < size; i += 1)
	{
		ostrm << pData_[i] << ' ';
	}
	ostrm << "}";
	return ostrm;
}

int& Array::operator[](const ptrdiff_t i)
{
	return pData_[i];
}

const int& Array::operator[](const ptrdiff_t i) const
{
	return pData_[i];
}

Array& Array::operator = (const Array& rhs)
{
	Array a(rhs);
	swap(a.pData_);
	size = a.size;
	fsize = a.fsize;
	return *this;
}

void Array::insert(const int& a, const int& ind)
{
	if ((ind < 0) || (ind >= size))
	{
		throw out_of_range("The index of array can not be less than 0 or larger than length of the array");
	}
	if (fsize < size + 1)
	{
		increase(size + 1);
	}

	size += 1;
	for (int i(size - 1); i > ind; i -= 1)
	{
		pData_[i] = pData_[i - 1];
	}
	pData_[ind] = a;
}

void Array::remove_i(const int& ind)
{
	if ((ind < 0) || (ind >= size))
	{
		throw out_of_range("The index of array can not be less than 0 or larger than length of the array");
	}
	for (int i(ind); i < size - 1; i += 1)
	{
		pData_[i] = pData_[i + 1];
	}
	size -= 1;
}

void Array::remove(const int& a)
{
	for (int i(0); i < size; i += 1)
	{
		if (pData_[i] == a)
		{
			for (int j(i); j < size - 1; j += 1)
			{
				pData_[j] = pData_[j + 1];
			}
			size -= 1;
			i -= 1;
		}
	}
}

int& Array::fiz()
{
	return fsize;
}

int& Array::length()
{
	return size;
}

void Array::swap(int*& rhs)
{
	int* v = new int[fsize];
	v = pData_;
	pData_ = rhs;
	rhs = v;
}

void Array::increase(const int& new_size)
{
	if (new_size <= 0)
	{
		throw length_error("The new length of array can not be less than 1");
	}
	ptrdiff_t new_fsize{ 0 };
	if (new_size * 2 < 50) {
		new_fsize = new_size * 2;
	}
	else { new_fsize = new_size + 2; }

	int* nf = new int[new_fsize] {0};
	swap(nf);
	for (int i(0); i < size; i += 1)
	{
		pData_[i] = nf[i];
	}
	fsize = new_fsize;
}

ostream& operator <<(std::ostream& ostrm, const Array& rhs)
{
	return rhs.wrireTo(ostrm);
}