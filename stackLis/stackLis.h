#ifndef STACHL_20171116
#define STACHL_20171116
#include <iosfwd>
#include <iostream>
#include <memory>

using namespace std;
class StackLis
{
public:
	StackLis() = default;
	~StackLis() = default;
	/*StackLis(const StackLis& rhs);
	void push(const int& a);
	void pop();
	int& top();
	const int& top() const;
	bool isEmpty() const;*/

	ostream& writeTo(ostream& ostrm) const;
	//StackLis& operator = (const StackLis& rhs);

private:
	struct Node
	{
		Node(unique_ptr<Node> pNext, const int& a);
		unique_ptr<Node> pNext_{ nullptr };
		int data_{ int(0) };
	};
	//Node* pHead_{ nullptr };
	unique_ptr<Node> pHead_{ nullptr };
};
ostream& operator << (ostream& ostrm, StackLis& rhs);

#endif // !STACHL_20171116


