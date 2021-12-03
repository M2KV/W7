#pragma once
#include <iostream>
#include <string>
using namespace std;

class Book
{
public:
	friend istream& operator >>(istream& inp, Book& book);
	friend ostream& operator <<(ostream& out, const Book& book);

	Book();
	Book(
		const string& _author, 
		const string& _name, 
		const double& _price,
		const string& _date, 
		const string& _edition, 
		const bool& _borrow
	);

	string GetName();

	bool GetStatus();
	void SetStatus(bool _borrow);

private:
	string author;
	string name;
	string date;
	string edition;
	double price;
	bool borrow;
};