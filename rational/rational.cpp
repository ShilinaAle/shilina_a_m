#include <iostream>
#include <sstream>

struct Rational {
	Rational() {}
	explicit Rational(const int numerator);
	Rational(const int numerator, const int denominator);
	bool operator==(const Rational& rhs) const { return (num == rhs.num) && (denom == rhs.denom); }
	bool operator!=(const Rational& rhs) const { return !operator==(rhs); }
	Rational& operator+=(const Rational& rhs);
	Rational& operator+=(const int rhs) { return operator+=(Rational(rhs)); }
	Rational& operator-=(const Rational& rhs);
	Rational& operator-=(const int rhs) { return operator-=(Rational(rhs)); }
	Rational& operator*=(const Rational& rhs);
	Rational& operator*=(const int rhs) { return operator*=(Rational(rhs)); }
	std::ostream& writeTo(std::ostream& ostrm) const;
	std::istream& readFrom(std::istream& istrm);

	int num{ 0 }; 
	int denom{ 1 };

	/*static const char leftBrace{ '{' };
	static const char rightBrace{ '}' };*/
	static const char separator{ '/' };
};
bool minus(Rational& lhs, Rational& rhs);
int Nod(int a, int b);

Rational operator+(const Rational& lhs, const Rational& rhs);
Rational operator-(const Rational& lhs, const Rational& rhs);
Rational operator*(const Rational& lhs, const Rational& rhs);

inline std::ostream& operator<<(std::ostream& ostrm, const Rational& rhs)
{
	return rhs.writeTo(ostrm);
}
inline std::istream& operator>> (std::istream& istrm, Rational& rhs)
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


int main()
{
	using namespace std;

	testParse("8./9");
	testParse("8/ 9 ");
	testParse("8/9.");
	int f = Nod(30, 18);
	std::cout << f << endl;
	std::cout << (Rational(7, 1) != Rational(7)) << endl;

	Rational z(2, 6);
	std::cout << "z = " << z << endl;
	z += Rational(1,6);
	std::cout << "z += 1/6 = " << z << endl;
	z -= Rational(7,3);
	std::cout << "z -= 7/3 = " << z << endl;
	Rational d = z * Rational(4, 3);
	std::cout << "z *= 4/3 = " << d << endl;
	std::cout << endl;
}

Rational::Rational(const int numerator)
	:Rational(numerator, 1)
{
}

Rational::Rational(const int numerator, const int denominator)
	: num(numerator),
	denom(denominator)
{
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
	/*char leftBrace(0);
	char rightBrace(0);*/
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
//bool minus(Rational& lhs, Rational& rhs)
//{
//	bool min(true);
//	if (lhs.num < 0) min = !min;
//	if (lhs.denom < 0) min = !min;
//	if (rhs.num < 0) min = !min;
//	if (rhs.denom < 0) min = !min;
//	return min;
//}
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
