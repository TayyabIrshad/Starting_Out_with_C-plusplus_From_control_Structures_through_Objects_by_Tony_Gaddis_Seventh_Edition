// The Speed of Sound in Gases

#include<iostream>
using namespace std;

int main()
{
	int medium;
	const double carbon_dioxide_speed = 258.0,
		air_speed = 331.5,
		helium_speed = 972.0,
		hydrogen_speed = 1270.0;

	const int carbon_dioxide = 1,
		air = 2,
		helium = 3,
		hydrogen = 4;

	double distance;
	int time;

	cout << "Select a medium of gas in which you want to find out the speed of sound!" << endl;
	cout << "\t1. Carbon Dioxide.\n"
		<< "\t2. Air.\n"
		<< "\t3. Helium.\n"
		<< "\t4. Hydrogen.\n";
	cin >> medium;

	

	if (medium == 1 || medium == 2 || medium == 3 || medium == 4)
	{
		cout << "How many number of seconds it took for the sound to travel in this medium from its source "
			<< "the location at which it was detected? " << endl;
		cin >> time;
		//if (time >= 0 && time <= 30)
		if (time < 0 || time > 30)
		{
			cout << "Invalid time!";
		}
		else
		{
			if (medium == carbon_dioxide)
			{
				distance = time * carbon_dioxide_speed;
				cout << "The source of the sound was " << distance << " meters, "
					<< "far away from the detection location!"<< endl;
			}
			else if (medium == air)
			{
				distance = time * air_speed;
				cout << "The source of the sound was " << distance << " meters, "
					<< "far away from the detection location!" << endl;
			}
			else if (medium == helium)
			{
				distance = time * helium_speed;
				cout << "The source of the sound was " << distance << " meters, "
					<< "far away from the detection location!" << endl;
			}
			else if (medium == hydrogen)
			{
				distance = time * hydrogen_speed;
				cout << "The source of the sound was " << distance << " meters, "
					<< "far away from the detection location!" << endl;
			}
		}
	}
	else
	{
		cout << "This option is not available in the menu!" << endl;
	}
	return 0;
}