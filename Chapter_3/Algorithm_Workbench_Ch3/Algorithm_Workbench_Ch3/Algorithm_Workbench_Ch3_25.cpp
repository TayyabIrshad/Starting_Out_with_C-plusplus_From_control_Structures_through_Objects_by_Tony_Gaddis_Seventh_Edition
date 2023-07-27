//pseudocode algorithm:
/*
   Get the customer's maximum amount of credit.
   Get the amount of credit used.
   Calculate by subtracting the amount of credit used from maximun amount of credit.
   Display the customer's availabe credit.
*/

#include<iostream>
using namespace std;

int main()
{
	double max_credit_amount;
	double credit_amount_used;
	double available_credit;

	cout << "What is your maximum amount of credit?  " << endl;
	cin >> max_credit_amount;

	cout << "How much the amount of credit is used?  " << endl;
	cin >> credit_amount_used;

	available_credit = max_credit_amount - credit_amount_used;

	cout << "Your availale credit amount is: " << available_credit << endl;

	return 0;
}