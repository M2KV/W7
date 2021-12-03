#pragma once
#include<vector>
#include<string>
#include"Book.h"
using namespace std;

class Library
{
private:
	vector<Book> listbooks;

public:
	Library(); 
	void add();
	void remove(string name);

	bool exits(string name);
	Book get(string name);
	void borrow(string name);
	void print();
};

