//Annual Pay

#include<iostream>
using namespace std;

int main()
{
	double payAmount = 1700.0;
	double payPeriods = 26;
	double annualPay = 0;

	annualPay = payAmount * payPeriods;

	cout << "Employee's total annual pay is: " << annualPay << endl;
}