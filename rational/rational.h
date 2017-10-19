#ifndef RATIONAL_H_20170921
#define RATIONAL_H_20170921
#include <iosfwd>
#include <sstream>

struct Rational {
	Rational() {}
	explicit Rational(const int numerator);
	Rational(const int numerator, const int denominator);
	bool operator==(const Rational& rhs) const { return (num == rhs.num) && (denom == rhs.denom); }
	bool operator!=(const Rational& rhs) const { return !operator==(rhs); }
	Rational& operator=(const int& rhs);
	Rational& operator+=(const Rational& rhs);
	Rational& operator+=(const int rhs) { return operator+=(Rational(rhs)); }
	Rational& operator-=(const Rational& rhs);
	Rational& operator-=(const int rhs) { return operator-=(Rational(rhs)); }
	Rational& operator*=(const Rational& rhs);
	Rational& operator*=(const int rhs) { return operator*=(Rational(rhs)); }
	Rational& operator/=(const Rational& rhs);
	Rational& operator/=(const int rhs) { return operator*=(Rational(rhs)); }

	std::ostream& writeTo(std::ostream& ostrm) const;
	std::istream& readFrom(std::istream& istrm);

	int num{ 0 };
	int denom{ 1 };

	static const char separator{ '/' };

private:
	void nod();
};


Rational operator+(const Rational& lhs, const Rational& rhs);
Rational operator-(const Rational& lhs, const Rational& rhs);
Rational operator*(const Rational& lhs, const Rational& rhs);
Rational operator/(const Rational& lhs, const Rational& rhs);


inline std::ostream& operator<<(std::ostream& ostrm, const Rational& rhs);
inline std::istream& operator >> (std::istream& istrm, Rational& rhs);
bool testParse(const std::string& str);

#endif // !RATIONAL_H_20170921
/*
+ Rational(int);
+ Rational(int, int);
+ Сравнение их
+ Присваиваие Rational = int

+ Rational += Rational
+ Rational += int
+ Rational -= Rational
+ Rational -= int
+ Rational *= Rational
+ Rational *= int
+ Rational /= Rational
+ Rational /= int

+ Rational + Rational
+ Rational - Rational
+ Rational * Rational
+ Rational / Rational

Rational + int
int + Complex
Rational - int
int - Complex
Rational * int
int * Complex
Rational / int
int / Complex

Возведение в степень (^)
Извлечение корня (cqrt)

*/