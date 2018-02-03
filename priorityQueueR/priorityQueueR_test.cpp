#include"priorityQueueR.h"
#include <iostream>

using namespace std;
int main()
{
	PriorityQueueR a;
	a.push(1);
	a.push(2);
	a.push(3);
	cout << "PriorityQueueR a: "<< a << endl;
	cout << "a.top(): " << a.top() << endl;
	a.pop();
	cout << "a.pop(), a: " << a << endl;
	PriorityQueueR b(a);
	cout << "PriorityQueueR b(a): " << b << endl;
	a.push(4);
	cout << "a.push(4): " << a << endl;
	cout << "b: " << b << endl;
	PriorityQueueR c;
	cout << "PriorityQueueR c = a: " << (c = a) << endl;
	cout << "PriorityQueueR c = b: " << (c = b) << endl;

};
