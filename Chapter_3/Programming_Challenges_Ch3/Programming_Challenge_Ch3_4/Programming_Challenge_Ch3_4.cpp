/*Average Rainfall*/

#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

int main()
{
	string month1_name, month2_name, month3_name;
	double rain_amount_month_1, rain_amount_month_2, rain_amount_month_3;
	double average_rainfall;
	int no_of_months = 3;

	cout << "Enter the names of three months and the amount of rain (in inches) fell in these months: " << endl << endl;

	cout << "Month Name: ";
	cin >> month1_name;
	cout << "Rain amount: ";
	cin >> rain_amount_month_1;
	cout << endl;

	cout << "Month Name: ";
	cin >> month2_name;
	cout << "Rain amount: ";
	cin >> rain_amount_month_2;
	cout << endl;

	cout << "Month Name: ";
	cin >> month3_name;
	cout << "Rain amount: ";
	cin >> rain_amount_month_3;
	cout << endl;

	average_rainfall = (rain_amount_month_1 + rain_amount_month_2 + rain_amount_month_3) / no_of_months;

	cout << "The average rainfall for " << month1_name << ", " << month2_name << ", and " << month3_name << " is " << average_rainfall << " inches." << endl << endl;

	/*cout << "Month Name" << setw(20) << "Rain Amount" << endl
		<< month1_name << setw(20) << rain_amount_month_1 << endl
		<< month2_name << setw(20) << rain_amount_month_2 << endl
		<< month3_name << setw(18) << rain_amount_month_3 << endl;*/

	return 0;
}