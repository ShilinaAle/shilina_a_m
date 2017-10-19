#include "rational.h"
#include <iostream>

int main()
{
	using namespace std;

	testParse("8./9");
	testParse("8/ 9 ");
	testParse("8/9.");
	std::cout << "Rational(30, 18) = " << Rational(30, 18) << endl << endl;
	std::cout << "(7,1) != 7: " << (Rational(7, 1) != Rational(7)) << endl;
	Rational g(1, -6);
	std::cout << "g(1, -6) = " << g << endl << endl;

	Rational z(2, 6);
	std::cout << "z = " << z << endl;
	z = 3;
	std::cout << "z = int, z = " << z << endl;
	z += Rational(5, 6);
	std::cout << "z += 1/6 = " << z << endl;
	z -= Rational(7, 3);
	std::cout << "z -= 7/3 = " << z << endl;
	z *= Rational(4, 3);
	std::cout << "z *= 4/3 = " << z << endl;
	z /= Rational(5, 6);
	std::cout << "z /= 5/6 = " << z << endl;
	int i(2);
	std::cout << "i (int) = " << i << endl;
	std::cout << "z += i = " << (z += i) << endl;
	std::cout << "z -= i = " << (z -= i) << endl;
	std::cout << "z *= i = " << (z *= i) << endl;
	std::cout << "z /= i = " << (z /= i) << endl << endl;

	Rational d(2, 5);
	std::cout << "z = " << z << endl;
	std::cout << "d = " << d << endl;
	std::cout << "z + d = " << (z + d) << endl;
	std::cout << "z - d = " << (z - d) << endl;
	std::cout << "z * d = " << (z * d) << endl;
	std::cout << "z / d = " << (z / d) << endl;

}
