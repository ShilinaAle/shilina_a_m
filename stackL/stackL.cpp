#ifndef STACHL_20171116
#define STACHL_20171116
#include <iosfwd>
#include <iostream>
#include <stdexcept>

using namespace std;
class StackL
{
public:
	StackL() = default;
	StackL(const StackL& rhs)
	{
		Node* a;
		a = rhs.pHead_;
		swap(a);
	}
	~StackL()
	{
		while (!isEmpty())
		{
			pop();
		}
	}
	void push(const int& a)
	{
		pHead_ = new Node(pHead_, a);
	}
	void pop()
	{
		if (!isEmpty()) {
			Node* pdeleted(pHead_);
			pHead_ = pdeleted->pNext_;
			delete pdeleted;
		}
	}
	int& top()
	{
		if (isEmpty())
		{
			throw invalid_argument("You stupied");
		}
		return pHead_->data_;
	}
	const int& top() const
	{
		if (isEmpty())
		{
			throw invalid_argument("You stupied");
		}
		return pHead_->data_;
	}
	bool isEmpty() const
	{
		return (!pHead_);
	}

	ostream& writeTo(ostream& ostrm) const
	{
		StackL a(*this);
		while (!a.isEmpty())
		{
			ostrm << a.top() << ' ';
			a.pop();
		}
		return ostrm;
	}
	/*StackL& operator = (const StackL& rhs)
	{
		
		swap();
	}*/
	
private:
	struct Node
	{
		Node(Node* pNext, const int& a)
			:pNext_(pNext), data_(a)
		{}
		Node* pNext_{ nullptr };
		int data_{ int(0) };
	};
	Node* pHead_{ nullptr };
	void swap(Node*& rhs)
	{
		Node* a;
		a = pHead_;
		pHead_ = rhs;
		rhs = a;
	}
};
ostream& operator << (ostream& ostrm, StackL& rhs)
{
	return rhs.writeTo(ostrm);
}
int main()
{
	StackL a;
	cout << a.isEmpty() << endl;
	try { a.top(); }
	catch (const invalid_argument& exept)
	{
		cout << exept.what() << endl;
	}
	a.push(1);
	a.push(2);
	a.push(3);
	//cout << a << endl;
	StackL b(a);
	/*a.push(5);
	while (!a.isEmpty())
	{
		cout << a.top() << ' ';
		a.pop();
	}
	cout << endl;
	while (!b.isEmpty())
	{
		cout << b.top() << ' ';
		b.pop();
	}
	cout << endl;*/
};


#endif // !STACHL_20171116


