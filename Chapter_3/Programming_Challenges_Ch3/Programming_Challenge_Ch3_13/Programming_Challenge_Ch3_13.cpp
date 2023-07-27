#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	double assessment_value_property_tax = 60;
	double assessment_value;
	double actual_value;
	double property_tax;
	double tax_for_each_$100_assessment_value;

	cout << "What is the actual value of a piece of property? " << endl << "$";
	cin >> actual_value;

	assessment_value = actual_value * assessment_value_property_tax / 100;
	
	cout << "What is the property tax in cents for each $100 of the assessment value? " << endl;
	cin >> tax_for_each_$100_assessment_value;

	//property tax is 64 cents for each $100 of the assessment value.
	property_tax = assessment_value / 100 * tax_for_each_$100_assessment_value;

	//convert cents into dollars ($1 = 100cents)
	property_tax /= 100;

	cout << "Assessment value: " << "$" << assessment_value << endl;
	cout << setprecision(2) << fixed;
	cout << "Property tax: $" << property_tax << endl;

	return 0;
}