#ifndef STACHR_20171116
#define STACHR_20171116
#include <iosfwd>
#include <iostream>

using namespace std;


class StackR
{
public:
	StackR() = default;
	StackR(const StackR& rhs);
	~StackR();

	StackR& operator=(const StackR& rhs);

	int& top();
	const int& top() const;
	StackR& push(const int& v);
	StackR& pop();
	bool isEmpty() const;
	std::ostream& writeTo(std::ostream& ostrm) const;
private:
	const ptrdiff_t defaultSize{ 3 };
	int* pData_{ nullptr };
	ptrdiff_t pHead_{ (-1) };
	bool empty{ true };
	ptrdiff_t size{ 0 };
	ptrdiff_t countSize(const ptrdiff_t& n) const;

	void swap(StackR& rhs);
	void copy(const StackR& rhs, const ptrdiff_t& size);

};

std::ostream& operator<<(std::ostream& ostrm, const StackR& rhs);

#endif // !STACHL_20171116


