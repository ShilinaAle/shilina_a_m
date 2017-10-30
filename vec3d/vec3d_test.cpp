#include "vec3d.h"
#include <iostream>
#include <iomanip>

int main()
{
	using namespace std;

	testParse(" (3, 6, 7)");
	testParse(" (3; 6; 7)");
	cout << fixed << setprecision(2) << endl;
	Vec3d vec;
	Vec3d vec1(1, 2.5, 3);
	vec = vec1;
	cout << "vec = " << vec << endl;
	Vec3d s = vec + vec1;
	cout << "s = " << s << endl << endl;
	cout << "s != vec:  " << (s != vec) << endl;
	cout << "s += vec:  " << (s+=vec) << endl;
	cout << "s -= vec:  " << (s-=vec) << endl;
	cout << "s *= vec:  " << (s *= vec) << endl;
	double dbl = 0.5;
	cout << "s*= 0.5:  " << (s *= dbl) << endl << endl;
	
	cout << "s + vec:  " << (s + vec) << endl;
	cout << "s - vec:  " << (s - vec) << endl;
	cout << "s * vec:  " << (s * vec) << endl << endl;

	cout << "vec = " << vec << endl;
	cout << "dbl = " << dbl << endl << endl;
	cout << "vec * dbl:  " << (vec * dbl) << endl;
	cout << "dbl * vec:  " << (dbl * vec) << endl;
	cout << "vec / dbl:  "  << (vec/dbl) << endl << endl;

	vec1 = Vec3d(2, 1, 5.5);
	cout << "vec = " << vec << endl;
	cout << "vec1 = " << vec1 << endl << endl;
	cout << "length vec = " << vec.leng() << endl;
	cout << "[vec;vec1] = " << vec.vec(vec1) << endl;

}
