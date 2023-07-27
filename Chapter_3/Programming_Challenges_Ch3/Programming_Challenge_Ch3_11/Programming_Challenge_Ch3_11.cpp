/*Currency*/

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	const float YEN_PER_DOLLAR = 143.76;
	const float EUROS_PER_DOLLAR = 0.92;
	float dollar_amount;
	float yen_amount;
	float euros_amount;

	cout << setprecision(2) << fixed;
	cout << "Enter the amount in dollars: ";
	cin >> dollar_amount;
	cout << endl;

    yen_amount = dollar_amount * YEN_PER_DOLLAR;
	euros_amount = dollar_amount * EUROS_PER_DOLLAR;

	cout <<" $" << dollar_amount << " is equals to " << yen_amount << " Japanese yen and " << euros_amount << " euros." << endl;

	return 0;
}