#include "rect2d.h"
#include <iostream>


Rect2d::Rect2d(const double x_, const double y_, const double w_, const double h_)
	:x(x_), y(y_), w(w_), h(h_)
{}
Rect2d::Rect2d(const Rect2d& v)
	:x(v.x), y(v.y), w(v.w), h(v.h)
{}

Rect2d& Rect2d::operator=(const Rect2d& v)
{
	x = v.x;
	y = v.y;
	w = v.w;
	h = v.h;
	return *this;
} 
bool Rect2d::operator==(const Rect2d & v) const
{
	double eps = 1e-5;
	return ((abs(x - v.x) <= eps) && (abs(y - v.y) <= eps)
		&& (abs(w - v.w) <= eps) && (abs(h - v.h) <= eps));
}

std::ostream& Rect2d::writeTo(std::ostream& ostrm) const
{
	ostrm << x << "; " << y << ":  " << w << 'x' << h;
	return ostrm;
}

std::ostream& operator<<(std::ostream& ostrm, const Rect2d& r)
{
	return r.writeTo(ostrm);
}

double Rect2d::s()
{
	double s_ = w*h;
	return(s_);
}

double Rect2d::p()
{
	double p_ = 2 * (w + h);
	return(p_);
}

bool Rect2d::contains(const double x_, const double y_)
{
	return ((x_ >= x) && (x_ <= (x + w)) && (y_ >= y) && (y_ <= (y + h)));
}

Rect2d operator&(const Rect2d& lhs, const Rect2d rhs)
{
	Rect2d sum;
	if (lhs.x <= rhs.x)
	{
		sum.x = lhs.x;
		sum.w = (rhs.x + rhs.w - lhs.x);
	}
	else {
		sum.x = rhs.x;
		sum.w = lhs.x + lhs.w - rhs.x;
	}
	if (lhs.y <= rhs.y)
	{
		sum.y = lhs.y;
		sum.h = rhs.y + rhs.h - lhs.y;
	}
	else {
		sum.y = rhs.y;
		sum.h = lhs.y + lhs.h - rhs.y;
	}
	return sum;
};
