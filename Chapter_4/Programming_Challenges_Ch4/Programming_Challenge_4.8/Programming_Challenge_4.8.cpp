//Change for a Dollar Game!

#include<iostream>
using namespace std;

int main()
{
	double dollar = 1;

	double penny;
	double nickel;
	double dime;
	double quarter;

	penny = dollar / 100;
	nickel = dollar / 20;
	dime = dollar / 10;
	quarter = dollar / 4;

	double pennies, nickels, dimes, quarters;
	double total;

	cout << "How many pennies do you have: ";
	cin >> pennies;
	
	cout << "How many nickels do you have: ";
	cin >> nickels;

	cout << "How many dimes do you have: ";
	cin >> dimes;

	cout << "How many quarters do you have: ";
	cin >> quarters;

	pennies *= penny;
	nickels *= nickel;
	dimes *= dime;
	quarters *= quarter;

	total = pennies + nickels + dimes + quarters;

	cout << "Total is: " << total << endl;

	if (total == dollar)
	{
		cout << "Congratulations! You Won! " << endl;
	}
	else if (total > dollar)
	{
		cout << "The amount is more than 1 dollar. " << endl;
	}
	else if (total < dollar)
	{
		cout << "The amount is less than 1 dollar. " << endl;
	}
	return 0;
}