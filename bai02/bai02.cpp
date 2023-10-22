#include <iostream>
#include "TamGiac.h";
using namespace std;

void main()
{
    float x, y, rad, k;
    TamGiac a;
    a.Nhap();
    a.Xuat();
    cout << "\n \n Tinh tien theo vector v(x, y):\n x = ";
    cin >> x;
    cout << "y = ";
    cin >> y;
    a.TinhTien(x, y);
    a.Xuat();
    cout << "\n Quay goc: rad = ";
    cin >> rad;
    a.Quay(rad);
    a.Xuat();
    cout << "\n Nhap chi so phong to k: ";
    cin >> k;
    a.PhongTo(k);
    a.Xuat();
    cout << "\n Nhap chi so phong nho k: ";
    cin >> k;
    a.ThuNho(k);
    a.Xuat();


}