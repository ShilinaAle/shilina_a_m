#ifndef RECT2D_19_10_17
#define RECT2D_19_10_17
#include <iosfwd>
#include <sstream>

struct Rect2d
{
public:
	Rect2d() = default;
	Rect2d(const double x_, const double y_, const double w_, const double h_);
	~Rect2d() = default;
	Rect2d(const Rect2d& v);

	std::ostream& writeTo(std::ostream& ostrm) const;

	Rect2d& operator=(const Rect2d& v); //ссылка - для множественного присваивания
	bool operator==(const Rect2d& v) const;
	bool operator!=(const Rect2d& v) const { return !operator==(v); }
	
	double s();
	double p();
	bool contains(const double x_, const double y_);

public:
	double x{ 0.0 };
	double y{ 0.0 };
	double w{ 0.0 };
	double h{ 0.0 };


};
std::ostream& operator<<(std::ostream& ostrm, const Rect2d& r);

Rect2d operator&(const Rect2d& lhs, const Rect2d rhs);


#endif // !RECT2D_19_10_17
