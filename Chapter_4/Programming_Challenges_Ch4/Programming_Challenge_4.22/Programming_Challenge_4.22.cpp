//Long Distance Calls

#include<iostream>
using namespace std;

int main()
{
	float starting_time;
	float no_of_mins;
	float charges;

	float rate_per_min1 = 0.12,
		rate_per_min2 = 0.55,
		rate_per_min3 = 0.35;

	cout << "Enter the starting time of call," << endl
		<<"Enter the time in floating-point number in HH.MM form: " ;
	cin >> starting_time;

	/*if (starting_time <= 23.59 && static_cast<int>(no_of_mins) <= 59)*/
	if (starting_time >= 00.00 && starting_time <= 23.59)
	{
		cout << "Enter the number of minutes of the call: " << endl;
		cin >> no_of_mins;

		if (static_cast<int>(no_of_mins) >= 00 && static_cast<int>(no_of_mins) <= 59)
		{
			if (starting_time >= 00.00 && starting_time <= 06.59)
			{
				charges = no_of_mins * rate_per_min1;
				cout << "Charges will be: " << charges;
			}
			else if (starting_time >= 07.00 && starting_time <= 17.00)
			{
				charges = no_of_mins * rate_per_min2;
				cout << "Charges will be: " << charges;
			}
			else if (starting_time >= 19.01 && starting_time <= 23.59)
			{
				charges = no_of_mins * rate_per_min3;
				cout << "Charges will be: " << charges;
			}
		}
		else
		{
			cout << "Number of minute cannot be more than 59 or less than 00." << endl;
		}
	}
	else
	{
		cout << "Time cannot be greater than 23 Hours:59 Minites" << endl
			<< "OR" << endl
			<< "less than 00 Hours:00 Minutes" << endl;
	}
	return 0;
}