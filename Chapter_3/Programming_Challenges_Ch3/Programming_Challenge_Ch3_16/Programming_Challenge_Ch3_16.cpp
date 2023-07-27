/*Interest Earned*/

#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main()
{
	/*Amount = Principal * (1+Rate/t) exp t*/

	double principal;          /*balance_in_savings_account*/
	double interest_rate;
	int interest_rate_compounded;
	double interest;
	double total_balance;
	/*double interest_percent;*/

	cout << "What is the interest rate? " << endl;
	cin >> interest_rate;
	/*cout << "Interest rate is: " << interest_rate << "%" << endl;*/

	interest_rate /= 100;
	/*cout << "Interest Rate will be: " << interest_rate << endl ;*/

	cout << "What is the Principal (balance) in the savings account? " << endl << "$";
	cin >> principal;

	cout << "How many times the interest rate is compounded? " << endl;
	cin >> interest_rate_compounded;

	/*interest = principal * interest_percent / 100;
	cout << interest << endl;*/

	total_balance = principal * (pow(1 + interest_rate / interest_rate_compounded, interest_rate_compounded));
	/*cout << total_balance << endl;*/

	interest = total_balance - principal;
	/*cout << "Interest is: " << interest << endl;*/

	interest_rate *= 100;

	cout << setprecision(2) <<fixed;
	cout << "Interest Rate: " << setw(19)<< interest_rate << "%" << endl;
	cout << "Times Compounded: " << setw(16) << interest_rate_compounded << endl;
	cout << "Principal: " << setw(13) << "$" << setw(10) << principal << endl;
	cout << "Interest: " << setw(14) << "$" << setw(10) << interest << endl;
	cout << "Amount in Savings: " << setw(5) << "$" << setw(10) << total_balance << endl;

	return 0;
}