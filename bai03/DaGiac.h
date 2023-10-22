#pragma once

class Diem
{
private:
	float x, y;

public:
	Diem();
	Diem(float, float);
	void Nhap();
	void Xuat();
	void Set_x(float);
	void Set_y(float);
	Diem vector(Diem);
	float Get_x();
	float Get_y();
	void Set_xy(float, float);
	void TinhTien(float = 0, float = 0);
	void Quay(float);
};

class DaGiac
{
private:
	int n;
	Diem* arr;

public:
	DaGiac();
	DaGiac(int);
	void Nhap();
	void Xuat();
	void TinhTien(float = 0, float = 0);
	void Quay(float);
	void PhongTo(float);
	void ThuNho(float);
	bool KiemTraThangHang();
};

