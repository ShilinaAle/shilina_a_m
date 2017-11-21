#ifndef STACHL_20171116
#define STACHL_20171116
#include <iosfwd>
#include <iostream>

using namespace std;
class StackL
{
public:
	StackL() = default;
	StackL(const StackL& rhs);
	~StackL();
	void push(const int& a);
	void pop();
	int& top();
	const int& top() const;
	bool isEmpty() const;

	ostream& writeTo(ostream& ostrm) const;
	StackL& operator = (const StackL& rhs);

private:
	struct Node
	{
		Node(Node* pNext, const int& a);
		Node* pNext_{ nullptr };
		int data_{ int(0) };
	};
	Node* pHead_{ nullptr };
	
};
ostream& operator << (ostream& ostrm, StackL& rhs);

#endif // !STACHL_20171116


