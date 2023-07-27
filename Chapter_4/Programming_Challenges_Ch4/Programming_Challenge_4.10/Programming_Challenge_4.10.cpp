//Software Sales

#include<iostream>
using namespace std;

int main()
{
	int package_price = 99;
	int sold_units;
	int sold_units_cost;
	int total_cost;
	double discount_amount;

	cout << "How many number of units were sold? " << endl;
	cin >> sold_units;

	if (sold_units >= 10 && sold_units <= 19)
	{
		sold_units_cost = package_price * sold_units;
		discount_amount = 20 / 100 * sold_units_cost;
		total_cost = sold_units_cost - discount_amount;
		cout << "Total cost for " << sold_units << " is " << total_cost << endl;
	}
	else if (sold_units >= 20 && sold_units <= 49)
	{
		sold_units_cost = package_price * sold_units;
		discount_amount = 30 / 100 * sold_units_cost;
		total_cost = sold_units_cost - discount_amount;
		cout << "Total cost for " << sold_units << " is " << total_cost << endl;
	}
	else if (sold_units >= 50 && sold_units <= 99)
	{
		sold_units_cost = package_price * sold_units;
		discount_amount = 40 / 100 * sold_units_cost;
		total_cost = sold_units_cost - discount_amount;
		cout << "Total cost for " << sold_units << " is " << total_cost << endl;
	}
	else if(sold_units >= 100)
	{
		sold_units_cost = package_price * sold_units;
		discount_amount = 50 / 100 * sold_units_cost;
		total_cost = sold_units_cost - discount_amount;
		cout << "Total cost for " << sold_units << " is " << total_cost << endl;
	}
	else if (sold_units > 0 && sold_units < 10)
	{
		sold_units_cost = package_price * sold_units;
		total_cost = sold_units_cost;
		cout << "Total cost for " << sold_units << " is " << total_cost << endl;
	}
	else if (sold_units <= 0)
	{
		cout << "No Units were sold!" << endl;
	}
	return 0;
}