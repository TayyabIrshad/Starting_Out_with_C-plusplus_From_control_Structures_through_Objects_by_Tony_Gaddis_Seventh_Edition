#include <iostream>
using namespace std;

int main()
{
	const int employees = 6;
	int hours[employees];

	for (int count = 0; count < employees; count++)
	{
		cout << "Enter the hours worked by employee " << count+1 << ": ";
		cin >> hours[count];

	}
	cout << "Hours entered are: ";
	for (int count = 0; count < employees; count++)
	{
		cout << "  " << hours[count];
	}
	cout << endl;

}