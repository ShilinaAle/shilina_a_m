#include "complex.h"
#include <iostream>
#include <iomanip>

int main()
{
	using namespace std;

	testParse("{8.9,9}");
	testParse("{8.9, 9}");
	testParse("{8.9,9");
	std::cout << endl;

	Complex compl;
	Complex c(2,5);
	Complex com(2, 5.00000001);
	std::cout << " compl = Complex(): " << endl;
	std::cout << " c = Complex(double): " << endl;
	std::cout << " com = Complex(double, doudle): " << endl << endl;

	std::cout << " compl = " << compl << endl;
	std::cout << " c = " << c << endl;
	std::cout << " com = " << setprecision(11) << com << endl << endl;

	compl = c;
	std::cout << " compl = c: " << compl << endl;
	std::cout << " compl == c: " << (compl == c) << endl;
	std::cout << " c != com: " << (c != com) << endl;
	com = double(5.5);
	std::cout << " com = double: " << com << endl << endl;

	compl += c;
	std::cout << " compl += c: " << compl << endl;
	compl -= c;
	std::cout << " compl -= c: " << compl << endl;
	double dbl = 1.5;
	compl += dbl;
	std::cout << " dbl = " << dbl << endl;
	std::cout << " compl += dbl: " << compl << endl;
	compl -= dbl;
	std::cout << " compl -= dbl: " << compl << endl;

	compl *= dbl;
	std::cout << " compl *= dbl: " << compl << endl;
	std::cout << " compl *= c: " << (compl *= c) << endl;

	std::cout << " compl /= c: " << (compl /= c) << endl;
	std::cout << " compl /= dbl: " << (compl /= dbl) << endl << endl;
	
	compl = Complex(2.5, 4);
	c = Complex(0.5, 3.5);
	std::cout << " c = " << c << endl;
	std::cout << " compl = " << compl << endl << endl;
	std::cout << " compl - c: " << (compl - c) << endl;
	std::cout << " compl + c: " << (compl + c) << endl;
	com = c * compl;
	std::cout << " com = compl * c: " << (compl * c) << endl;
	c = com / compl;
	std::cout << " c = com / compl: " << c << endl << endl;

	std::cout << " c = " << c << endl;
	std::cout << " compl = " << compl << endl;
	std::cout << " dbl = " << dbl << endl << endl;

	c = compl + dbl;
	std::cout << " c = compl + dbl:  " << c << endl;
	c = dbl + com;
	std::cout << " c = dbl + com:  " << c << endl;
	com = c - dbl;
	std::cout << " com = c - dbl:  " << com << endl;
	c = dbl - com;
	std::cout << " c = dbl - com:  " << c << endl << endl;

	compl = Complex(2, 4);
	std::cout << " compl = " << compl << endl;
	std::cout << " dbl = " << dbl << endl << endl;

	c = compl * dbl;
	std::cout << " c = compl * dbl:  " << c << endl;
	c = dbl * compl;
	std::cout << " c = dbl * compl:  " << c << endl;
	compl = c / dbl;
	std::cout << " compl = c / dbl:  " << compl << endl;
	c = dbl / compl;
	std::cout << " c = dbl / compl:  " << c << endl << endl;

	std::cout << " c = !c:  " << (c = !c) << endl;
	compl = Complex(2, 4);
	std::cout << " compl = " << compl << endl;
	std::cout << " compl^3 =  " << (compl = compl^3) << endl;
}
