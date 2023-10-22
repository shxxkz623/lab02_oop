#pragma once
class Diem
{
private:
	int iHoanh;
	int iTung;

public:
	Diem();
	//Diem(int Hoanh, int Tung);
	Diem(int Hoang, int Tung = 1);
	Diem(const Diem& x);
	void Xuat();
	int GetTungDo() const;
	int GetHoanhDo() const;
	void SetTungDo(int Tung);
	void SetHoanhDo(int Hoanh);
	void TinhTien(int dx, int dy);
};
