#ifndef ARRAY_H_20171107
#define ARRAY_H_07112017
#include <iosfwd>
#include <sstream>

using namespace std;
class Array
{
public:
	Array();
	Array(const int n);
	Array(const Array& rhs);
	~Array();

	int& operator[](const ptrdiff_t i);
	const int& operator[](const ptrdiff_t i) const;

	ostream& writeTo(std::ostream& ostrm) const;
	int length();
	void insert(const int a, const int i);
	//void remove(const int i);
	//istream& readFrom(const std::istream& istrm);
private:
	const ptrdiff_t defSize{ 5 };
	ptrdiff_t size{ 0 };
	ptrdiff_t phySize{ 0 };
	int* pData_{ nullptr };
	
	static const char leftBrace{ '{' };
	static const char rightBrace{ '}' };
	static const char separator{ ',' };

	
	
};
ostream& operator<<(std::ostream& ostrm, const Array& rhs);


#endif // !ARRAY_H_20171107
