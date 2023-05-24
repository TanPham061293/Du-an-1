#include "DocGiaTreEm.h"

istream& operator >>(istream& is, DocGiaTreEm& a)
{
	DocGia* cha = static_cast <DocGia*>(&a);
	is >> *cha;
	cout << "Nguoi dai dien:";
	is >> a.nguoidaidien;
	return is;
}
ostream& operator <<(ostream& os, DocGiaTreEm a)
{
	DocGia cha = static_cast <DocGia>(a);
	os << cha;
	os <<"Nguoi dai dien:" << a.nguoidaidien<< endl;
	return os;
}