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
void Rational::nod()
{
	int a = num;
	int b = denom;
	if (a < 0) { a = -a; }
	while ((a != 0) && (b != 0))
	{
		if (a > b)
		{
			a = a%b;
		}
		else { b = b%a; }
	}
	num = num / (a + b);
	denom = denom / (a + b);
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
	if ((denom < 0) && (num < 0))
	{
		num = abs(num);
		denom = abs(denom);
	}
	if (denom < 0)
	{
		num = -num;
		denom = abs(denom);
	}
	nod();
}

Rational& Rational::operator+=(const Rational& rhs)
{
	num = num*rhs.denom+rhs.num*denom;
	denom = denom* rhs.denom;
	nod();
	return *this;
}

Rational& Rational::operator-=(const Rational& rhs)
{
	num = num*rhs.denom - rhs.num*denom;
	denom = denom * rhs.denom;
	nod();
	return *this;
}

Rational& Rational::operator*=(const Rational& rhs)
{
	num = num * rhs.num;
	denom = denom * rhs.denom;
	nod();
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

