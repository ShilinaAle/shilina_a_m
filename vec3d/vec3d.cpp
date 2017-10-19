#include "vec3d.h"
#include <iostream>

Vec3d::Vec3d(const double x1, const double y1, const double z1)
	:x(x1), y(y1), z(z1)
{}
Vec3d::Vec3d(const Vec3d& v)
	:x(v.x), y(v.y), z(v.z)
{}

Vec3d& Vec3d::operator=(const Vec3d& v) //ссылка для множественного присваивания
{
	x = v.x;
	y = v.y;
	z = v.z;
	return *this;
} //дефолтный оператор отработал бы. Попробовать

bool Vec3d::operator==(const Vec3d & v) const
{
	double eps = 1e-5;
	return ((abs(x - v.x) <= eps) && (abs(y - v.y) <= eps) && (abs(z - v.z) <= eps));
}

std::ostream& Vec3d::writeTo(std::ostream& ostrm) const
{
	ostrm << leftBrace << x << separator << y << separator << z << rightBrace;
	return ostrm;
}
std::istream& Vec3d::readFrom(std::istream& istrm)
{
	{
		char leftBrace(0);
		double x1(0.0);
		char separator1(0);
		double y1(0.0);
		char separator2(0);
		double z1(0.0);
		char rightBrace(0);
		istrm >> leftBrace >> x1 >> separator1 >> y1 >> separator2 >> z1 >> rightBrace;
		if (istrm.good()) {
			if ((Vec3d::leftBrace == leftBrace) && (Vec3d::separator == separator1)
				&& (Vec3d::separator == separator2) && (Vec3d::rightBrace == rightBrace)) {
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
}

std::ostream& operator<<(std::ostream& ostrm, const Vec3d& r)
{
	return r.writeTo(ostrm);
}
std::istream& operator>>(std::istream& istrm, Vec3d& r)
{
	return r.readFrom(istrm);
}
bool testParse(const std::string& str)
{
	using namespace std;
	istringstream istrm(str);
	Vec3d z;
	istrm >> z;
	if (istrm.good()) {
		cout << "Read success: " << str << " -> " << z << endl;
	}
	else {
		cout << "Read error: " << str << " -> " << z << endl;
	}
	return istrm.good();
}

Vec3d& Vec3d::operator+=(const Vec3d& r)
{
	*this = Vec3d(r.x + x, r.y + y, r.z + z);
	return(*this);
}

Vec3d& Vec3d::operator-=(const Vec3d& r)
{
	*this = Vec3d(x - r.x, y - r.y, z - r.z);
	return(*this);
}

Vec3d& Vec3d::operator*=(const Vec3d& r)
{
	*this = Vec3d(r.x * x, r.y * y, r.z * z);
	return(*this);
}

Vec3d & Vec3d::operator*=(const double & r)
{
	*this = Vec3d(x*r, y*r, z*r);
	return *this;
}

Vec3d& Vec3d::vec(const Vec3d& r)
{
	*this = Vec3d(y*r.z - z*r.y, (x*r.z - z*r.x)*(-1), x*r.y - y*r.x);
	return(*this);
}

double Vec3d::leng()
{
	int a = sqrt(x*x + y*y + z*z);
	return a;
}
Vec3d operator+(const Vec3d& r, const Vec3d& l)
{
	Vec3d sum;
	sum.x = r.x + l.x;
	sum.y = r.y + l.y;
	sum.z = r.z + l.z;
	return sum;
}

Vec3d operator-(const Vec3d& r, const Vec3d& l)
{
	Vec3d sum;
	sum.x = r.x - l.x;
	sum.y = r.y - l.y;
	sum.z = r.z - l.z;
	return sum;
}

Vec3d operator*(const Vec3d & r, const Vec3d & l)
{
	Vec3d sum(r.x, r.y, r.z);
	sum *= l;
	return l;
}

Vec3d operator*(const Vec3d & l, const double & r)
{
	return Vec3d(l.x*r, l.y*r, l.z*r);
}

Vec3d operator*(const double & l, const Vec3d & r)
{
	return Vec3d(l*r.x, l*r.y, l*r.z);
}

Vec3d operator/(const Vec3d & l, const double & r)
{
	return Vec3d(l.x/r, l.y/r, l.z/r);
}
