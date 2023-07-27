//Shipping Charges

#include<iostream>
using namespace std;

int main()
{
	int package_weight;
	int miles = 500;
	double price_per_mile;
	double distance_to_be_shipped;
	double rate_per_500_miles_1 = 1.10, rate_per_500_miles_2 = 2.20,
		rate_per_500_miles_3 = 3.70, rate_per_500_miles_4 = 4.80;
	double rate_for_desired_distance;

	cout << "What is the weight of the package? " << endl;
	cin >> package_weight;

	

	if (package_weight > 0 && package_weight <= 20)
	{
		cout << "How much is the distance it is to be shipped? " << endl;
		cin >> distance_to_be_shipped;

		if (distance_to_be_shipped >= 10 && distance_to_be_shipped <= 3000)
		{
			if (package_weight <= 2)
			{
				price_per_mile = rate_per_500_miles_1 / miles;
				rate_for_desired_distance = price_per_mile * distance_to_be_shipped;
				cout << "Charges for this package size and this distance will be: $" << rate_for_desired_distance;
			}
			else if (package_weight > 2 && package_weight <= 6)
			{
				price_per_mile = rate_per_500_miles_2 / miles;
				rate_for_desired_distance = price_per_mile * distance_to_be_shipped;
				cout << "Charges for this package size and this distance will be: $" << rate_for_desired_distance;
			}
			else if (package_weight > 6 && package_weight <= 10)
			{
				price_per_mile = rate_per_500_miles_3 / miles;
				rate_for_desired_distance = price_per_mile * distance_to_be_shipped;
				cout << "Charges for this package size and this distance will be: $" << rate_for_desired_distance;
			}
			else if (package_weight > 10 && package_weight <= 20)
			{
				price_per_mile = rate_per_500_miles_4 / miles;
				rate_for_desired_distance = price_per_mile * distance_to_be_shipped;
				cout << "Charges for this package size and this distance will be: $" << rate_for_desired_distance;
			}
		}
		else
		{
			cout << "We do not operate on this distance! " << endl;
		}
	}
	else
	{
		cout << "Weight is not acceptable! " << endl;
	}






	

}