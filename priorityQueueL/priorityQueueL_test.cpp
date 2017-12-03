#include"priorityQueueL.h"
#include <iostream>

using namespace std;
int main()
{
	PriorityQueueL a;
	a.push(1);
	a.push(2);
	a.push(3);
	cout << a<< endl;
	cout << a.top() << endl;
	a.pop();
	cout << a << endl;
	PriorityQueueL b(a);
	a.push(4);
	cout << a << endl;
	cout << b << endl;


	
};
