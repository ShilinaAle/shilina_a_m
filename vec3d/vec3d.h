#ifndef VEC3D_H_20171005
#define VEC3D_H_20171005
#include <iosfwd>
#include <sstream>

struct Vec3d
{
public:
	Vec3d() = default;
	Vec3d(const double x1, const double y1, const double z1);
	~Vec3d() = default;
	Vec3d(const Vec3d& v); //конструктор копирования
	
	std::ostream& writeTo(std::ostream& ostrm) const;
	std::istream& readFrom(std::istream& istr);

	Vec3d& operator=(const Vec3d& v); //ссылка - для множественного присваивания
	bool operator==(const Vec3d& v) const;
	bool operator!=(const Vec3d& v) const { return !operator==(v); }

	Vec3d& operator+=(const Vec3d& r);
	Vec3d& operator-=(const Vec3d& r);
	Vec3d& operator*=(const Vec3d& r); //скалярное произведение
	Vec3d& operator*=(const double& r);

	Vec3d& vec(const Vec3d& r);
	double leng();

public:
	double x{ 0.0 };
	double y{ 0.0 };
	double z{ 0.0 };

	const char leftBrace{ '(' };
	const char separator{ ';' };
	const char rightBrace{ ')' };

};
inline std::ostream& operator<<(std::ostream& ostrm, const Vec3d& r);
inline std::istream& operator>>(std::istream& istrm, Vec3d& r);
bool testParse(const std::string& str);

Vec3d operator+(const Vec3d& r, const Vec3d& l);
Vec3d operator-(const Vec3d& r, const Vec3d& l);
Vec3d operator*(const Vec3d& r, const Vec3d& l);

Vec3d operator*(const Vec3d& l, const double& r);
Vec3d operator*(const double& l, const Vec3d& r);
Vec3d operator/(const Vec3d& l, const double& r);


#endif // !VEC3D_H_20171005
/*
+ Vec3d (double, double, double);
+ Сравнение

+ Vec3d += Vec3d
+ Vec3d -= Vec3d
+ Vec3d *= Vec3d
+ Vec3d *= double

+ Vec3d + Vec3d
+ Vec3d - Vec3d
+ Vec3d * Vec3d

+ Vec3d * double
+ double * Vec3d
+ Vec3d / double

+ length();
+ [Vec3d;Vec3d]
*/