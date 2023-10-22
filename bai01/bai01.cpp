#include <iostream>
#include "Diem.h"
using namespace std;

int main()
{
    Diem a = Diem();
    a.Xuat();
    int i;
    cout << "Nhap hoanh do: ";
    cin >> i;
    Diem b = Diem(i);
    b.Xuat();
    Diem c = Diem(a);
    c.Xuat();
    int m, n;
    cout << "Nhap hoanh do moi cho c: ";
    cin >> m;
    cout << "Nhap tung do moi cho c: ";
    cin >> n;
    c.SetHoanhDo(m);
    c.SetTungDo(n);
    cout << "Hoanh do diem c: " << c.GetHoanhDo() << ", Tung do: " << c.GetTungDo() << endl;
    int dx, dy;
    cout << "Nhap toa do tinh tien \n";
    cout << "Nhap dx: ";
    cin >> dx;
    cout << "Nhap dy: ";
    cin >> dy;
    c.TinhTien(dx, dy);
    c.Xuat();

}   


