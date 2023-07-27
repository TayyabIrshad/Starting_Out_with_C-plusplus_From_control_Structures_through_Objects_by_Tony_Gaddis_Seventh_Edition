// Bank Charges

#include <iostream>
using namespace std;

int main()
{
	int bank_charges_per_month = 10;
	int min_account_balance = 400;
	int below_min_balance_charges = 15;
	double account_balance;
	int no_of_checks_written;
	double bank_service_fee;

	cout << "What is the begginning balance of your account? " << endl;
	cin >> account_balance;

	if (account_balance >= min_account_balance)
	{
		cout << "How many no of checks are written? " << endl;
		cin >> no_of_checks_written;

		if (no_of_checks_written > 0)
		{
			if (no_of_checks_written < 20)
			{
				bank_service_fee = no_of_checks_written * 0.10;
				bank_service_fee += 10;
				cout << "Bank Service fees will be: " << bank_service_fee << endl;
			}
			else if (no_of_checks_written >= 20 && no_of_checks_written <= 39)
			{
				bank_service_fee = no_of_checks_written * 0.08;
				bank_service_fee += 10;
				cout << "Bank Service fees will be: " << bank_service_fee << endl;
			}
			else if (no_of_checks_written >= 40 && no_of_checks_written <= 59)
			{
				bank_service_fee = no_of_checks_written * 0.06;
				bank_service_fee += 10;
				cout << "Bank Service fees will be: " << bank_service_fee << endl;
			}
			else if (no_of_checks_written >= 60)
			{
				bank_service_fee = no_of_checks_written * 0.04;
				bank_service_fee += 10;
				cout << "Bank Service fees will be: " << bank_service_fee << endl;
			}
		}
		else if (no_of_checks_written == 0)
		{
			cout << "No checks were written! " << endl;
		}
		else
		{
			cout << "Negative value is not accepted! " << endl;
		}
	}
	else if (account_balance > 0 && account_balance < min_account_balance)
	{
		cout << "How many no of checks are written? " << endl;
		cin >> no_of_checks_written;

		if (no_of_checks_written > 0)
		{
			if (no_of_checks_written < 20)
			{
				bank_service_fee = no_of_checks_written * 0.10;
				bank_service_fee += 15;
				cout << "Bank Service fees will be: " << bank_service_fee << endl;
			}
			else if (no_of_checks_written >= 20 && no_of_checks_written <= 39)
			{
				bank_service_fee = no_of_checks_written * 0.08;
				bank_service_fee += 15;
				cout << "Bank Service fees will be: " << bank_service_fee << endl;
			}
			else if (no_of_checks_written >= 40 && no_of_checks_written <= 59)
			{
				bank_service_fee = no_of_checks_written * 0.06;
				bank_service_fee += 15;
				cout << "Bank Service fees will be: " << bank_service_fee << endl;
			}
			else if (no_of_checks_written >= 60)
			{
				bank_service_fee = no_of_checks_written * 0.04;
				bank_service_fee += 15;
				cout << "Bank Service fees will be: " << bank_service_fee << endl;
			}
		}
		else if (no_of_checks_written==0)
		{
			cout << "No checks were written! " << endl;
		}
		else
		{
			cout << "Negative value is not accepted! " << endl;
		}

	}
	else
	{
		cout << "The account is overdrawn!" << endl;
	}
	return 0;
}