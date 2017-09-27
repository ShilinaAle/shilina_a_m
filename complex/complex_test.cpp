#include "complex.h"
#include <iostream>
int main()
{
	using namespace std;

	testParse("{8.9,9}");
	testParse("{8.9, 9}");
	testParse("{8.9,9");

	Complex z(9, 6.7);
	std::cout << "z = " << z << endl;
	z += Complex(8, 0.3);
	std::cout << "z += {8,0.3} = " << z << endl;
	z -= Complex(8, 0.3);
	std::cout << "z -= {8,0.3} = " << z << endl;
	std::cout << endl;

	Complex a(1.4, 3);
	Complex b(1.6, 3);
	Complex c = a + b;
	std::cout << "c = a {1.4, 3} + b {1.6, 3} = " << c << endl;
	std::cout << "c = c - 2 = " << c - Complex(2) << endl;
	std::cout << endl;

	z *= Complex(8, 2.3);
	std::cout << "z*= {8, 2.3} = " << z << " right answer is {56.59, 74.3}" << endl;
	z *= 8.7;
	std::cout << "z+= 8.7 = " << z << " right answer is {492.333, 646.41}" << endl;
	c = a * b;
	std::cout << "c = a * b = " << c << endl;

}
