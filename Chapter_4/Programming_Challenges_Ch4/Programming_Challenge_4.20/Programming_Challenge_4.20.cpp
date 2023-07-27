#include<iostream>
using namespace std;

int main()
{
	int temperature;

	const int Ethyl_alcohol_Freezing_point = -173,
		Mercury_Freezing_point = -38,
		Oxygen_Freezing_point = -362,
		Water_Freezing_point = 32;

	const int Ethyl_alcohol_Boiling_point = 172,
		Mercury_Boiling_point = 676,
		Oxygen_Boiling_point = -306,
		Water_Boiling_point = 212;

	cout << "Enter a temperature:  ";
	cin >> temperature;

	if (temperature <= 32)
	{
		cout << "Water "
			<< "will freeze at this point" << endl;
		if (temperature <= -38)
		{
			cout << "Mercury "
				<< "will freeze at this point" << endl;
			if (temperature <= -173)
			{
				cout << "Ethyl alcohol "
					<< "will freeze at this point" << endl;
				if (temperature <= -362)
				{
					cout << "Oxygen "
						<< "will freeze at this point" << endl;
				}
			}
		}
	}
	if (temperature >= -306)
		{
			cout << "Oxygen "
				<< "will boil at this point" << endl;
			if (temperature >= 172)
			{
				cout << "Ethyl alcohol "
					<< "will boil at this point" << endl;
				if (temperature >= 212)
				{
					cout << "Water "
						<< "will boil at this point" << endl;
					if (temperature >= 676)
					{
						cout << "Mercury "
							<< "will boil at this point" << endl;
					}
				}
			}
		}
	return 0;
}
