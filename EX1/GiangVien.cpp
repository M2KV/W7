#include "GiangVien.h"

GiangVien::GiangVien() : NhanSu()
{
	hocham.clear();
	hocvi.clear();
	yexp = 0;
	subjects.clear();

}

GiangVien::GiangVien(const std::string& _name, const std::string& _birth, const std::string& _id, const std::string& _hocham, const std::string& _hocvi, const unsigned int& _yexp, const std::vector<std::string>& _subjects) : NhanSu()
{
	name = _name;
	birth = _birth;
	id = _id;
	hocham = _hocham;
	hocvi = _hocvi;
	yexp = _yexp;
	subjects = _subjects;
}

void GiangVien::input()
{
	NhanSu::input();

	std::cout << "Nhap hoc ham: ";
	std::getline(std::cin, hocham);

	std::cout << "Nhap hoc vi: ";
	std::getline(std::cin, hocvi);

	std::cout << "Nhap so nam giang day: ";
	std::cin >> yexp;

	std::cin.ignore();

	std::string subj;

	do
	{
		std::cout << "Nhap ten mon hoc dang day: ";
		std::getline(std::cin, subj);

		subjects.push_back(subj);

		std::cout << "\nBan co muon tiep tuc ? (Y/N): ";

	} while (toupper(getchar()) != 'N' && std::cin.ignore());
	std::cin.ignore();
}

void GiangVien::output()
{
	NhanSu::output();

	std::cout << "Hoc ham: " << hocham << "\n";
	std::cout << "Hoc vi: " << hocvi << "\n";
	std::cout << "So nam giang day: " << yexp << "\n";	
	std::cout << "Danh sach cac mon dang day: \n";

	for (unsigned int i = 0; i < subjects.size(); ++i)
		std::cout << subjects[i] << ((i != subjects.size() - 1) ? ", ": "\n");

	std::cout << "Luong giang vien: " << CalcWage() << "\n";
}

double GiangVien::CalcWage()
{
	return subjects.size() * yexp * 0.12 * 20000;
}
