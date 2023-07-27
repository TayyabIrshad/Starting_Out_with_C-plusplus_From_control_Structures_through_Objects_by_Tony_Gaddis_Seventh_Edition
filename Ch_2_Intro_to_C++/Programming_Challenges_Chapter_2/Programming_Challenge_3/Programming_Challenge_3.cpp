#include<iostream>
using namespace std;

int main()
{
	double purchase_amount = 52;
	double state_sales_tax_percent = 4, county_sales_tax_percent = 2;
	double sales_tax = state_sales_tax_percent + county_sales_tax_percent;
	double total_sales_tax;

	total_sales_tax = sales_tax / 100 * purchase_amount;

	cout << "Total sales tax is: " << total_sales_tax << endl;
}