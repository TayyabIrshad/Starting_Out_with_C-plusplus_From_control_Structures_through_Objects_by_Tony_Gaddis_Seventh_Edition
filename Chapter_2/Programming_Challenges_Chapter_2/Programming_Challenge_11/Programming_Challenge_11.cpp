//Distance per Tank of Gas

#include<iostream>
using namespace std;

int main()
{
	double no_of_gallons = 20;
	double in_town_mpg = 21.5;                                       //mpg = miles per gallon
	double on_highway_mpg = 26.8;
	double distance_in_town = 0;
	double distance_on_highway = 0;

	distance_in_town = no_of_gallons * in_town_mpg;
	distance_on_highway = no_of_gallons * on_highway_mpg;

	cout << "When driven in town the car can travel: " << distance_in_town << " miles per tank." << endl;
	cout << "When driven on highway the car can travel: " << distance_on_highway << " miles per tank." << endl;
}