/*Senior Citizen Property Tax*/

#include<iostream>
using namespace std;

int main()
{
	int senior_citizens_exemption = 5000;
	int actual_value;
	int assessed_value;
	int assessement_percentage;
	int assessed_value_after_exemption;
	double tax_rate_for_each_$100_assessed_value;
	double total_property_tax;
	int payment_quarters;
	double payment_per_quarter;

	cout << "What is the actual value of a piece of property? " << endl << "$";
	cin >> actual_value;

	cout << "What the percentage at which the property is assessed? " << endl;
	cin >> assessement_percentage;

	assessed_value = actual_value * assessement_percentage / 100;

	/*Calculating the assessed value after senior citizen exemption*/
	assessed_value_after_exemption = assessed_value - senior_citizens_exemption;

	cout << "What is the current tax rate for each $100 of assessed value? " << endl << "$";
	cin >> tax_rate_for_each_$100_assessed_value;
	
	/*atleast one operand must be a floating-point number in order to get the result in floating-point during integer division*/
	total_property_tax = (static_cast<double>(assessed_value_after_exemption) / 100) * tax_rate_for_each_$100_assessed_value;

	cout << "In how many quarters senior citizens are allowed to pay their property tax? " << endl;
	cin >> payment_quarters;

	payment_per_quarter = total_property_tax / payment_quarters;
	
	cout << "The annual property tax a senior homeowner will be charged for this property is: $" << total_property_tax << endl;
	cout << "The quarterly tax bill will be: $" << payment_per_quarter << " per quarter" << endl;

	return 0;
}