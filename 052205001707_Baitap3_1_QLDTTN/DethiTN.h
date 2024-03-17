#pragma once
#include "CauhoiTN.h"
#include <vector>

class DethiTN
{
private:
	vector<CauhoiTN> dsCauhoi;
	int soCauTraLoiDung=0;
public:
	void taoDeMoi();
	void themCauhoiVaoDe();
	void xuatDe();
	void ghiDeVaoFile();
	void docDeTuFile();
	vector<CauhoiTN> LaydsCauhoi() { return dsCauhoi; };
	void choThi(DethiTN& deThi);
	int tangSoCauDung() { return soCauTraLoiDung++; };
	int laySoCauTraLoiDung() { return soCauTraLoiDung; };

};

