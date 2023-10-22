#include "TamGiac.h"
#include <iostream>
# define M_PI           3.14159265358979323846  /* pi */

using namespace std;

Diem::Diem() {}

void Diem::Set_x(float a) {
	x = a;
}

void Diem::Set_y(float a) {
	y = a;
}

float Diem::Get_x() {
	return x;
}

float Diem::Get_y() {
	return y;
}

void Diem::Set_xy(float a, float b) {
	x = a;
	y = b;
}

Diem::Diem(float a, float b) {
	x = a;
	y = b;
}

void Diem::Nhap() {
	cout << "\n Hoanh Do x = ";
	cin >> x;
	cout << "\n Tung Do y = ";
	cin >> y;
}

void Diem::Xuat() {
	cout << "(" << x << ", " << y << ")";
}

void Diem::TinhTien(float a, float b) {
	x += a;
	y += b;
}

void Diem::Quay(float rad) {
	rad = float (rad / 180) * M_PI;
	x = x * cos(rad) + y * sin(rad);
	y = x * sin(rad) + y * cos(rad);
}

Diem Diem::vector(Diem a) {
	Diem t;
	t.Set_x(a.Get_x() - x);
	t.Set_y(a.Get_y() - y);
	return t;
}

TamGiac::TamGiac() {}

TamGiac::TamGiac(Diem x, Diem y, Diem z) {
	A = x;
	B = y;
	C = z;
}

void TamGiac::Nhap() {
	int test;
	do {
		test = 0;
		cout << "\n Nhap dinh A";
		A.Nhap();
		cout << "\n Nhap dinh B";
		B.Nhap();
		cout << "\n Nhap dinh C";
		C.Nhap();
		Diem m, n;
		m = A.vector(B);
		n = A.vector(C);
		if (float(m.Get_x() * n.Get_y()) == float(m.Get_y() * n.Get_x())) {
			test = 1;
				cout << "Tam khong ton tai, nhap lai!";
		}
		cout << "\n";
	} while (test);
}

void TamGiac::Xuat() {
	cout << "\n Tam giac duoc tao boi 3 diem: ";
	A.Xuat();
	cout << ","; 
	B.Xuat();
	cout << ",";
	C.Xuat();
}

void TamGiac::TinhTien(float e, float f) {
	A.TinhTien(e, f);
	B.TinhTien(e, f);
	C.TinhTien(e, f);
}

void TamGiac::Quay(float rad) {
	A.Quay(rad);
	B.Quay(rad);
	C.Quay(rad);
}

void TamGiac::PhongTo(float k) {
	A.Set_xy(A.Get_x() * k, A.Get_y() * k);
	B.Set_xy(B.Get_x() * k, B.Get_y() * k);
	C.Set_xy(C.Get_x() * k, C.Get_y() * k);
}

void TamGiac::ThuNho(float k) {
	A.Set_xy(A.Get_x() / k, A.Get_y() / k);
	B.Set_xy(B.Get_x() / k, B.Get_y() / k);
	C.Set_xy(C.Get_x() / k, C.Get_y() / k);
}
