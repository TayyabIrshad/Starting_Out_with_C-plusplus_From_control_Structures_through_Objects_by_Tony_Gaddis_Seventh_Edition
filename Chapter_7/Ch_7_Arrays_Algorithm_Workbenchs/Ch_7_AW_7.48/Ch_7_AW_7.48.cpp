#include <iostream>
using namespace std;

int main()
{
	float values[10][20];
	float total = 0;

	cout << "Enter the values: " << endl;
	for (int rows = 0; rows < 10; rows++)
	{
		for (int cols = 0; cols < 20; cols++)
		{
			cout << "Value for row " << (rows + 1)<< " & Col " << (cols + 1) << " is: ";
			cin >> values[rows][cols];
		}
	}
	for (int rows = 0; rows < 10; rows++)
	{
		for (int cols = 0; cols < 20; cols++)
		{
			total += values[rows][cols];
		}
	}
	cout << "Total of all the above values is: " << total;
}