#include<iostream>
using namespace std;

int main()
{
	int num1, num2, sum;
	char ch;
	do
	{
		cout << "Enter two numbers: ";
		cin >> num1 >> num2;
		sum = num1 + num2;
		cout << "Sum is: " << sum << endl;

		cout << "Do you wish to perform this iperation again? (Y/N) ";
		cin >> ch;
	} while (ch == 'Y' || ch == 'y');
	return 0;
}