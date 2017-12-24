#include "matrixR.h"
#include <iostream>
#include <sstream>
#include <stdexcept>

using namespace std;

MatrixR::MatrixR()
	: nRow(defaultRow), nCol(defaultCol)
{
	pRows_ = new int*[nRow] {nullptr};
	pRows_[0] = new int[nCol*nRow]{ 0 };
	for (int i(0); i < nRow - 1; i += 1)
	{
		pRows_[i + 1] = pRows_[i] + nCol;
	}
}

MatrixR::MatrixR(const int row, const int col) 
	: nRow(row), nCol(col)
{
	if ((row <= 0) || (col <= 0)) 
	{ throw invalid_argument("Size can not be < = 0"); }

	pRows_ = new int*[nRow] {nullptr};
	pRows_[0] = new int[nCol*nRow]{ 0 };
	for (int i(0); i < nRow - 1; i += 1)
	{
		pRows_[i + 1] = pRows_[i] + nCol;
	}
}

MatrixR::MatrixR(const MatrixR& rhs) 
	: nRow(rhs.nRow), nCol(rhs.nCol)
{
	pRows_ = new int*[nRow] {nullptr};
	pRows_[0] = new int[nRow * nCol]{ 0 };
	for (int i(0); i < nRow - 1; i += 1)
	{
		pRows_[i + 1] = pRows_[i] + nCol;
	}

	for (int j(0); j < nRow; j += 1)
	{
		for (int i(0); i < nCol; i++)
		{
			pRows_[j][i] = rhs.pRows_[j][i];
		}
	}
}

MatrixR::~MatrixR()
{
	if (pRows_ != nullptr)
	{
		delete[]  pRows_[0];
		delete[]  pRows_;
		pRows_ = nullptr;
	}
}
MatrixR& MatrixR::operator=(const MatrixR& rhs)
{
	MatrixR::swap(*this, MatrixR(rhs));
	nRow = rhs.nRow;
	nCol = rhs.nCol;
	return *this;
}

bool MatrixR::operator==(const MatrixR& rhs) const
{
	bool result = true;
	for (int r(0); r < nRow; r+=1)
	{
		for (int c(0); c < nCol; c += 1)
		{
			if (pRows_[r][c] != rhs.pRows_[r][c])
			{
				result = false;
			}
		}
	}
	return result;
}


bool MatrixR::operator!=(const MatrixR& rhs) const
{
	return !(operator==(rhs));
}


int& MatrixR::at(const ptrdiff_t iRow, const ptrdiff_t iCol)
{
	if ((iRow < 0) || (iCol < 0) || (iRow >= nRow) || (iCol >= nCol)) 
	{ throw invalid_argument("The index of matrix can not be less than 0 or larger than length of the matrix"); }
	return pRows_[iRow][iCol];
}

const int& MatrixR::at(const ptrdiff_t iRow, const ptrdiff_t iCol) const
{
	if ((iRow < 0) || (iCol < 0) || (iRow >= nRow) || (iCol >= nCol)) 
	{ throw invalid_argument("The index of matrix can not be less than 0 or larger than length of the matrix"); }
	return pRows_[iRow][iCol];
}

ostream& MatrixR::writeTo(std::ostream& ostrm) const
{
	if (pRows_ != nullptr)
	{
		for (int r(0); r < nRow; r += 1)
		{
			for (int c(0); c < nCol; c += 1)
			{
				ostrm << pRows_[r][c] << ' ';
			}
			ostrm << endl;
		}
	}
	return ostrm;
}

ostream& operator<<(std::ostream& ostrm, const MatrixR& rhs)
{
	return rhs.writeTo(ostrm);
}

int MatrixR::lenth() const
{
	return nCol * nRow;
}

MatrixR MatrixR::operator*(const MatrixR& rhs) const
{
	if (nCol != rhs.nRow) { throw invalid_argument("It is impossible to multiply these matrixes"); }
	MatrixR umn(nRow, rhs.nCol);
	for (int jR(0); jR < nRow; jR += 1)
	{
		for (int iC(0); iC < rhs.nCol; iC += 1)
		{
			for (int jjC(0); jjC < nCol; jjC++)
			{
				umn.at(jR, iC) += pRows_[jR][jjC] * rhs.at(jjC, iC);
			}
		}
	}
	return umn;
}

void MatrixR::swap(MatrixR& lhs, MatrixR& rhs)
{
	int** t = lhs.pRows_;
	lhs.pRows_ = rhs.pRows_;
	rhs.pRows_ = t;
}