#include<iostream>
using namespace std;

int main()
{
	int num;
	int product = 0;

	while (product < 100)
	{
		cout << "Enter a number:  ";
		cin >> num;
		product = num * 10;
		cout << product << endl;
	}
	return 0;
}