#include "DethiTN.h"
#include"Menu.h"
#include <iostream>
#include <fstream>
#include<string.h>

using namespace std;
void DethiTN::taoDeMoi()
{
	dsCauhoi.clear();
}

void DethiTN::themCauhoiVaoDe()
{
	//Nhap mot cau hoi tu ban phim
	CauhoiTN* cau = new CauhoiTN();
	cau->nhap();
	//Chen cau hoi vao dsCauhoi
	dsCauhoi.push_back(*cau);
}

void DethiTN::xuatDe()
{
	cout << "-------Danh sach cau hoi trong de thi-----\n";
	for (int i = 0; i < dsCauhoi.size(); i++)
	{
		cout << "Cau " << i + 1 << ". ";
		dsCauhoi[i].xuat();
	}
}

void DethiTN::ghiDeVaoFile()
{
	//Nhap ten file
	string tenfile;
	cout << "Nhap ten file de ghi: ";
	getline(cin, tenfile);
	//Mo file
	ofstream fo(tenfile);
	//Ghi tung cau hoi vao file
	for (int i = 0; i < dsCauhoi.size(); i++)
		dsCauhoi[i].ghifile(fo);
	//Dong file
	fo.close();
}

void DethiTN::docDeTuFile()
{
	//Nhap ten file
	string tenfile;
	cout << "Nhap ten file de doc: ";
	getline(cin, tenfile);
	//Mo file de doc
	ifstream fi(tenfile);
	//Duyet doc file
	CauhoiTN* cau;
	do {
		cau = new CauhoiTN();
		if (cau->docfile(fi) == true)
			dsCauhoi.push_back(*cau);
		else
			break;
	} while (true);
	fi.close();
}

void DethiTN::choThi(DethiTN& dethi)
{
	vector<string> dapAnThiSinh;
	for (int i = 0; i < dethi.LaydsCauhoi().size(); i++) {
		cout << dethi.LaydsCauhoi()[i].GetNoiDung() << endl;
		cout << "A. " << dethi.LaydsCauhoi()[i].GetDapAnA() << endl;
		cout << "B. " << dethi.LaydsCauhoi()[i].GetDapAnB() << endl;

		string dapAn;
		cout << "Moi chon dap an : ";
		cin >> dapAn;
		dapAnThiSinh.push_back(dapAn);
	}

	// So sánh đáp án của thí sinh với đáp án đúng và tính số câu trả lời đúng
	for (int i = 0; i < dethi.LaydsCauhoi().size(); i++) {
		if (dapAnThiSinh[i] == dethi.LaydsCauhoi()[i].GetDapAnDung()) {
			dethi.tangSoCauDung();
		}
	}

	// In ra số câu trả lời đúng của thí sinh
	cout << "So cau tra loi dung : " << dethi.laySoCauTraLoiDung() << endl;

}