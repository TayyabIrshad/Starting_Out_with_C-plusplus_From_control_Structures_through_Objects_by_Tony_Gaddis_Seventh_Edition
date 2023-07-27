#include<iostream>
using namespace std;

int main()
{
	double profit_percent = 40;
	double profit = 0;
	double cost = 12.67;
	double selling_price = 0;

	profit = profit_percent / 100 * 12.67;
	selling_price = cost + profit;

	cout << "The selling price of a circuit board that costs $12.67 will be: " << selling_price << endl;
}