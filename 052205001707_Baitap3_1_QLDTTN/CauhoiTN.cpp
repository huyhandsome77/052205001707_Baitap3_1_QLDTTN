#include "CauhoiTN.h"
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

CauhoiTN::CauhoiTN()
{
}


CauhoiTN::~CauhoiTN()
{
}


void CauhoiTN::xuat()
{
	cout << endl << NoiDung << endl;
	cout << "a) " << CauHoiA << endl;
	cout << "b) " << CauHoiB << endl;
	cout << "* Dap an: " << CauDung << endl;
}


void CauhoiTN::nhap()
{
	cout << "Nhap noi dung cau hoi: ";
	getline(cin, NoiDung);
	cout << " Nhap cau tra loi A: ";
	getline(cin, CauHoiA);
	cout << " Nhap cau tra loi B: ";
	getline(cin, CauHoiB);
	cout << " Cho biet cau nao dung (a/b): ";
	cin >> CauDung;
}


bool CauhoiTN::kiemtra()
{
	//Xuat cau hoi, nhan cau tra loi
	cout << endl << NoiDung << endl;
	cout << "a) " << CauHoiA << endl;
	cout << "b) " << CauHoiB << endl;
	string traloi;
	cout << " Chon a/b? ";
	getline(cin, traloi);
	if (traloi.compare(CauDung) == 0)
	{
		cout << " Ban tra loi dung!\n";
		return true;
	}
	else
	{
		cout << " Ban tra loi sai!\n";
		return false;
	}
}


void CauhoiTN::ghifile(ofstream& fo)
{
	fo << NoiDung << endl;
	fo << CauHoiA << endl;
	fo << CauHoiB << endl;
	fo << CauDung << endl;
}

bool CauhoiTN::docfile(ifstream& fi)
{
	if (fi.eof()) return false;
	getline(fi, NoiDung);
	if (fi.eof()) return false;
	getline(fi, CauHoiA);
	if (fi.eof()) return false;
	getline(fi, CauHoiB);
	if (fi.eof()) return false;
	getline(fi, CauDung);
	return true;

}
bool CauhoiTN::giongnhau(CauhoiTN cau1, CauhoiTN cau2)
{
	if (cau1.NoiDung==cau2.NoiDung && cau1.CauHoiA == cau2.CauHoiA && cau1.CauHoiB == cau2.CauHoiB && cau1.CauDung == cau2.CauDung)
	{
		return true;
	}
	return false;
}