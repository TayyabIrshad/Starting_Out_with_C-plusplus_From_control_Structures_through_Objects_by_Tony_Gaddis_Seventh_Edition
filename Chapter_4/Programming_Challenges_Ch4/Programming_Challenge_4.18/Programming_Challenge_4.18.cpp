#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	const int air_speed_per_sec = 1100,
		water_speed_per_sec = 4900,
		steel_speed_per_sec = 16400;

	const int air = 1,
		water = 2,
		steel = 3;

	int medium;
	int distance;
	double amount_of_time;

	cout << "Select a medium in which you want to find out the speed of sound!" << endl;
	cout << "\t1. Air\n"
		<< "\t2. Water\n"
		<< "\t3. Steel\n";
	cin >> medium;
	cout << setprecision(4) << fixed;

	if(medium == 1 || medium == 2 || medium == 3)
	{ 
		cout << "How much distance a sound wave will travel in the selected medium?" << endl;
		cin >> distance;
		if (distance < 0)
		{
			cout << "Invalid distance" << endl;
		}
		else
		{
			if (medium == air)
			{
				amount_of_time = distance / air_speed_per_sec;
				cout << "It will take approximately " << amount_of_time << " seconds this amount of time" << endl;
			}
			else if (medium == water)
			{
				amount_of_time = distance / water_speed_per_sec;
				cout << "It will take approximately " << amount_of_time << " seconds this amount of time" << endl;
			}
			else if (medium == steel)
			{
				amount_of_time = distance / steel_speed_per_sec;
				cout << "It will take approximately " << amount_of_time << " seconds this amount of time" << endl;
			}
		}
	}
	else
	{
		cout << "This is not available in the menu options!" << endl;
	}
	return 0;
}