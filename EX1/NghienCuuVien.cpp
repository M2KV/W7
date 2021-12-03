#include "NghienCuuVien.h"

NghienCuuVien::NghienCuuVien() : NhanSu()
{
	yexp = 0;
	projects.clear();
}

NghienCuuVien::NghienCuuVien(const std::string& _name, const std::string& _birth, const std::string& _id, const unsigned int& _yexp, const std::vector<std::string>& _projects) : NhanSu()
{
	name = _name;
	birth = _birth;
	id = _id;
	yexp = _yexp;
	projects = _projects;
}

void NghienCuuVien::input()
{
	NhanSu::input();

	std::cout << "Nhap so nam kinh nghiem nghien cuu: ";
	std::cin >> yexp;

	std::cin.ignore();

	std::string proj;

	do
	{
		std::cout << "Nhap ma du an nghien cuu dang tham gia: ";
		std::getline(std::cin, proj);

		projects.push_back(proj);

		std::cout << "\nBan co muon tiep tuc ? (Y/N): ";

	} while (toupper(getchar()) != 'N' && std::cin.ignore());
	std::cin.ignore();
}

void NghienCuuVien::output()
{
	NhanSu::output();

	std::cout << "So nam kinh nghiem nghien cuu: " << yexp << "\n";

	std::cout << "Danh sach cac ma du an dang tham gia: \n";

	for (unsigned int i = 0; i < projects.size(); ++i)
		std::cout << projects[i] << ((i != projects.size() - 1) ? ", " : "\n");

	std::cout << "Luong nghien cuu vien: " << CalcWage() << "\n";
}

double NghienCuuVien::CalcWage()
{
	int count = 0;
	for (const std::string& id : projects)
		if (id.at(0) == 'D') count++;

	return (yexp * 2 + count) * 20000;
}
