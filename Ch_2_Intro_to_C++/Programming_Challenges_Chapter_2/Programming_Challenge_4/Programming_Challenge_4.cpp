#include<iostream>
using namespace std;

int main()
{
	double meal_charge = 44.50;
	double tax_percent = 6.75;
	double tax_amount;
	double meal_cost_after_tax;
	double tip_amount_percent = 15;
	double tip_amount;
	double total_bill;
	//tax amount on meal charge: 
	tax_amount = tax_percent / 100 * meal_charge;
	/*tax_amount = tax_amount * meal_charge;*/

	meal_cost_after_tax = meal_charge + tax_amount;

	//tip amount after adding tax amount to meal cost
	tip_amount = tip_amount_percent / 100;
	tip_amount = tip_amount * meal_cost_after_tax;

	//total bill
	total_bill = meal_charge + tax_amount + tip_amount;

	cout << "Meal Cost is: " << meal_cost_after_tax << endl;
	cout << "Tax amount is: " << tax_amount << endl;
	cout << "Tip amount is: " << tip_amount << endl;
	cout << "Total bill is: " << total_bill << endl;
}