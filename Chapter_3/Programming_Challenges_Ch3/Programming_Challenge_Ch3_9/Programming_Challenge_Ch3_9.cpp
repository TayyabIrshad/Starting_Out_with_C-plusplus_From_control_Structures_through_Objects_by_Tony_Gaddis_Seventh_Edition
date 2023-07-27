/*Automobile Costs*/
#include<iostream>
using namespace std;

int main()
{
	int loan_payment, insurance, gas, oil, tires, maintenance;
	int total_monthly_cost, total_annual_cost;

	cout << "Enter the monthly expenses incurred from operating your automobile:\n" << endl;

	cout << "Loan payment: ";
	cin >> loan_payment;

	cout << "Insurance: ";
	cin >> insurance;

	cout << "Gas: ";
	cin >> gas;

	cout << "Oil: ";
	cin >> oil;

	cout << "Tires: ";
	cin >> tires;

	cout << "Maintenance: ";
	cin >> maintenance;

	total_monthly_cost = loan_payment + insurance + gas + oil + tires + maintenance;
	cout << "Total monthly cost of all the expenses is: " << total_monthly_cost << endl;

	total_annual_cost = total_monthly_cost * 12;
	cout << "Total annual cost of all the expenses is: " << total_annual_cost << endl;

	return 0;
}
