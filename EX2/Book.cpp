#include"Book.h"

Book::Book()
{
	author = "";
	name = "";
	price = 0.0;
	date = "";
	edition = "";
	borrow = false;
}


Book::Book(const string& _author, const string& _title, const double& _price, const string& _date, const string& _edition, const bool& _borrow)
{
	author = _author;
	name = _title;
	price = _price;
	date = _date;
	edition = _edition;
	borrow = _borrow;
}

istream& operator >>(istream& inp, Book& book)
{
	cout << "\nNhap ten: ";
	getline(inp, book.name);

	cout << "\nNhap tac gia: ";
	getline(inp, book.author);

	cout << "\nNhap gia: ";
	inp >> book.price;
	inp.ignore();

	cout << "\nNhap ngay xuat ban: "; 
	getline(inp, book.date);

	cout << "\nNhap phien ban: ";
	getline(inp, book.edition);

	book.borrow = false;

	return inp;
}


ostream& operator <<(ostream& out, const Book& book)
{
	out << "\nTen sach: " << book.name;
	out << "\nTac gia: " << book.author;
	out << "\nGia: " << book.price;
	out << "\nNgay xuat ban: " << book.date;
	out << "\nPhien ban: " << book.edition;
	out << "\nTrang thai: " << ((book.borrow) ? "Da muon" : "Chua muon");

	return out;
}

void Book::SetStatus(bool _borrow)
{
	borrow = _borrow;
}

bool Book::GetStatus()
{
	return borrow;
}

string Book::GetName()
{
	return name;
}