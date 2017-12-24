#ifndef STACHL_20171116
#define STACHL_20171116
#include <iosfwd>
#include <iostream>

using namespace std;
class PriorityQueueL
{
public:
	PriorityQueueL() = default;
	~PriorityQueueL();
	PriorityQueueL(PriorityQueueL& rhs);
	void pop();
	void push(const int& a);
	int& top();
	bool isEmpty() const;
	ostream& writeTo(ostream& ostrm) const;
	PriorityQueueL& operator = (const PriorityQueueL& rhs);

private:
	struct Node
	{
		Node(Node* pNext, const int& a);
		Node* pNext_{ nullptr };
		int data_{ int(0) };
	};
	Node* pHead_{ nullptr };
	Node* pTail_{ nullptr };
	
};
ostream& operator << (ostream& ostrm, PriorityQueueL& rhs);

#endif // !STACHL_20171116


