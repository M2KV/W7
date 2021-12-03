#pragma once
#include <iostream>
#include <string>

class NhanSu
{
public:
	NhanSu();

	void input();
	void output();

protected:
	std::string name;
	std::string birth;
	std::string id;
};
