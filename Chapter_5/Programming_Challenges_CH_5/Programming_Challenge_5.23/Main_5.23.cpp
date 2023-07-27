//Pattern Displays

#include<iostream>
using namespace std;

int main()
{
	char pattern_A_ch = '+';
	for (int rows = 0; rows < 10; rows++)
	{
		for (int col = 0; col < rows; col++)
		{
			cout << pattern_A_ch;
		}
		cout << pattern_A_ch <<"\n";
	}

	cout << endl;
	/*cout << "\t\t\t";*/

	char pattern_B_ch = '+';
	for (int rows = 0; rows < 10; rows++)
	{
		for (int col = 9; col > rows; col--)
		{
			cout << pattern_B_ch;
		}
		cout << pattern_B_ch << endl;
	}
	return 0;
}