#include "complex.h"
#include <iostream>

std::ostream& operator<<(std::ostream& ostrm, const Complex& rhs)
{
	return rhs.writeTo(ostrm);
}
std::istream& operator>> (std::istream& istrm, Complex& rhs)
{
	return rhs.readFrom(istrm);
}
bool testParse(const std::string& str)
{
	using namespace std;
	istringstream istrm(str);
	Complex z;
	istrm >> z;
	if (istrm.good()) {
		cout << "Read success: " << str << " -> " << z << endl;
	}
	else {
		cout << "Read error: " << str << " -> " << z << endl;
	}
	return istrm.good();
}
std::ostream& Complex::writeTo(std::ostream& ostrm) const
{
	ostrm << leftBrace << re << separator << im << rightBrace;
	return ostrm;
}
std::istream& Complex::readFrom(std::istream& istrm)
{
	char leftBrace(0);
	double real(0.0);
	char comma(0);
	double imaginary(0.0);
	char rightBrace(0);
	istrm >> leftBrace >> real >> comma >> imaginary >> rightBrace;
	if (istrm.good()) {
		if ((Complex::leftBrace == leftBrace) && (Complex::separator == comma)
			&& (Complex::rightBrace == rightBrace)) {
			re = real;
			im = imaginary;
		}
		else {
			istrm.setstate(std::ios_base::failbit);
		}
	}
	return istrm;
}

Complex::Complex(const double real)
	: Complex(real, 0.0)
{
}

Complex::Complex(const double real, const double imaginary)
	: re(real),
	im(imaginary)
{
}

Complex& Complex::operator=(const double& rhs)
{
	*this = Complex(rhs);
	return *this;
}

Complex& Complex::operator+=(const Complex& rhs)
{
	re += rhs.re;
	im += rhs.im;
	return *this;
}

Complex& Complex::operator-=(const Complex& rhs)
{
	re -= rhs.re;
	im -= rhs.im;
	return *this;
}

Complex& Complex::operator*=(const Complex& rhs)
{
	double re1 = re;
	re = re * rhs.re - im * rhs.im;
	im = re1 * rhs.im + im * rhs.re;
	return *this;
}

Complex& Complex::operator*=(const double rhs)
{
	re *= rhs;
	im *= rhs;
	return *this;
}

Complex& Complex::operator/=(const Complex& rhs)
{
	double re1 = re;
	re = (re * rhs.re + im * rhs.im) / (rhs.re * rhs.re + rhs.im * rhs.im);
	im = (rhs.re * im - re1 * rhs.im) / (rhs.re * rhs.re + rhs.im * rhs.im);
	return *this;
}
Complex operator+(const Complex& lhs, const Complex& rhs)
{
	Complex sum(lhs);
	sum += rhs;
	return sum;
}

Complex operator-(const Complex& lhs, const Complex& rhs)
{
	return Complex(lhs.re - rhs.re, lhs.im - rhs.im);
}

Complex operator*(const Complex& lhs, const Complex& rhs)
{
	return Complex(lhs.re * rhs.re - lhs.im * rhs.im, lhs.re * rhs.im + lhs.im * rhs.re);
}
Complex operator/(const Complex& lhs, const Complex& rhs)
{
	return Complex((lhs.re * rhs.re + lhs.im * rhs.im) / (rhs.re * rhs.re + rhs.im * rhs.im), 
		(rhs.re * lhs.im - lhs.re * rhs.im) / (rhs.re * rhs.re + rhs.im * rhs.im));
}

Complex operator+(const Complex & lhs, const double & rhs)
{
	return Complex(lhs.re + rhs, lhs.im);
}

Complex operator+(const double & lhs, const Complex & rhs)
{
	return Complex(lhs + rhs.re, rhs.im);
}

Complex operator-(const Complex & lhs, const double & rhs)
{
	return Complex(lhs.re - rhs, lhs.im);
}

Complex operator-(const double & lhs, const Complex & rhs)
{
	return Complex(lhs - rhs.re, rhs.im);
}
Complex operator*(const Complex & lhs, const double & rhs)
{
	return Complex(lhs.re * rhs, lhs.im * rhs);
}

Complex operator*(const double & lhs, const Complex & rhs)
{
	return Complex(lhs * rhs.re, lhs * rhs.im);
}
Complex operator/(const Complex & lhs, const double & rhs)
{
	return Complex(lhs.re / rhs, lhs.im / rhs);
}

Complex operator/(const double & lhs, const Complex & rhs)
{
	return Complex(lhs) / rhs;
}

Complex operator!(const Complex& rhs)
{
	return Complex (rhs.re, -rhs.im);
}


Complex operator^(const Complex & lhs, const int & rhs)
{ 
	Complex com = lhs;
	for (int i = rhs - 1; i > 0; i = i - 1)
	{
		com = com * lhs;
	}
	return com;
}