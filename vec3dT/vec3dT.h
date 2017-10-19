#ifndef VEC3D_H_20171014
#define VEC3D_H_20171014
#include <iosfwd>
#include <iostream>
#include <sstream>

template <typename T>
struct Vec3dT
{
public:
	Vec3dT<T>() = default;
	Vec3dT<T>(const T x1, const T y1, const T z1)
		:x(x1), y(y1), z(z1) 
	{};	
	~Vec3dT<T>() = default;
	Vec3dT<T>(const Vec3dT<T>& v)
		: x(v.x), y(v.y), z(v.z) {}; //конструктор копирования

	std::ostream& writeTo(std::ostream& ostrm) const
	{
		ostrm << leftBrace << x << separator << y << separator << z << rightBrace;
		return ostrm;
	}
	/*std::istream& readFrom(std::istream& istr)
	{
		{
			char leftBrace(0);
			T x1( T() );
			char separator1(0);
			T y1( T() );
			char separator2(0);
			T z1( T() );
			char rightBrace(0);
			istrm >> leftBrace >> x1 >> separator1 >> y1 >> separator2 >> z1 >> rightBrace;
			if (istrm.good()) {
				if ((Vec3dT<T>::leftBrace == leftBrace) && (Vec3dT<T>::separator == separator1)
					&& (Vec3dT<T>::separator == separator2) && (Vec3d<T>::rightBrace == rightBrace)) 
				{
					x = x1;
					y = y1;
					z = z1;
				}
				else {
					istrm.setstate(std::ios_base::failbit);
				}
			}
			return istrm;
		}
	}*/
	
	Vec3dT<T>& operator=(const Vec3dT<T>& v)
	{
		x = v.x;
		y = v.y;
		z = v.z;
		return *this;
	}
	bool compareTo(const Vec3dT<T>& v);
	Vec3dT<T>& operator+=(const Vec3dT<T>& r) 
	{
		*this = Vec3dT<T>(r.x + x, r.y + y, r.z + z);
		return(*this);
	}
	Vec3dT<T>& operator-=(const Vec3dT<T>& r)
	{
		*this = Vec3dT<T>(x - r.x, y - r.y, z - r.z);
		return(*this);
	}
	Vec3dT<T>& operator*=(const Vec3dT<T>& r)
	{
		*this = Vec3dT<T>(r.x * x, r.y * y, r.z * z);
		return(*this);
	}
	Vec3dT<T>& operator*=(const double& r)
	{
		*this = Vec3dT<T>(x*r, y*r, z*r);
		return *this;
	}

	Vec3dT<T>& vec(const Vec3dT<T>& r)
	{
		*this = Vec3dT<T>(y*r.z - z*r.y, (x*r.z - z*r.x)*(-1), x*r.y - y*r.x);
		return(*this);
	}
	double leng() 
	{
		double a = sqrt(x*x + y*y + z*z);
		return a;
	}

public:
	T x{ T() };
	T y{ T() };
	T z{ T() };

	const char leftBrace{ '(' };
	const char separator{ ';' };
	const char rightBrace{ ')' };

};

template <typename T>
bool Vec3dT<T>::compareTo(const Vec3dT<T>& v)
{
	return ((x == v.x) && (y == v.y) && (z == v.z));
}

bool Vec3dT<float>::compareTo(const Vec3dT<float>& v)
{
	const float e = 1e-6;
	return ((x - v.x) < e && (y - v.y) < e && (z - v.z) < e);
}

bool Vec3dT<double>::compareTo(const Vec3dT<double>& v)
{
	const double e = 1e-6;
	return ((x - v.x) < e && (y - v.y) < e && (z - v.z) < e);
}

template <typename T>
inline std::ostream& operator<<(std::ostream& ostrm, const Vec3dT<T>& r)
{
	return r.writeTo(ostrm);
}
//template <typename T>
//inline std::istream& operator >> (std::istream& istrm, Vec3dT<T>& r)
//{
//	return r.readFrom(istrm);
//}
//template<typename T>
//bool testParse(const std::string& str)
//{
//	using namespace std;
//	istringstream istrm(str);
//	Vec3dT<T> z;
//	istrm >> z;
//	if (istrm.good()) {
//		cout << "Read success: " << str << " -> " << z << endl;
//	}
//	else {
//		cout << "Read error: " << str << " -> " << z << endl;
//	}
//	return istrm.good();
//}
template <typename T>
Vec3dT<T> operator+(const Vec3dT<T>& r, const Vec3dT<T>& l) 
{
	Vec3dT<T> sum;
	sum.x = r.x + l.x;
	sum.y = r.y + l.y;
	sum.z = r.z + l.z;
	return sum;
}
template <typename T>
Vec3dT<T> operator-(const Vec3dT<T>& r, const Vec3dT<T>& l)
{
	Vec3dT<T> sum;
	sum.x = r.x - l.x;
	sum.y = r.y - l.y;
	sum.z = r.z - l.z;
	return sum;
}
template <typename T>
Vec3dT<T> operator*(const Vec3dT<T>& r, const Vec3dT<T>& l)
{
	Vec3dT<T> sum(r.x, r.y, r.z);
	sum *= l;
	return l;
}
template <typename T>
Vec3dT<T> operator*(const Vec3dT<T>& l, const double& r)
{
	return Vec3dT<T>(l.x*r, l.y*r, l.z*r);
}
template <typename T>
Vec3dT<T> operator*(const double& l, const Vec3dT<T>& r)
{
	return Vec3dT<T>(l*r.x, l*r.y, l*r.z);
}
template <typename T>
Vec3dT<T> operator/(const Vec3dT<T>& l, const double& r)
{
	return Vec3dT<T>(l.x / r, l.y / r, l.z / r);
}

#endif // !VEC3D_H_20171014
/*
+ Vec3dT (double, double, double);
+ Сравнение

+ Vec3dT += Vec3dT
+ Vec3dT -= Vec3dT
+ Vec3dT *= Vec3dT
+ Vec3dT *= double

+ Vec3dT + Vec3dT
+ Vec3dT - Vec3dT
+ Vec3dT * Vec3dT

+ Vec3dT * double
+ double * Vec3dT
+ Vec3dT / double

+ length();
+ [Vec3dT;Vec3dT]

testParse (?)
*/