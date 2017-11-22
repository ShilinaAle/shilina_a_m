#include "array.h"
#include <iostream>

using namespace std;
int main()
{
	try { Array(-1); }
	catch (const invalid_argument& exept) 
	{ 
		cout << exept.what() << endl; //return -1; 
	}
	catch (const out_of_range& exept)
	{
		cout << exept.what() << endl;
	}
	catch (const length_error& exept)
	{
		cout << exept.what() << endl;
	}
	Array x(3);
	try { x.insert(4, 4); }
	catch (const invalid_argument& exept)
	{
		cout << exept.what() << endl; //return -1; 
	}
	catch (const out_of_range& exept)
	{
		cout << exept.what() << endl;
	}
	catch (const length_error& exept)
	{
		cout << exept.what() << endl;
	}
	try { x.insert(4, -4); }
	catch (const invalid_argument& exept)
	{
		cout << exept.what() << endl; //return -1; 
	}
	catch (const out_of_range& exept)
	{
		cout << exept.what() << endl;
	}
	catch (const length_error& exept)
	{
		cout << exept.what() << endl;
	}
	try { x.remove_i(-4); }
	catch (const invalid_argument& exept)
	{
		cout << exept.what() << endl; //return -1; 
	}
	catch (const out_of_range& exept)
	{
		cout << exept.what() << endl;
	}
	catch (const length_error& exept)
	{
		cout << exept.what() << endl;
	}
	try { x.remove_i(4); }
	catch (const invalid_argument& exept)
	{
		cout << exept.what() << endl; //return -1; 
	}
	catch (const out_of_range& exept)
	{
		cout << exept.what() << endl;
	}
	catch (const length_error& exept)
	{
		cout << exept.what() << endl;
	}

	Array a(3);
	a[0] = 4;
	a[1] = 5;
	a[2] = 99;
	cout << "a[3] = " << a << endl;
	Array b(a);
	a[0] = 111;
	cout << "a[3] = " << a << " fsize = " << b.fiz() << endl;
	b = a;
	cout << "b(a) = " << b << " fsize = " << b.fiz() << endl << endl;
	
	b.insert(96, 0);
	b.insert(99, 0);
	b.insert(99, 0);
	b.insert(98, 5);
	cout << "b.insert(a, i) x 4: " << b << " fsize = " << b.fiz() << " size = " << b.length() << endl << endl;
	
	b.remove_i(4);
	cout << "b.remove_i(4): " << b << " fsize = " << b.fiz() << " size = " << b.length() << endl << endl;
	
	b.remove(99);
	cout << "b.remove(99): " << b << " fsize = " << b.fiz() << " size = " << b.length() << endl << endl;

	/*a.~Array();
	cout << a << endl;*/
	//a.insert(666, 0);
	//a.insert(66, 2);
	//cout << a << " size = " << a.length() << endl;


	//почему работает ->
	int* w = new int[2]{ 0 };
	w[4] = 6;
	for (int i(0); i < 7 ; i += 1)
	{
		cout << w[i+1000] << ' ';
	}
	//<- почему работает 
}