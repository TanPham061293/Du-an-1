#include "DocGiaNguoiLon.h"

istream& operator >>(istream& is, DocGiaNguoiLon& a)
{
	DocGia* cha = static_cast<DocGia*>(&a);
	is >> *cha;
	cout << "CMND so:";
	is >> a.cmnd;
	return is;
}
ostream& operator <<(ostream& os, DocGiaNguoiLon a)
{
	DocGia cha = static_cast<DocGia>(a);
	os << cha;
	os << "CMND so:" << a.cmnd << endl;
	return os;
}