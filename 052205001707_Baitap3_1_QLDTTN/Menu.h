#pragma once
#include "DethiTN.h"

class Menu
{
private:
	DethiTN dethi;
public:
	Menu();
	void display(); //hien thi cac lua chon
	void go();//Thuc thi chuc nang cua menu
};

