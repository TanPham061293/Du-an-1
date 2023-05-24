#pragma once
#include"Ngay.h"
#include <string>
class DocGia
{
private:
	string ten;
	Ngay ngaylap;
	int thanghieuluc;
public:
	friend istream& operator >>(istream&, DocGia&);
	friend ostream& operator <<(ostream&, DocGia);
};