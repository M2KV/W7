#pragma once
#include <vector>
#include "NhanSu.h"

class ChuyenVien : public NhanSu
{
public:
	ChuyenVien();
	ChuyenVien(
		const std::string& _name,
		const std::string& _birth,
		const std::string& _id,
		const unsigned int& _yexp,
		const std::vector<std::string>& _projects
	);

	void input();
	void output();
	double CalcWage();

private:
	std::vector<std::string> projects;
	unsigned int yexp;
};