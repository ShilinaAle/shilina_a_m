#include  "matrixU.h"
#include <iostream>

MatrixU::MatrixU()
	:nCol(nDefolt), nRow(nDefolt)
{
	size = nCol*nRow;
	pData_ = new ptrdiff_t[size] { 0 };
};

MatrixU::MatrixU(const ptrdiff_t& nR, const ptrdiff_t& nC)
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
	nCol = rhs.nCol;
	nRow = rhs.nRow;
}

MatrixU::~MatrixU()
{
	delete[] pData_;
	pData_ = nullptr;
}

ostream& MatrixU::writeTo(std::ostream& ostrm) const
{
	for (ptrdiff_t iR(0); iR < nRow; iR += 1)
	{
		for (ptrdiff_t iC(0); iC < nCol; iC += 1)
		{
			ostrm << pData_[nCol*iR + iC] << ' ';
		}
		ostrm << endl;
	}
	ostrm << endl;
	return ostrm;
}

int& MatrixU::at(const ptrdiff_t& nR, const ptrdiff_t& nC)
{
	return pData_[nCol*nR + nC];
}

const ptrdiff_t& MatrixU::at(const ptrdiff_t& nR, const ptrdiff_t& nC) const
{
	return pData_[nCol*nR + nC];
}

MatrixU& MatrixU::operator += (const MatrixU rhs)
{
	for (ptrdiff_t iR(0); iR < nRow; iR += 1)
	{
		for (ptrdiff_t iC(0); iC < nCol; iC += 1)
		{
			pData_[nCol*iR + iC] += rhs.at(iR, iC);
		}
	}
	return *this;

}

MatrixU& MatrixU::operator -= (const MatrixU rhs)
{
	for (ptrdiff_t iR(0); iR < nRow; iR += 1)
	{
		for (ptrdiff_t iC(0); iC < nCol; iC += 1)
		{
			pData_[nCol*iR + iC] -= rhs.at(iR, iC);
		}
	}
	return *this;
	
}
ostream & operator<<(std::ostream & ostrm, const MatrixU & rhs)
{
	return rhs.writeTo(ostrm);
}
