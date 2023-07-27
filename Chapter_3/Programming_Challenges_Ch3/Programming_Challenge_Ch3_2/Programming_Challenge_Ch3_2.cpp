/*Stadium Seating*/

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int class_A_cost = 15;
	int class_B_cost = 12;
	int class_C_cost = 9;
	int sold_class_A, sold_class_B, sold_class_C;
	double class_A_income, class_B_income, class_C_income;
	double total_income;

	cout << setprecision(2) << fixed << showpoint;
	cout << "How many tickets for class A seats were sold? " << endl;
	cin >> sold_class_A;
	class_A_income = class_A_cost * sold_class_A;
	cout << "Income from class A seats is: $" << class_A_income << endl << endl;

	cout << "How many tickets for class B seats were sold? " << endl;
	cin >> sold_class_B;
	class_B_income = class_B_cost * sold_class_B;
	cout << "Income from class B seats is: $" << class_B_income << endl << endl;

	cout << "How many tickets for class C seats were sold? " << endl;
	cin >> sold_class_C;
	class_C_income = class_C_cost * sold_class_C;
	cout << "Income from class C seats is: $" << class_C_income << endl << endl;

	total_income = class_A_income + class_B_income + class_C_income;
	/*total_income = (class_A_cost * sold_class_A) + (class_B_cost * sold_class_B) + (class_C_cost * sold_class_C);*/

	cout << "Total income is: $" << total_income << endl;

	return 0;
}