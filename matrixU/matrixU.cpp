#include  "matrixU.h"
#include <iostream>

MatrixU::MatrixU()
	:nCol(nDefolt), nRow(nDefolt)
{
	size = nCol*nRow;
	pData_ = new int[size] { 0 };
};
MatrixU::MatrixU(const int& nR, const int& nC)
	:nRow(nR), nCol(nC)
{
	size = nCol*nRow;
	pData_ = new ptrdiff_t[size]{ 0 };
};

MatrixU::MatrixU(const MatrixU& rhs)
{
	pData_ = new ptrdiff_t[rhs.size]{ 0 };
	for (int i(0); i < rhs.size; i += 1)
	{
		pData_[i] = rhs.pData_[i];
	}
	size = rhs.size;
}

MatrixU::~MatrixU()
{
	delete[] pData_;
	pData_ = nullptr;
}

ostream& MatrixU::writeTo(std::ostream& ostrm) const
{
	for (int iR(0); iR < nRow; iR += 1)
	{
		for (int iC(0); iC < nCol; iC += 1)
		{
			ostrm << pData_[nCol*iR + iC] << ' ';
		}
		ostrm << endl;
	}
	ostrm << endl;
	return ostrm;
}

int& MatrixU::at(const int& nR, const int& nC)
{
	return pData_[nCol*nR + nC];
}

const int& MatrixU::at(const int& nR, const int& nC) const
{
	return pData_[nCol*nR + nC];
}

//int& MatrixU::opr()
//{
//
//}
ostream & operator<<(std::ostream & ostrm, const MatrixU & rhs)
{
	return rhs.writeTo(ostrm);
}
