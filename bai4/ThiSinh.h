#pragma once
#include <string>
#include <string.h>
#include <string>
using namespace std;
class ThiSinh
{
private:
	string sTen;
	string sMSSV;
	int iNgay;
	int iThang;
	int iNam;
	float fToan;
	float fVan;
	float fAnh;
public:
	void Nhap();
	void Xuat();
	float Tong();
};

