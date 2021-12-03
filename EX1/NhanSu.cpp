#include "NhanSu.h"

NhanSu::NhanSu()
{
	name.clear();
	birth.clear();
	id.clear();
}

void NhanSu::input()
{
	std::cout << "Nhap ten: ";
	std::getline(std::cin, name);

	std::cout << "Nhap ngay/thang/nam sinh: ";
	std::getline(std::cin, birth);

	std::cout << "Nhap ma so: ";
	std::getline(std::cin, id);
}

void NhanSu::output()
{
	std::cout << "Ten: " << name << "\n";
	std::cout << "Ngay/thang/nam sinh: " << birth << "\n";
	std::cout << "Ma so: " << id << "\n";
}