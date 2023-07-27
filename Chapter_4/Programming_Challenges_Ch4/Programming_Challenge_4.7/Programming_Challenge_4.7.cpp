//Time Calculator

#include<iostream>
using namespace std;

int main()
{
	double seconds, minutes, hours, days;
	cout << "Enter the number of seconds: ";
	cin >> seconds;

	int seconds_per_min = 60, seconds_per_hour = 3600, seconds_per_day = 86400;


	minutes = seconds / 60;
	hours = seconds / 3600;
	days = seconds / 86400;

	if (seconds >= seconds_per_day)
	{
		
		cout << "The number of days in " << seconds << " seconds are " << days << endl;
	}
	else if (seconds >= seconds_per_hour)
	{
		
		cout << "The number of hours in " << seconds << " seonds are " << hours << endl;
	}
	else if (seconds >= seconds_per_min)
	{
		
		cout << "The number of mins in " << seconds << " seonds are " << minutes << endl;
	}
	else
	{
		cout << "Invalid input!" << endl;
	}
	return 0;
}
