#include "Diem.h"
#include <iostream>
using namespace std;

Diem::Diem() {
    cout << "Nhap hoanh do: ";
    cin >> iHoanh;
    cout << "Nhap tung do: ";
    cin >> iTung;
}

Diem::Diem(int Hoanh, int Tung) {
    iTung = Tung;
    iHoanh = Hoanh;
}

Diem::Diem(const Diem& x) {
    iTung = x.GetTungDo();
    iHoanh = x.GetHoanhDo();
}

void Diem::Xuat() {
    cout << "Hoanh do: " << iHoanh << ", Tung do: " << iTung << endl;
}

int Diem::GetTungDo() const {
    return iTung;
}

int Diem::GetHoanhDo() const {
    return iHoanh;
}

void Diem::SetTungDo(int Tung) {
    iTung = Tung;
}

void Diem::SetHoanhDo(int Hoanh) {
    iHoanh = Hoanh;
}

void Diem::TinhTien(int dx, int dy) {
    iHoanh += dx;
    iTung += dy;
}