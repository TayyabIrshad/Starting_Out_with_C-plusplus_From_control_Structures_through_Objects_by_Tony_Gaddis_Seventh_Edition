/*Pizza Pi*/

#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main()
{
	double diameter_in_inches;
	double area_of_pizza;
	const double pi = 3.14159;
	double radius_of_pizza;
	double area_of_slices;
	double no_of_slices;

	cout << "What is the diameter of pizza in inches? " << endl;
	cin >> diameter_in_inches;

	cout << "What is the area of slices in inches? " << endl;
	cin >> area_of_slices;

	 /*Area = π r2*/
	radius_of_pizza = diameter_in_inches / 2;
	cout << "Radius of pizza is: " << radius_of_pizza << endl;

	area_of_pizza = pi * (pow(radius_of_pizza, 2));
	cout <<"Area of pizza is: " << area_of_pizza << endl;

	no_of_slices = area_of_pizza / area_of_slices;
	cout << setprecision(1) << fixed;
	cout <<"Number of slices for this pizza are: " << no_of_slices << endl;

	return 0;

}