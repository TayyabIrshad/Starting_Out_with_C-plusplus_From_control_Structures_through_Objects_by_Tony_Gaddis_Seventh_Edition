#include<iostream>
using namespace std;

int main()
{
	int days[29][5];

	//For Rows Sum!

	/*cout << "Enter the values: " << endl;
	for (int rows = 0; rows < 29; rows++)
	{
		int total = 0;
		for (int cols = 0; cols < 5; cols++)
		{
			cout << "Value for row " << (rows + 1) << " & Col " << (cols + 1) << " is: ";
			cin >> days[rows][cols];
			total += days[rows][cols];
		}
		cout << "Total is: " << total << endl;
	}*/

	//For Columns Sum!

	cout << "Enter the values: " << endl;
	for (int cols = 0; cols < 5; cols++)
	{
		int total = 0;
		for (int rows = 0; rows < 29; rows++)
		{
			cout << "Value for row " << (rows + 1) << " & Col " << (cols + 1) << " is: ";
			cin >> days[rows][cols];
			total += days[rows][cols];

		}
		cout << "Total is: " << total << endl;
	}
}