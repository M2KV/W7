#include "TroGiang.h"

TroGiang::TroGiang() : NhanSu()
{
	numSubj = 0;
}

TroGiang::TroGiang(const std::string& _name, const std::string& _birth, const std::string& _id, const unsigned int& _numSubj) : NhanSu()
{
	name = _name;
	birth = _birth;
	id = _id;
	numSubj = _numSubj;
}

void TroGiang::input()
{
	NhanSu::input();

	std::cout << "Nhap so mon tro giang: ";
	std::cin >> numSubj;
}

void TroGiang::output()
{
	NhanSu::output();

	std::cout << "So mon tro giang: " << numSubj << "\n";
	std::cout << "Luong giang vien: " << CalcWage() << "\n";
}

double TroGiang::CalcWage()
{
	return numSubj * 0.3 * 18000;
}
