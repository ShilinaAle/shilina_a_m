#include "rational.h"
#include <iostream>

int main()
{
	using namespace std;

	testParse("8./9");
	testParse("8/ 9 ");
	testParse("8/9.");
	std::cout << "Rational(30, 18) = " << Rational(30, 18) << endl;
	std::cout << "(7,1) != 7" << (Rational(7, 1) != Rational(7)) << endl;

	Rational z(2, 6);
	std::cout << "z = " << z << endl;
	z += Rational(1, 6);
	std::cout << "z += 1/6 = " << z << endl;
	z -= Rational(7, 3);
	std::cout << "z -= 7/3 = " << z << endl;
	Rational d = z * Rational(4, 3);
	std::cout << "z *= 4/3 = " << d << endl;
	Rational g(1, -6);
	std::cout << "g(1, -6) = " << g << endl;
}
