#include<iostream>
using namespace std;

int main()
{

	int amount1, amount2;
	cout << "Enter the amounts: " << endl;
	cin >> amount1 >> amount2;

	if (amount1 > 10)
	{
		if (amount2 < 100)
		{
			if (amount1 > amount2)
			{
				cout << "Amount 1 is greater than Amount 2";
			}
			if (amount2 > amount1)
			{
				cout << "Amount 2 is greater than Amount 1";
			}
		}
		else
		{
			cout << "Amount 2 is Invalid amount!";
		}
	}
	else
	{
		cout << "Amount 1 is Invalid amount!";
	}


}