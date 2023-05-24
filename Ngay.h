#pragma once
#include <iostream>
#include <ctime>
#pragma warning (disable: 4996)
using namespace std;
class Ngay
{
private:
	int ngaylap, thanglap, namlap;
public:
	friend istream& operator >> (istream&, Ngay&);
	friend ostream& operator << (ostream&, Ngay);
};

