#include"stackL.h"
#include <iostream>
#include <stdexcept>

StackL::StackL(const StackL& rhs)
	{
		StackL rhs_;
		Node* a;
		a = rhs.pHead_;
		while (a != nullptr)
		{
			rhs_.push(a->data_);
			a = a->pNext_;
		}
		while (!rhs_.isEmpty())
		{
			push(rhs_.top());
			rhs_.pop();
		}
	}
StackL::~StackL()
	{
		while (!isEmpty())
		{
			pop();
		}
	}
	void StackL::push(const int& a)
	{
		pHead_ = new Node(pHead_, a);
	}
	void StackL::pop()
	{
		if (!isEmpty()) {
			Node* pdeleted(pHead_);
			pHead_ = pdeleted->pNext_;
			delete pdeleted;
		}
	}
	int& StackL::top()
	{
		if (isEmpty())
		{
			throw invalid_argument("You can not take an object from the empty stack");
		}
		return pHead_->data_;
	}
	const int& StackL::top() const
	{
		if (isEmpty())
		{
			throw invalid_argument("You can not take an object from the empty stack");
		}
		return pHead_->data_;
	}
	bool StackL::isEmpty() const
	{
		return (!pHead_);
	}

	ostream& StackL::writeTo(ostream& ostrm) const
	{
		StackL a(*this);
		if (a.isEmpty())
		{
			ostrm << "stack is empty";
		}
		while (!a.isEmpty())
		{
			ostrm << a.top() << ' ';
			a.pop();
		}
		return ostrm;
	}
	StackL& StackL::operator = (const StackL& rhs)
	{
		StackL rhs_;
		Node* a;
		a = rhs.pHead_;
		while (a != nullptr)
		{
			rhs_.push(a->data_);
			a = a->pNext_;
		}
		while (!rhs_.isEmpty())
		{
			push(rhs_.top());
			rhs_.pop();
		}
		return *this;
	}
	StackL::Node::Node(Node* pNext, const int& a)
		:pNext_(pNext), data_(a) {}

ostream& operator << (ostream& ostrm, StackL& rhs)
{
	return rhs.writeTo(ostrm);
}




