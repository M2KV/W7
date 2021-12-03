#include "Library.h"

Library::Library()
{
	listbooks.clear();
}

void Library::add()
{
	Book b;
	cin >> b;
	listbooks.push_back(b);
}

bool Library::exits(string title)
{
	for (Book book : listbooks)
		if (book.GetName() == title) 
			return true;

	return false;
}


void Library::remove(string name)
{
	for (vector<Book>::iterator it = listbooks.begin(); it != listbooks.end(); it++)
		if (it->GetName() == name)
			it = listbooks.erase(it);
}


Book Library::get(string name)
{
	for (Book book : listbooks)
		if (book.GetName() == name)
			return book;
}

void Library::borrow(string name)
{
	for (int i = 0; i < listbooks.size(); i++)
	{
		if (listbooks[i].GetName() == name)
		{
			if (listbooks[i].GetStatus() == false)
			{
				listbooks[i].SetStatus(true);
				cout << "\nMuon sach thanh cong\n";
			}
			else cout << "\nSach nay da duoc muon !\n";
			break;
		}
	}
}

void Library::print()
{
	for (int i = 0; i < listbooks.size(); i++)
	{
		cout << "\nSach " << i + 1 << "\n";
		cout << listbooks[i] << "\n";
	}
}