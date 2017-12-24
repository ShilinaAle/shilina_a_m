#include "matrixU.h"
#include <iostream>

using namespace std;
int main()
{
	MatrixU a(2, 3);
	a.at(1, 1) = 2;
	a.at(1, 0) = 2;
	a.at(1, 2) = 2;
	a.at(0, 2) = 2;
	cout << "a: " << endl << a;
	MatrixU b(a);
	b.at(0, 1) = 8;
	b.at(1, 1) = 4;
	b.at(0, 2) = 5;
	cout << "b: " << endl << b;
	cout << "(a += b): " << endl << (a += b);
	cout << "(a -= b): " << endl << (a -= b);
	MatrixU d(3, 2);

}