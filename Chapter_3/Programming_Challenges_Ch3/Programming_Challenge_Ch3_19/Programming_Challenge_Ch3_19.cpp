/*How many Pizzas*/

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
	double no_of_slices_per_person = 4;
	int no_of_people;
	double total_slices;
	double no_of_pizzas;


	cout << "How many number of people will be at the party? " << endl;
	cin >> no_of_people;
	total_slices = no_of_people * no_of_slices_per_person;

	cout << "What is the diameter of pizza in inches? " << endl;
	cin >> diameter_in_inches;

	cout << "What is the area of slices in inches? " << endl;
	cin >> area_of_slices;

	/*Area = π r2*/
	radius_of_pizza = diameter_in_inches / 2;
	cout << "Radius of pizza is: " << radius_of_pizza << endl;

	area_of_pizza = pi * (pow(radius_of_pizza, 2));
	cout << "Area of pizza is: " << area_of_pizza << endl;

	no_of_slices = area_of_pizza / area_of_slices;
	cout << setprecision(1) << fixed;
	
	no_of_pizzas = total_slices / no_of_slices;

	cout << "Number of people attending the party: " << no_of_people << endl;

	cout << "Number of Slices needed: " << total_slices << endl;

	cout << "Number of slices per pizza are: " << no_of_slices << endl;

	cout << "Number of pizzas to be ordered: " << no_of_pizzas << endl;

	return 0;

}