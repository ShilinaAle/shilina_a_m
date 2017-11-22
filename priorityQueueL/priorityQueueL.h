#ifndef STACHL_20171116
#define STACHL_20171116
#include <iosfwd>
#include <iostream>

using namespace std;
class PriorityQueueL
{
	PriorityQueueL();
	~PriorityQueueL();
	PriorityQueueL(PriorityQueueL& rhs);
	void pop();
	void push();
	void top();
	bool isEmpty() const;
public:
	struct Node
	{
		Node(Node* pNext, const int& a);
		Node* pNext_{ nullptr };
		int data_{ int(0) };
	};
	Node* pHead_{ nullptr };
	Node* pTail{ nullptr };
	ostream& writeTo(ostream& ostrm) const;
	
private:
	
};
ostream& operator << (ostream& ostrm, PriorityQueueL& rhs);

#endif // !STACHL_20171116


