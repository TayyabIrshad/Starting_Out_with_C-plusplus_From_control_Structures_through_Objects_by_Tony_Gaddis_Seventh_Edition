//Sum of Numbers

#include<iostream>
using namespace std;

int main()
{
	int number;
	int sum = 0;

	cout << "Enter a number: ";
	cin >> number;

	while (number < 0)
	{
		cout << "Enter a positive number:\n";
		cout << "Enter a number: ";
		cin >> number;
	}
	for (int i = 1; i <= number; i++)
	{
		sum = sum + i;
		cout << i << "\t" << sum << endl;
	}
	return 0;
}