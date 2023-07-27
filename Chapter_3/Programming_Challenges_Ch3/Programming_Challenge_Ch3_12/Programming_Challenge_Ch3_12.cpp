/*Monthly Sales Tax*/

#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

int main()
{
	double monthly_sale;
	double total_sales_tax_amount;
	string month;
	int year;
	double total_amount_collected;
	double state_sales_tax = 4;
	double county_sales_tax = 2;

	cout << "Enter the month an the year of which you want to see the sales tax report: ";
	cin >> month >> year;

	cout << "What is the total amount collected in this month (including sales + sales tax?) at the cash register?  ";
	cin >> total_amount_collected;

	monthly_sale = total_amount_collected / 1.06;

	state_sales_tax *= monthly_sale / 100;
	county_sales_tax *= monthly_sale / 100;
	total_sales_tax_amount = state_sales_tax + county_sales_tax;

	cout << "Monthly Sales Tax Report:\n " << endl;
	cout << setprecision(2) << fixed;
	cout << "Month: "<<setw(10) << month << endl;
	cout << "------------------------" << endl;
	cout << "Total Collected: " << setw(9) << "$" << setw(10) << total_amount_collected << endl;
	cout << "Sales: " << setw(19) << "$" << setw(10) << monthly_sale << endl;
	cout << "County Sales Tax: " << setw(8) << "$" << setw(10) << county_sales_tax << endl;
	cout << "State Sales Tax: " << setw(9) << "$" << setw(10) << state_sales_tax << endl;
	cout << "Total Sales Tax: " << setw(9) << "$" << setw(10) << total_sales_tax_amount << endl;

	return 0;
}