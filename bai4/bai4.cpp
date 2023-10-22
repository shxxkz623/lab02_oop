#include <iostream>
#include "ThiSinh.h"
using namespace std;

int main()
{
    int n;
    int maxdiem = -1;
    int vitri = -1;
    cout << "Nhap so luong thi sinh: ";
    cin >> n;
    ThiSinh* arr = new ThiSinh[n];
    for (int i = 0; i < n; i++) {
        arr[i].Nhap();
    }
    cout << "Danh sach thi sinh co tong diem tren 15 : \n ";
    for (int i = 0; i < n; i++) {
        if (arr[i].Tong() > 15) {
            arr[i].Xuat();
        }
        if (arr[i].Tong() > maxdiem) {
            maxdiem = arr[i].Tong();
            vitri = i;
        }
    }
    
    cout << "Thi sinh co diem tong cao nhat la: " << endl;
    arr[vitri].Xuat();
    return 0;
}
