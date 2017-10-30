#include "rect2d.h"
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	cout << fixed << setprecision(2) << endl;
	Rect2d rec;
	Rect2d rec1(1, 2, 3, 4);
	rec = rec1;
	cout << "rec = " << rec << endl;
	cout << "S rec = " << rec.s() << endl;
	cout << "P rec = " << rec.p() << endl;
	cout << "rec contain a[3,2] = " << rec.contains(4, 2) << endl; 
	cout << "rec contain a[6,3] = " << rec.contains(6, 3) << endl;

	cout << " &  = " << (rec & Rect2d(4, 0, 2, 2)) << endl;
	return 0;
}
