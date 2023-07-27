//Payroll Report

#include<iostream>
using namespace std;

int main()
{
	int employee = 1;
	int employee_no;
	float gross_pay;
	float state_tax;
	float fedral_tax;
	float FICA_withholdings;
	float total_taxes;
	float net_pay;

	cout << "What is your employee number for employee " << employee << "?" << endl;
	cin >> employee_no;

		while (employee_no < 0)
		{
			cout << "Employee number cannot be a negative value!" << endl;
			cout << "What is your employee number for employee " << employee << "?" << endl;
			cin >> employee_no;
		}
		while (employee_no != 0)
		{
			/*	while (employee_no < 0)
				{
					cout << "Negative values are not acceptable!" << endl;

					cout << "What is your employee number for employee " << employee << "?" << endl;
					cin >> employee_no;
				}*/
			cout << "What is your gross pay?" << endl;
			cin >> gross_pay;
			while (gross_pay < 0)
			{
				cout << "Negative values are not acceptable!" << endl;
				cout << "Enter another value for gross pay?" << endl;
				cin >> gross_pay;
			}
			cout << "What is the state tax amount?" << endl;
			cin >> state_tax;

			while (state_tax < 0 || state_tax > gross_pay)
			{
				while (state_tax < 0)
				{
					cout << "Negative values are not acceptable!" << endl;
					cout << "Enter another value for state tax amount?" << endl;
					cin >> state_tax;
				}
				while (state_tax > gross_pay)
				{
					cout << "State tax cannot be greater than gross pay!" << endl;
					cout << "Enter another value for state tax amount?" << endl;
					cin >> state_tax;
				}
			}
			//Logic with do-while loop
					/*	do {
							cout << "Negative values are not acceptable!" << endl;
							cout << "Enter another value for state tax amount?" << endl;
							cin >> state_tax;
						} while (state_tax < 0);
						do {
							cout << "State tax cannot be greater than gross pay!" << endl;
							cout << "Enter another value for state tax amount?" << endl;
							cin >> state_tax;
						} while (state_tax > gross_pay);*/
			//Logic with single while loop
					/*while (state_tax < 0 || state_tax > gross_pay)
						{
							cout << "Negative values are not acceptable!" << endl;
							cout << "Enter another value for state tax?" << endl;
							cin >> state_tax;
						}*/

			cout << "What is the fedral tax amount?" << endl;
			cin >> fedral_tax;
			while (fedral_tax < 0 || fedral_tax > gross_pay)
			{
				while (fedral_tax < 0)
				{
					cout << "Negative values are not acceptable!" << endl;
					cout << "Enter another value for fedral tax amount?" << endl;
					cin >> fedral_tax;
				}
				while (fedral_tax > gross_pay)
				{
					cout << "Fedral tax cannot be greater than gross pay!" << endl;
					cout << "Enter another value for fedral tax amount?" << endl;
					cin >> fedral_tax;
				}
			}

			cout << "What are the FICA withholdings?" << endl;
			cin >> FICA_withholdings;
			while (FICA_withholdings < 0 || FICA_withholdings > gross_pay)
			{
				while (FICA_withholdings < 0)
				{
					cout << "Negative values are not acceptable!" << endl;
					cout << "Enter another value for fedral tax amount?" << endl;
					cin >> FICA_withholdings;
				}
				while (FICA_withholdings > gross_pay)
				{
					cout << "FICA_withholdings cannot be greater than gross pay!" << endl;
					cout << "Enter another value for fedral tax amount?" << endl;
					cin >> FICA_withholdings;
				}
			}
			total_taxes = state_tax + fedral_tax + FICA_withholdings;
			while (total_taxes > gross_pay)
			{
				cout << "\t\tError!\nTotal taxes cannot be greater than gross pay!"
					<< "\nEnter the data for this employee again! " << endl;

				cout << "What is your gross pay?" << endl;
				cin >> gross_pay;
				while (gross_pay < 0)
				{
					cout << "Negative values are not acceptable!" << endl;
					cout << "Enter another value for gross pay?" << endl;
					cin >> gross_pay;
				}
				cout << "What is the state tax amount?" << endl;
				cin >> state_tax;

				while (state_tax < 0 || state_tax > gross_pay)
				{
					while (state_tax < 0)
					{
						cout << "Negative values are not acceptable!" << endl;
						cout << "Enter another value for state tax amount?" << endl;
						cin >> state_tax;
					}
					while (state_tax > gross_pay)
					{
						cout << "State tax cannot be greater than gross pay!" << endl;
						cout << "Enter another value for state tax amount?" << endl;
						cin >> state_tax;
					}
				}

				cout << "What is the fedral tax amount?" << endl;
				cin >> fedral_tax;
				while (fedral_tax < 0 || fedral_tax > gross_pay)
				{
					while (fedral_tax < 0)
					{
						cout << "Negative values are not acceptable!" << endl;
						cout << "Enter another value for fedral tax amount?" << endl;
						cin >> fedral_tax;
					}
					while (fedral_tax > gross_pay)
					{
						cout << "Fedral tax cannot be greater than gross pay!" << endl;
						cout << "Enter another value for fedral tax amount?" << endl;
						cin >> fedral_tax;
					}
				}

				cout << "What are the FICA withholdings?" << endl;
				cin >> FICA_withholdings;
				while (FICA_withholdings < 0 || FICA_withholdings > gross_pay)
				{
					while (FICA_withholdings < 0)
					{
						cout << "Negative values are not acceptable!" << endl;
						cout << "Enter another value for fedral tax amount?" << endl;
						cin >> FICA_withholdings;
					}
					while (FICA_withholdings > gross_pay)
					{
						cout << "FICA_withholdings cannot be greater than gross pay!" << endl;
						cout << "Enter another value for fedral tax amount?" << endl;
						cin >> FICA_withholdings;
					}
				}
				total_taxes = state_tax + fedral_tax + FICA_withholdings;
			}
			net_pay = gross_pay - total_taxes;
			cout << "Net Pay is:\t" << net_pay << endl;

			employee++;

			cout << "====================================================\n";
			cout << "What is your employee number for employee " << employee << "?" << endl;
			cin >> employee_no;
		}
	return 0;
}