#include "ThiSinh.h"
#include <iostream>
using namespace std;

void ThiSinh::Nhap() {
    cout << "Nhap ten thi sinh: ";
    cin.ignore();  // Clear the input buffer
    getline(std::cin, sTen);

    cout << "Nhap MSSV: ";
    cin >> sMSSV;

    cout << "Nhap ngay, thang, nam sinh (dd mm yyyy): ";
    cin >> iNgay >> iThang >> iNam;

    cout << "Nhap diem Toan: ";
    cin >> fToan;

    cout << "Nhap diem Van: ";
    cin >> fVan;

    cout << "Nhap diem Anh: ";
    cin >> fAnh;

    cout << "\n\n";
}
void ThiSinh::Xuat() {
    cout << "Thong tin thi sinh:\n";
    cout << "Ten: " << sTen << "\n";
    cout << "MSSV: " << sMSSV << "\n";
    cout << "Ngay, thang, nam sinh: " << iNgay << " " << iThang << " " << iNam << "\n";
    cout << "Diem Toan: " << fToan << "\n";
    cout << "Diem Van: " << fVan << "\n";
    cout << "Diem Anh: " << fAnh << "\n\n";
}

float ThiSinh::Tong() {
	return fToan + fVan + fAnh;
}