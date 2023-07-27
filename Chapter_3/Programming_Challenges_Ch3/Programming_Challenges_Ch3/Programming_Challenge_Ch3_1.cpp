//Miles per Gallon

#include<iostream>
using namespace std;

int main()
{
	double miles_per_gallon;
	double no_of_gallons;
	double no_of_miles;

	cout << "How many number of gallons of gas your car can hold? " << endl;
	cin >> no_of_gallons;

	cout << "How many number of miles can be driven on a full tank? " << endl;
	cin >> no_of_miles;

	miles_per_gallon = no_of_miles / no_of_gallons;
	cout << "The number of miles may be driven per gallon of gas are: " << miles_per_gallon << endl;

}