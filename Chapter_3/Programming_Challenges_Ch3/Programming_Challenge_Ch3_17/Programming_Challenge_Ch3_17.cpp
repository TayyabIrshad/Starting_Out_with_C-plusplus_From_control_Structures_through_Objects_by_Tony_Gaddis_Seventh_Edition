/*Monthly Payments*/

#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main()
{
	int monthly_interest_rate;
	double rate;
	double loan_amount_L;
	int no_of_payments_N;
	double monthly_payment;
	double amount_paid_back;
	double interest_paid;

	cout << "What is the monthly interest rate in percentage? " << endl;
	cin >> monthly_interest_rate;
	rate = static_cast <double>(monthly_interest_rate) / 100;

	cout << "What is the loan amount? " << endl <<"$";
	cin >> loan_amount_L;

	cout << "What are the total number of payments? " << endl;
	cin >> no_of_payments_N;

	monthly_payment = rate * (pow(1 + rate, no_of_payments_N)) / (pow(1 + rate, no_of_payments_N) - 1) * loan_amount_L;
	cout << "Monthly Payment will be: " << monthly_payment << endl << endl;

	amount_paid_back = monthly_payment * no_of_payments_N;
	interest_paid = amount_paid_back - loan_amount_L;

	cout << setprecision(2) << fixed;
	cout << "Loan Amount: " << setw(16) << "$" << setw(10) << loan_amount_L << endl;
	cout << "Monthly Interest Rate: " << setw(15) << monthly_interest_rate << "%" << endl;
	cout << "Number of Payments: " << setw(19) << no_of_payments_N << endl;
	cout << "Monthly payment: " << setw(12) << "$" << setw(10) << monthly_payment << endl;
	cout << "Amount Paid Back: " << setw(11) << "$" << setw(10) << amount_paid_back << endl;
	cout << "Interest Paid: " << setw(14) << "$" << setw(10) << interest_paid << endl;

	return 0;
}