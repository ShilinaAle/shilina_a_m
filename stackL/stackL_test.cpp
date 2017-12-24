#include"stackL.h"

int main()
{
	StackL a;
	cout << "a.isEmpty(); " << a.isEmpty() << endl;
	try { a.top(); }
	catch (const invalid_argument& exept)
	{
		cout << exept.what() << endl << endl;
	}
	a.push(1);
	a.push(2);
	a.push(3);
	cout << "a: "<< a << endl;
	StackL b(a);
	cout << "StackL b(a): " << b << endl;
	cout << "StackL b: " << b << endl;
	StackL c;
	c = b;
	cout << "StackL c = b: " << c << endl;
	

};
