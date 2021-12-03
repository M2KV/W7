#include<iostream>
#include"Rectangle.h"
#include"Square.h"
#include"Book.h"
#include"Library.h"

int main()
{
	Rectangle Rect;
	cout << "\nINPUT RECTANGLE: \n";
	cin >> Rect;
	
	cout << "\n---------------------------\n";
	cout << "\nOUTPUT RECTANGLE: \n";
	cout << Rect;

	if (Rect.isValidRectangle()) 
	{
		cout << "\nTHIS IS VALID RECTANGLE !\n";
		cout << "\nPERIMETER: " << Rect.Perimeter();
		cout << "\nAREA: " << Rect.Area() << "\n";
	}
	else cout << "THIS IS INVALID RECTANGLE !\n";

	cout << "\n---------------------------\n";
	cout << "\nINPUT SQUARE: \n";
	Square S;
	cin >> S;
	
	cout << "\n---------------------------\n";
	cout << "\nOUTPUT SQUARE: \n";
	cout << S;
	
	if (S.isValidSquare())
	{
		cout << "\nTHIS IS VALID SQUARE !";
		cout << "\nPERIMETER: " << S.Perimeter();
		cout << "\nAREA: " << S.Area() << "\n";
	}
	else cout << "THIS IS INVALID SQUARE !\n";

	Library Lib; 
	string str;

	int n;
	cout << "\nInput number of books: ";
	cin >> n;
	cin.ignore();
	
	for (int i = 0; i < n; ++i)
	{
		cout << "\nADD NEW BOOK \n";
		Lib.add();
		cout << "\n";
	}

	cout << "\n-------------------------------------------\n";
	cout << "\nLIBRARY BOOKS\n";
	Lib.print();

	cout << "\nREMOVE BOOK \n";
	cout << "Enter the title book to remove: "; 
	getline(cin, str);

	if (Lib.exits(str)) Lib.remove(str);
	else cout << "\nCannot find this book \n";

	cout << "\nFIND BOOK \n";
	cout << "Enter the title book to find: "; 
	getline(cin, str);

	if (Lib.exits(str))
	{
		Book b = Lib.get(str);
		cout << "\nInformation of this book: \n";
		cout << b;
	}
	else cout << "Cannot find this book \n";

	cout << "\n\nBORROW BOOK \n";
	cout << "Enter the title book to lend: "; 
	getline(cin, str);

	if (Lib.exits(str)) Lib.borrow(str);
	else cout << "\nCannot find this book \n";
			
	cout << "\n-------------------------------------------\n";
	cout << "\nLIBRARY BOOKS\n";
	Lib.print();
	return 0;
}