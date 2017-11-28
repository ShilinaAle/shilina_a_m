#ifndef MATRIXU_20171128
#define MATRIXU_20171128
#include <iosfwd>
#include <sstream>

using namespace std;
class MatrixU
{
public:
	MatrixU();
	MatrixU(const int& nR, const int& nC);
	MatrixU(const MatrixU& rhs);
	~MatrixU();

	ostream& writeTo(std::ostream& ostrm) const;
	
	int& at(const int& nR, const int& nC);
	const int& at(const int& nR, const int& nC) const;

	//int& opr();
private:
	ptrdiff_t nDefolt{ 3 };
	ptrdiff_t nCol{ 0 };
	ptrdiff_t nRow{ 0 };
	int* pData_{ nullptr };

	ptrdiff_t size{ 0 };
};

ostream& operator <<(std::ostream& ostrm, const MatrixU& rhs);

#endif // !MATRIXU_20171128
