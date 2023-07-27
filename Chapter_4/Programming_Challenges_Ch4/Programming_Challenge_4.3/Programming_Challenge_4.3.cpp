//Magic Dates
//2:33

#include<iostream>
using namespace std;

int main()
{
	int month, day, year, product;
	cout << "Enter the month: ";
	cin >> month;

	cout << "Enter the day: ";
	cin >> day;

	cout << "Enter the year in 2 digit form: ";
	cin >> year;

	product = month * day;

	if (year == product)
	{
		cout << "The date is magic " << endl;
	}
	else
	{
		cout << "The date is not magic";
	}
	return 0;
}

//2:45