#include"priorityQueueL.h"
#include <iostream>
#include <stdexcept>

PriorityQueueL::~PriorityQueueL()
{
	while (!isEmpty())
	{
		pop();
	}
	pTail_ = nullptr;
}
PriorityQueueL::PriorityQueueL(PriorityQueueL& rhs)
{
	Node* ind(rhs.pHead_);
	while (ind != nullptr)
	{
		push(ind->data_);
		ind = ind->pNext_;
	}
}

void PriorityQueueL::pop()
{
	if (!isEmpty()) {
		Node* pdeleted(pHead_);
		pHead_ = pdeleted->pNext_;
		delete pdeleted;
	}
}

void PriorityQueueL::push(const int& a)
{
	Node* vsp = new Node(nullptr, a);

	if (isEmpty())
	{
		pTail_ = vsp;
		pHead_ = pTail_;
	}
	else
	{
		pTail_->pNext_ = vsp;
		pTail_ = pTail_->pNext_;
	}
}

int& PriorityQueueL::top()
{
	if (isEmpty())
	{
		throw invalid_argument("You can not take an object from the empty queue");
	}
	return pHead_->data_;
}

bool PriorityQueueL::isEmpty() const
{
	return (!pHead_);
}

ostream & PriorityQueueL::writeTo(ostream & ostrm) const
{
	Node * a = pHead_;
	while (a != nullptr)
	{
		ostrm << a->data_ << ' ';
		a = a->pNext_;
	}
	return ostrm;
}

PriorityQueueL & PriorityQueueL::operator=(const PriorityQueueL & rhs)
{
	while (!isEmpty())
	{
		pop();
	}
	Node* oup = rhs.pHead_;
	while (oup != nullptr)
	{
		push(oup->data_);
		oup = oup->pNext_;
	}
	return *this;
}

PriorityQueueL::Node::Node(Node* pNext, const int& a)
	:pNext_(pNext), data_(a){}

ostream & operator<<(ostream & ostrm, PriorityQueueL & rhs)
{
	return rhs.writeTo(ostrm);
}
