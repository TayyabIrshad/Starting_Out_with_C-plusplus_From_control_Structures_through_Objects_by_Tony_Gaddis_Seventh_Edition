// Book Club Points

#include<iostream>
using namespace std;

int main()
{
	int no_of_books;

	cout << "How many book you have purchased this month? " << endl;
	cin >> no_of_books;

	if (no_of_books == 0)
	{
		cout << "You earned 0 points! " << endl;
	}
	else if (no_of_books == 1)
	{
		cout << "You earned 5 point! " << endl;
	}
	else if (no_of_books == 2)
	{
		cout << "You earned 15 points! " << endl;
	}
	else if (no_of_books == 3)
	{
		cout << "You earned 30 points! " << endl;
	}
	else if (no_of_books >= 4)
	{
		cout << "You earned 60 points! " << endl;
	}
	else
	{
		cout << "Invalid Input!" << endl;
	}
	return 0;
}