#include "ChuyenVien.h"

ChuyenVien::ChuyenVien() : NhanSu()
{
	yexp = 0;
	projects.clear();
}

ChuyenVien::ChuyenVien(const std::string& _name, const std::string& _birth, const std::string& _id, const unsigned int& _yexp, const std::vector<std::string>& _projects) : NhanSu()
{
	name = _name;
	birth = _birth;
	id = _id;
	yexp = _yexp;
	projects = _projects;
}

void ChuyenVien::input()
{
	NhanSu::input();

	std::cout << "Nhap so nam kinh nghiem lam viec: ";
	std::cin >> yexp;

	std::cin.ignore();

	std::string proj;

	do
	{
		std::cout << "Nhap ma du an nghien cuu da hoan thanh: ";
		std::getline(std::cin, proj);

		projects.push_back(proj);

		std::cout << "\nBan co muon tiep tuc ? (Y/N): ";

	} while (toupper(getchar()) != 'N' && std::cin.ignore());
	std::cin.ignore();
}

void ChuyenVien::output()
{
	NhanSu::output();

	std::cout << "So nam kinh nghiem lam viec: " << yexp << "\n";

	std::cout << "Danh sach cac ma du an da hoan thanh: \n";

	for (unsigned int i = 0; i < projects.size(); ++i)
		std::cout << projects[i] << ((i != projects.size() - 1) ? ", " : "\n");

	std::cout << "Luong nghien cuu vien: " << CalcWage() << "\n";
}

double ChuyenVien::CalcWage()
{
	int count = 0;
	for (const std::string& id : projects)
		if (id.at(0) == 'T') count++;

	return (yexp * 4 + count) * 18000;
}
