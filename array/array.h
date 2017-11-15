#ifndef ARRAY_H_20171107
#define ARRAY_H_07112017
#include <iosfwd>
#include <sstream>

using namespace std;
class Array
{
public:
	Array();
	Array(const int leng);
	Array(const Array& rhs);
	~Array();
	ostream& wrireTo(std::ostream& ostrm) const;
	int& operator[](const ptrdiff_t i);
	const int& operator[](const ptrdiff_t i) const;
	
	Array& operator = (const Array& rhs);

	void insert(const int& a, const int& ind);
	void remove_i(const int& ind);
	void remove(const int& a);

	int& fiz();
	int& length();

private:
	int* pData_{ nullptr };

	const ptrdiff_t defaultSize = 4;
	ptrdiff_t size{ 0 };
	ptrdiff_t fsize{ 0 };

	void swap(int*& rhs);
	void increase(const int& new_size);
};

ostream& operator <<(std::ostream& ostrm, const Array& rhs);
#endif // !ARRAY_H_20171107
