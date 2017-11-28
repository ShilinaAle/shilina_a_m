#include "matrixU.h"
#include <iostream>

using namespace std;
int main()
{
	MatrixU a(2, 3);
	a.at(1, 1) = 2;
	cout << a;
	MatrixU b(a);
	a.at(0, 1) = 8;
	cout << b;



}