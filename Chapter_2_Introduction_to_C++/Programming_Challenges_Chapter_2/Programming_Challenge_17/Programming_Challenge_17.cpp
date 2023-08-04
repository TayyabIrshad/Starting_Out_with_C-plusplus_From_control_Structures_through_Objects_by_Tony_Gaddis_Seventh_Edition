//Stock Commission

#include<iostream>
using namespace std;

int main()
{
	double no_of_shares = 600;
	double price_per_share = 21.77;
	double commission_percent = 2;
	double total_stock_amount = 0;
	double commission = 0;
	double total_amount_paid = 0;

	total_stock_amount = no_of_shares * price_per_share;
	commission = commission_percent / 100 * total_stock_amount;
	total_amount_paid = total_stock_amount + commission;

	cout << "The amount paid for the stock alone without the commission is: $" << total_stock_amount << endl;
	cout << "The amount of commission is: $" << commission << endl;
	cout << "The total amount paid is: $" << total_amount_paid << endl;
}