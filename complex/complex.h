#ifndef COMPLEX_H_20170921
#define COMPLEX_H_20170921
#include <iosfwd>
#include <sstream>
struct Complex {
	Complex() {}
	explicit Complex(const double real);
	Complex(const double real, const double imaginary);
	bool operator==(const Complex& rhs) const 
	{ 
		double eps = 1e-5;
		return ((abs(re - rhs.re) <= eps) && (abs(im - rhs.im) <= eps));
	}
	bool operator!=(const Complex& rhs) const { return !operator==(rhs); }
	Complex& operator=(const double& rhs);
	Complex& operator+=(const Complex& rhs);
	Complex& operator+=(const double rhs) { return operator+=(Complex(rhs)); }
	Complex& operator-=(const Complex& rhs);
	Complex& operator-=(const double rhs) { return operator-=(Complex(rhs)); }
	Complex& operator*=(const Complex& rhs);
	Complex& operator*=(const double rhs);
	Complex& operator/=(const Complex& rhs);
	Complex& operator/=(const double rhs) { return operator/=(Complex(rhs)); }

	std::ostream& writeTo(std::ostream& ostrm) const;
	std::istream& readFrom(std::istream& istrm);

	double re{ 0.0 };
	double im{ 0.0 };

	static const char leftBrace{ '{' };
	static const char separator{ ',' };
	static const char rightBrace{ '}' };
};

Complex operator+(const Complex& lhs, const Complex& rhs);
Complex operator-(const Complex& lhs, const Complex& rhs);
Complex operator*(const Complex& lhs, const Complex& rhs);
Complex operator/(const Complex& lhs, const Complex& rhs);

inline std::ostream& operator<<(std::ostream& ostrm, const Complex& rhs);
inline std::istream& operator >> (std::istream& istrm, Complex& rhs);
bool testParse(const std::string& str);

Complex operator+(const Complex & lhs, const double & rhs);
Complex operator+(const double & lhs, const Complex & rhs);
Complex operator-(const Complex & lhs, const double & rhs);
Complex operator-(const double & lhs, const Complex & rhs);
Complex operator*(const Complex & lhs, const double & rhs);
Complex operator*(const double & lhs, const Complex & rhs);
Complex operator/(const Complex & lhs, const double & rhs);
Complex operator/(const double & lhs, const Complex & rhs);

Complex operator!(const Complex& rhs);
Complex operator^(const Complex & lhs, const int & rhs);

#endif // !COMPLEX_H_20170921
/*
+ Complex(double);
+ Complex(double, double);
+ Сравнение их
+ Присваиваие Complex = double

+ Complex += Complex
+ Complex += double
+ Complex -= Complex
+ Complex -= double
+ Complex *= Complex
+ Complex *= double
+ Complex /= Complex
+ Complex /= double

+ Complex - Complex 
+ Complex + Complex
+ Complex * Complex
+ Complex / Complex

+ Complex - double
+ double - Complex
+ Complex + double
+ double + Complex
+ Complex * double
+ double * Complex
+ Complex / double
+ double / Complex

+ Вычисление комплексно сопряженного (!)
+ Возведение в степень (^)
Извлечение корня (массивы?)

*/