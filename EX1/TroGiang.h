#pragma once
#include "NhanSu.h"

class TroGiang : public NhanSu
{
public:
	TroGiang();
	TroGiang(
		const std::string& _name,
		const std::string& _birth,
		const std::string& _id,
		const unsigned int& _numSubj
	);

	void input();
	void output();
	double CalcWage();

private:
	unsigned int numSubj;
};