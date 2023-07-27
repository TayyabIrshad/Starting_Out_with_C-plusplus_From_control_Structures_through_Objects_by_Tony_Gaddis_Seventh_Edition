/*How Much Insurance? */
#include<iostream>
using namespace std;

int main()
{
	int insurance_percent = 80;
	int replacement_cost;
	int min_insurance_amount;

	cout << "What will be the replacement cost of the of your building? " << endl;
	cin >> replacement_cost;

	min_insurance_amount = (replacement_cost * insurance_percent) / 100;

	cout << "The minimun about of insurance you should buy for your property is: " << min_insurance_amount << endl;

	return 0;
}