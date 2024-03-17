#pragma once
#include <string>

using namespace std;
class CauhoiTN
{
private:
	string NoiDung;
	string CauHoiA;
	string CauHoiB;
	string CauDung;//A, B
public:
	CauhoiTN();
	~CauhoiTN();
	void xuat();
	void nhap();
	bool kiemtra();
	void ghifile(ofstream& fo);
	bool docfile(ifstream& fi);
	bool giongnhau(CauhoiTN cau1, CauhoiTN cau2);
	string GetNoiDung() { return NoiDung; };
	string GetDapAnA() { return CauHoiA; };
	string GetDapAnB() { return CauHoiB; };
	string GetDapAnDung() { return CauDung; };
};

