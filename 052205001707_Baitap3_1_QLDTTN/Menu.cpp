#include "Menu.h"
#include <iostream>
#include <string>
#include "DethiTN.h"

using namespace std;
Menu::Menu()
{
	go();
}
void Menu::display()
{
	//Hien thi cac lua chon cua nguoi dung
	//Menu 
	cout << " ----- Menu -----\n";
	cout << " 0. Thoat\n";
	cout << " 1. Tao de thi moi\n";
	cout << " 2. Them cau hoi \n";
	cout << " 3. In danh sach cau hoi\n";
	cout << " 4. Ghi danh sach cau hoi ra file \n";
	cout << " 5. Doc danh sach cau hoi tu file \n";
	cout << " 6. Cho thi \n";
}

void Menu::go()
{
	string chon;
	do {
		display();
		cout << " Moi chon: ";
		getline(cin, chon);
		if (chon.compare("1") == 0)
		{ //Tao de thi moi
			cout << "Tao de thi moi...\n";
			dethi.taoDeMoi();
		}
		else if (chon.compare("2") == 0)
		{ // Them cau hoi
			cout << "Them cau hoi...\n";
			dethi.themCauhoiVaoDe();
		}
		else if (chon.compare("3") == 0)
		{ // In danh sach cau hoi
			cout << "In danh sach cau hoi...\n";
			dethi.xuatDe();
		}
		else if (chon.compare("4") == 0)
		{ // Ghi danh sach cau hoi ra file
			cout << "Ghi danh sach cau hoi ra file...\n";
			dethi.ghiDeVaoFile();
		}
		else if (chon.compare("5") == 0)
		{ // Doc danh sach cau hoi tu file
			cout << "Doc danh sach cau hoi tu file...\n";
			dethi.docDeTuFile();
		}
		else if (chon.compare("6") == 0)
		{ // Cho thi
			cout << "Bat dau lam bai thi...\n";
			dethi.choThi(dethi);
		}
	} while (chon.compare("0") != 0);
}
