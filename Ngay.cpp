#include "Ngay.h"

istream& operator >> (istream& is, Ngay& x)
{
	cout << "Ngay lap:";
	is >> x.ngaylap;
	
	cout << "Thang lap:";
	is >> x.thanglap;

	cout << "Nam lap:";
	is >> x.namlap;
 return is;
}
ostream& operator <<(ostream& os, Ngay x)
{
	os << "Lap Ngay:" << x.ngaylap << "-" << x.thanglap << "-" << x.namlap << endl;
	return os;
}