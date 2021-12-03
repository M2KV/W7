#pragma once
#include <vector>
#include "NhanSu.h"

class GiangVien : public NhanSu
{
public:
	GiangVien();
	GiangVien(
		const std::string& _name, 
		const std::string& _birth, 
		const std::string& _id, 
		const std::string& _hocham, 
		const std::string& _hocvi, 
		const unsigned int& _yexp, 
		const std::vector<std::string>& _subjects
	);

	void input();
	void output();
	double CalcWage();

private:
	std::string hocham;
	std::string hocvi;
	unsigned int yexp;	
	std::vector<std::string> subjects;
};