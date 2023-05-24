#pragma once
#include "DocGia.h"
class DocGiaTreEm :public DocGia
{
	string nguoidaidien;
public:
	friend istream& operator >>(istream&, DocGiaTreEm&);
	friend ostream& operator <<(ostream&, DocGiaTreEm);
};

