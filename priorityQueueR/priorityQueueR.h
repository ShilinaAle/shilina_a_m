#ifndef STACHL_20171116
#define STACHL_20171116
#include <iosfwd>
#include <iostream>

using namespace std;
class PriorityQueueR
{
public:
	PriorityQueueR() = default;
	~PriorityQueueR();
	PriorityQueueR(PriorityQueueR& rhs);
	void pop();
	void push(const int& a);
	int& top();
	bool isEmpty() const;
	ostream& writeTo(ostream& ostrm) const;
	PriorityQueueR& operator = (const PriorityQueueR& rhs);

private:
	int* pData_ { nullptr };
	int pHead_ { int(-1) };
	int pTail_ { int(-1) };
	int size{ 3 };
	int fsize{ int(0) };
};
ostream& operator << (ostream& ostrm, PriorityQueueR& rhs);

#endif // !STACHL_20171116


