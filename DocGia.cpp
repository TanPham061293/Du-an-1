#include "DocGia.h"

istream& operator >>(istream& is, DocGia& x)
{
	rewind(stdin);
	cout << "Ten doc gia:";
	is >> x.ten;

	rewind(stdin);
	is >> x.ngaylap;

	rewind(stdin);
	cout << "Thang hieu luc:";
	is >> x.thanghieuluc;

	return is;
}
ostream& operator <<(ostream& os, DocGia x)
{
	os << "Ten:" << x.ten << endl;
	os << x.ngaylap;
	os << "Thang hieu luc:" << x.thanghieuluc << endl;
	return os;
}