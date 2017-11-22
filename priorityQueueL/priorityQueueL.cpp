#include"priorityQueueL.h"
#include <iostream>
#include <stdexcept>

PriorityQueueL::~PriorityQueueL()
{
}

void PriorityQueueL::pop()
{
	if (!isEmpty()) {
		Node* pdeleted(pHead_);
		pHead_ = pdeleted->pNext_;
		delete pdeleted;
	}
}

void PriorityQueueL::push()
{
}

void PriorityQueueL::top()
{
}

bool PriorityQueueL::isEmpty() const
{
	return (!pHead_);
}

ostream & PriorityQueueL::writeTo(ostream & ostrm) const
{
	// TODO: вставьте здесь оператор return
}

ostream & operator<<(ostream & ostrm, PriorityQueueL & rhs)
{
	// TODO: вставьте здесь оператор return
}
