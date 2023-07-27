#include<iostream>
using namespace std;

int main()
{
	double sales_this_year = 4600000,sales_percent = 62;
	double amount_generated;

	amount_generated = sales_percent / 100 * sales_this_year;

	cout << "The East Coast division will generate: " << amount_generated << endl;
}
