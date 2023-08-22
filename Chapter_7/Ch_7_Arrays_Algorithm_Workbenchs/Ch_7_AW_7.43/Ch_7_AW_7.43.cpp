#include<iostream>
using namespace std;

int main()
{
	const int employees = 10;
	int id_no[employees];
	double gross_pay[employees];
	
	cout << "Enter the employees id's and their weekly gross pay! " << endl;

	for (int i = 0; i < employees; i++)
	{
		cout << "Eployees no " << i + 1 << " id no: ";
		cin >> id_no[i];
		cout << "Eployees no " << i + 1 << " gross pay: ";
		cin >> gross_pay[i];
	}

	cout << "Employees identification number and their weekly gross pay are: " << endl << endl;

	for (int i = 0; i < employees; i++)
	{
		cout << "Employee no " << i + 1 << "  " << id_no[i] << " & His gross pay: " << gross_pay[i] << endl;
	}
	return 0;
}