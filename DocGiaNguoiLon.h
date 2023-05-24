#pragma once
#include "DocGia.h"
class DocGiaNguoiLon :public DocGia
{
private:
	string cmnd;
public:
	friend istream& operator >>(istream&, DocGiaNguoiLon&);
	friend ostream& operator <<(ostream&, DocGiaNguoiLon);
};

