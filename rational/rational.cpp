#include "rational.h"
#include <iostream>
#include <sstream>

std::ostream& operator<<(std::ostream& ostrm, const Rational& rhs)
{
	return rhs.writeTo(ostrm);
}
std::istream& operator>> (std::istream& istrm, Rational& rhs)
{
	return rhs.readFrom(istrm);
}

bool testParse(const std::string& str)
{
	using namespace std;
	istringstream istrm(str);
	Rational z;
	istrm >> z;
	if (istrm.good()) {
		cout << "Read success: " << str << " -> " << z << endl;
	}
	else {
		cout << "Read error: " << str << " -> " << z << endl;
	}
	return istrm.good();
}

Rational::Rational(const int numerator)
	:Rational(numerator, 1)
{
}

Rational::Rational(const int numerator, const int denominator)
	: num(numerator),
	denom(denominator)
{
	minus(num, denom);
}

Rational& Rational::operator+=(const Rational& rhs)
{
	num = num*rhs.denom+rhs.num*denom;
	denom = denom* rhs.denom;
	int n = Nod(num, denom);
	num = num / n;
	denom = denom / n;
	return *this;
}

Rational& Rational::operator-=(const Rational& rhs)
{
	num = num*rhs.denom - rhs.num*denom;
	denom = denom * rhs.denom;
	int n = Nod(num, denom);
	num = num / n;
	denom = denom / n;
	return *this;
}

Rational& Rational::operator*=(const Rational& rhs)
{
	num = num * rhs.num;
	denom = denom * rhs.denom;
	int n = Nod(num, denom);
	num = num / n;
	denom = denom / n;
	return *this;
}
Rational operator+(const Rational& lhs, const Rational& rhs)
{
	Rational sum(lhs);
	sum += rhs;
	return sum;
}

Rational operator-(const Rational& lhs, const Rational& rhs)
{
	Rational sum(lhs);
	sum -= rhs;
	return sum;
}

Rational operator*(const Rational& lhs, const Rational& rhs)
{
	Rational sum(lhs);
	sum *= rhs;
	return sum;
}

std::ostream& Rational::writeTo(std::ostream& ostrm) const
{
	ostrm << num << separator << denom;
	return ostrm;
}
std::istream& Rational::readFrom(std::istream& istrm)
{
	int numerator(0);
	char sep(0);
	int denominator(1);
	istrm >> numerator >> sep >> denominator;
	if (istrm.good()) {
		if ((Rational::separator == sep) && (denominator != 0)) {
			num = numerator;
			denom = denominator;
		}
		else {
			istrm.setstate(std::ios_base::failbit);
		}
	}
	return istrm;
}
void minus(int& numerator, int& denominator)
{
	if ((denominator < 0) && (numerator < 0))
	{
		numerator = abs(numerator);
		denominator = abs(denominator);
	}
	if (denominator < 0)
	{
		numerator = -numerator;
		denominator = abs(denominator);
	}
}
int Nod(int a, int b)
{
	if (a < 0) { a = 0 - a; }
	while ((a != 0) && (b != 0))
	{
		if (a > b)
		{
			a = a%b;
		}
		else { b = b%a; }
	}
	return a + b;
}
