//Miles per Gallon

#include<iostream>
using namespace std;

int main()
{
	double no_of_gallons = 12;
	double miles_driven = 350;
	double miles_per_gallon = 0;

	miles_per_gallon = miles_driven / no_of_gallons;
	cout << "The number of miles per gallon are: " << miles_per_gallon << endl;
}