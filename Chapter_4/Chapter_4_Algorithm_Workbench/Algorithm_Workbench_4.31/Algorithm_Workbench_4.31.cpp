#include<iostream>
using namespace std;

int main()
{
	int sales;
	double commission;
	double commission_rate_percent_10000 = 10, commission_rate_percent_15000 = 15, commission_rate_percent_after_15000 = 20;

	cout << "How many sales are done? ";
	cin >> sales;

	if (sales <= 10000)
	{
		commission = commission_rate_percent_10000 / 100;
		cout << "Commission on this sale is: " << commission << endl;
	}
	else if (sales <= 15000)
	{
		commission = commission_rate_percent_15000 / 100;
		cout << "Commission on this sale is: " << commission << endl;
	}
	else if (sales > 15000)
	{
		commission = commission_rate_percent_after_15000 / 100;
		cout << "Commission on this sale is: " << commission << endl;
	}
	else
		cout << "Invalid input";
	return 0;
}





