#include"stackLis.h"
#include <iostream>
#include <stdexcept>

//StackLis::StackLis(const StackLis& rhs)
//{
//	
//	Node* pCopyFrom(rhs.pHead_->pNext_);
//	Node* pCopyTo = new Node(nullptr, rhs.pHead_->data_);
//	pHead_ = pCopyTo;
//	while (pCopyFrom != nullptr)
//	{
//		pCopyTo -> pNext_= new Node(nullptr, pCopyFrom->data_);
//		pCopyTo = pCopyTo->pNext_;
//		pCopyFrom = pCopyFrom->pNext_;
//	}
//}
//
//	void StackLis::push(const int& a)
//	{
//		pHead_ = new Node(pHead_, a);
//	}
//	void StackLis::pop()
//	{
//		if (!isEmpty()) {
//			Node* pdeleted(pHead_);
//			pHead_ = pdeleted->pNext_;
//			delete pdeleted;
//		}
//	}
//	int& StackLis::top()
//	{
//		if (isEmpty())
//		{
//			throw invalid_argument("You can not take an object from the empty stack");
//		}
//		return pHead_->data_;
//	}
//	const int& StackLis::top() const
//	{
//		if (isEmpty())
//		{
//			throw invalid_argument("You can not take an object from the empty stack");
//		}
//		return pHead_->data_;
//	}
//	bool StackLis::isEmpty() const
//	{
//		return (!pHead_);
//	}

	//ostream& StackLis::writeTo(ostream& ostrm) const
	//{
	//	StackLis a(*this);
	//	if (a.isEmpty())
	//	{
	//		ostrm << "stack is empty";
	//	}
	//	while (!a.isEmpty())
	//	{
	//		ostrm << a.top() << ' ';
	//		a.pop();
	//	}
	//	return ostrm;
	//}
	//StackLis& StackLis::operator = (const StackLis& rhs)
	//{
	//	StackLis rhs_;
	//	Node* a;
	//	a = rhs.pHead_;
	//	while (a != nullptr)
	//	{
	//		rhs_.push(a->data_);
	//		a = a->pNext_;
	//	}
	//	while (!rhs_.isEmpty())
	//	{
	//		push(rhs_.top());
	//		rhs_.pop();
	//	}
	//	return *this;
	//}
	StackLis::Node::Node(unique_ptr<Node> pNext, const int& a)
		:pNext_(pNext), data_(a) {}

ostream& operator << (ostream& ostrm, StackLis& rhs)
{
	return rhs.writeTo(ostrm);
}




