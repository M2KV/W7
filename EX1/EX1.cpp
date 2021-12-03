#include "GiangVien.h"
#include "TroGiang.h"
#include "NghienCuuVien.h"
#include "ChuyenVien.h"

void inputGV(std::vector<GiangVien>& lgv)
{
	int n;
	std::cout << "Nhap so giang vien: ";
	std::cin >> n;
	std::cin.ignore();

	GiangVien gv;
	for (int i = 0; i < n; ++i)
	{
		gv.input();
		lgv.push_back(gv);
	}
}

void outputGV(std::vector<GiangVien>& lgv)
{
	for (int i = 0; i < lgv.size(); ++i)
	{
		lgv[i].output();
		std::cout << "\n";
	}
}

void inputTG(std::vector<TroGiang>& ltg)
{
	int n;
	std::cout << "Nhap so tro giang: ";
	std::cin >> n;
	std::cin.ignore();

	TroGiang tg;
	for (int i = 0; i < n; ++i)
	{
		tg.input();
		ltg.push_back(tg);
	}
}

void outputTG(std::vector<TroGiang>& ltg)
{
	for (int i = 0; i < ltg.size(); ++i)
	{
		ltg[i].output();
		std::cout << "\n";
	}
}

void inputNCV(std::vector<NghienCuuVien>& ncv)
{
	int n;
	std::cout << "Nhap so nghien cuu vien: ";
	std::cin >> n;
	std::cin.ignore();

	NghienCuuVien nc;
	for (int i = 0; i < n; ++i)
	{
		nc.input();
		ncv.push_back(nc);
	}
}

void outputNCV(std::vector<NghienCuuVien>& ncv)
{
	for (int i = 0; i < ncv.size(); ++i)
	{
		ncv[i].output();
		std::cout << "\n";
	}
}


void inputCV(std::vector<ChuyenVien>& cv)
{
	int n;
	std::cout << "Nhap so chuyen vien: ";
	std::cin >> n;
	std::cin.ignore();

	ChuyenVien ncv;
	for (int i = 0; i < n; ++i)
	{
		ncv.input();
		cv.push_back(ncv);
	}
}

void outputCV(std::vector<ChuyenVien>& cv)
{
	for (int i = 0; i < cv.size(); ++i)
	{
		cv[i].output();
		std::cout << "\n";
	}
}

int main()
{
	std::vector<GiangVien> lgv;
	inputGV(lgv);

	std::vector<TroGiang> ltg;
	inputTG(ltg);

	std::vector<NghienCuuVien> ncv;
	inputNCV(ncv);

	std::vector<ChuyenVien> cv;
	inputCV(cv);

	std::cout << "\n\nGIANG VIEN\n\n";
	outputGV(lgv);

	std::cout << "\n\nTRO GIANG\n\n";
	outputTG(ltg);

	std::cout << "\n\nNGHIEN CUU VIEN\n\n";
	outputNCV(ncv);

	std::cout << "\n\nCHUYEN VIEN\n\n";
	outputCV(cv);

	return 0;
}