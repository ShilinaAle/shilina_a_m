#include"priorityQueueR.h"
#include <iostream>
#include <stdexcept>

PriorityQueueR::~PriorityQueueR()
{
	/*while (!isEmpty())
	{
		pop();
	}
	pTail_ = nullptr;*/
}
PriorityQueueR::PriorityQueueR(PriorityQueueR& rhs)
{
	/*Node* ind(rhs.pHead_);
	while (ind != nullptr)
	{
		push(ind->data_);
		ind = ind->pNext_;
	}*/
}

void PriorityQueueR::pop()
{
	/*if (!isEmpty()) {
		int* pdeleted(pHead_);
		pHead_ = pHead_ + 1;
		delete pdeleted;
		size -= 1;
	}*/
}

void PriorityQueueR::push(const int& a)
{
	if (isEmpty())
	{
		int* pDataNew = new int[size];
	}
	if (size == fsize)
	{
		int* pDataNew = new int[size * 2];
	}
	size += 1;
	pTail_ += 1;
	pData_[pTail_] = a;
	
}

int& PriorityQueueR::top()
{
	if (isEmpty())
	{
		throw invalid_argument("You can not take an object from the empty queue");
	}
	//return *pHead_;
}

bool PriorityQueueR::isEmpty() const
{
	return (!pHead_);
}

ostream & PriorityQueueR::writeTo(ostream & ostrm) const
{
	/*Node * a = pHead_;
	while (a != nullptr)
	{
		ostrm << a->data_ << ' ';
		a = a->pNext_;
	}
	return ostrm;*/
}

PriorityQueueR & PriorityQueueR::operator=(const PriorityQueueR & rhs)
{
	/*while (!isEmpty())
	{
		pop();
	}
	Node* oup = rhs.pHead_;
	while (oup != nullptr)
	{
		push(oup->data_);
		oup = oup->pNext_;
	}
	return *this;*/
}

ostream & operator<<(ostream & ostrm, PriorityQueueR & rhs)
{
	return rhs.writeTo(ostrm);
}
