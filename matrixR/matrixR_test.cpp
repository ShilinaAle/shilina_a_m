#include "matrixR.h"

#include <iostream>
using namespace std;
int main()
{
	MatrixR mat;
	cout << mat << endl;
	MatrixR m2(2, 3);
	m2.at(0, 0) = 0;
	m2.at(0, 1) = 0;
	m2.at(0, 2) = 1;
	m2.at(1, 0) = 2;
	m2.at(1, 1) = 3;
	m2.at(1, 2) = 4;
	cout << m2 << endl;
	MatrixR m3(1, 1);
	cout << "m3 = m2: " << endl << (m3 = m2) << endl;
	MatrixR m(m3);
	cout << "m(m3):" << endl << m << endl;
	cout << "m3 == m: " << (m3 == m) << endl;
		
	MatrixR a(3, 3);
	MatrixR b(3, 2);
	a.at(0, 0) = 1;
	a.at(0, 1) = 1;
	a.at(0, 2) = 1;
	a.at(1, 0) = 1;
	a.at(1, 1) = 1;
	a.at(1, 2) = 1;
	a.at(2, 0) = 1;
	a.at(2, 1) = 1;
	a.at(2, 2) = 1;
	b.at(0, 0) = 2;
	b.at(0, 1) = 3;
	b.at(1, 0) = 4;
	b.at(1, 1) = 5;
	b.at(2, 0) = 6;
	b.at(2, 1) = 7;
	cout << "a: "<< endl<< a << endl;
	cout << "b: " << endl << b << endl;
	cout << "a * b:" << endl << (a*b) <<  endl;
	

	try
	{
		MatrixR m2(-1, 1);
	}
	catch (invalid_argument& e)
	{
		cout << e.what() << endl;
	}
	catch (length_error& e)
	{
		cout << e.what() << endl;
	}
	catch (out_of_range& e)
	{
		cout << e.what() << endl;
	}
	catch (...)
	{
		cout << "Unknown; try else:" << endl;
		throw;
	}

};
