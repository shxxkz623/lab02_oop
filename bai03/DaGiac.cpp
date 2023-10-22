#include "DaGiac.h"
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
	rad = float(rad / 180) * M_PI;
	x = x * cos(rad) + y * sin(rad);
	y = x * sin(rad) + y * cos(rad);
}

Diem Diem::vector(Diem a) {
	Diem t;
	t.Set_x(a.Get_x() - x);
	t.Set_y(a.Get_y() - y);
	return t;
}

DaGiac::DaGiac() {}

DaGiac::DaGiac(int _n) : n(_n) {
	arr = new Diem[n];
}

void DaGiac::Nhap() {
	do {
		std::cout << "Nhap so luong dinh cua da giac: ";
		std::cin >> n;
	} while (n < 3);  // Đa giác cần ít nhất 3 đỉnh
	arr = new Diem[n];

	for (int i = 0; i < n; ++i) {
		std::cout << "Nhap toa do cho dinh thu " << i + 1 << ":\n";
		arr[i].Nhap();

		// Kiểm tra xem đỉnh trùng vị trí với các đỉnh trước đó hay không
		for (int j = 0; j < i; ++j) {
			while (arr[i].Get_x() == arr[j].Get_x() && arr[i].Get_y() == arr[j].Get_y()) {
				std::cout << "Dinh da trung vi tri voi dinh thu " << j + 1 << ". Vui long nhap lai:\n";
				arr[i].Nhap();
				j = 0;  // Kiểm tra lại từ đầu
			}
		}
	}
	bool thangHang = KiemTraThangHang();
	if (thangHang) {
		std::cout << "Cac diem da nhap thang hang. Vui long nhap lai.\n";
		delete[] arr; // Giải phóng bộ nhớ
		Nhap();  // Gọi lại hàm nhập
	}

}

void DaGiac::Xuat() {
	for (int i = 0; i < n; ++i) {
		std::cout << "Dinh " << i + 1 << ": ";
		arr[i].Xuat();
		std::cout << std::endl;
	}
}

void DaGiac::TinhTien(float e, float f) {
	for (int i = 0; i < n; ++i) {
		arr[i].TinhTien(e,f);
	}
}

void DaGiac::Quay(float rad) {
	for (int i = 0; i < n; ++i) {
		arr[i].Quay(rad);
	}
}

void DaGiac::PhongTo(float k) {
	for (int i = 0; i < n; ++i) {
		arr[i].Set_xy(arr[i].Get_x() * k, arr[i].Get_y() * k);
	}
}

void DaGiac::ThuNho(float k) {
	for (int i = 0; i < n; ++i) {
		arr[i].Set_xy(arr[i].Get_x() / k, arr[i].Get_y() / k);
	}
}

bool DaGiac::KiemTraThangHang() {
	if (n < 3) {
		// Không thể kiểm tra tính thẳng hàng với ít hơn 3 điểm
		return false;
	}

	for (int i = 0; i < n - 2; ++i) {
		for (int j = i + 1; j < n - 1; ++j) {
			for (int k = j + 1; k < n; ++k) {
				Diem A = arr[i];
				Diem B = arr[j];
				Diem C = arr[k];

				// Sử dụng định thức để kiểm tra tính thẳng hàng
				float determinant = A.Get_x() * (B.Get_y() - C.Get_y()) +
					B.Get_x() * (C.Get_y() - A.Get_y()) +
					C.Get_x() * (A.Get_y() - B.Get_y());

				if (determinant == 0) {
					// Các điểm i, j, k thẳng hàng
					return true;
				}
			}
		}
	}
	// Nếu không tìm thấy bất kỳ ba điểm nào thẳng hàng
	return false;
}
