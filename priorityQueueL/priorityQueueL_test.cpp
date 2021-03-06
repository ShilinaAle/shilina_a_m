#include"priorityQueueL.h"
#include <iostream>

using namespace std;
int main()
{
	PriorityQueueL a;

	try { a.top(); }
	catch (const invalid_argument& exept)
	{
		cout << exept.what() << endl << endl;
	}
	try { cout << a; }
	catch (const invalid_argument& exept)
	{
		cout << exept.what() << endl << endl;
	}

	a.push(1);
	a.push(2);
	a.push(3);
	cout << "PriorityQueueL a: "<< a << endl;
	cout << "a.top(): " << a.top() << endl;
	a.pop();
	cout << "a.pop(), a: " << a << endl;
	PriorityQueueL b(a);
	cout << "PriorityQueueL b(a): " << b << endl;
	a.push(4);
	cout << "a.push(4): " << a << endl;
	cout << "b: " << b << endl;
	PriorityQueueL c;
	cout << "PriorityQueueL c = a: " << (c = a) << endl;
	cout << "PriorityQueueL c = b: " << (c = b) << endl;


};
