#include "array.h"
#include <iostream>

using namespace std;
int main()
{
	Array a(3);
	a[0] = 4;
	a[1] = 5;
	a[2] = 6;
	cout << a << endl;
	a.insert(666, 2);
	cout << a << "size = " << a.length() << endl;
}