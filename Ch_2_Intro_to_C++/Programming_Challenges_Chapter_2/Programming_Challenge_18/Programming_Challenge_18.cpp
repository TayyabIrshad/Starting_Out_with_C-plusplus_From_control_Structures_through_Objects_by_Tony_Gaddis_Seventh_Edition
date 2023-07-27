#include<iostream>
using namespace std;

int main()
{
	double customers_surveyed = 12467;
	double purchase_percent = 14;
	int energy_drink_purchasers = 0;
	double citrus_purchasers_percent = 64;
	int no_of_citrus_flav_customers = 0;

	energy_drink_purchasers = purchase_percent / 100 * customers_surveyed;

	no_of_citrus_flav_customers = citrus_purchasers_percent / 100 * energy_drink_purchasers;

	cout <<"The approx. no of customers who purchase one or more energy drinks per week: " << energy_drink_purchasers << endl;
	cout <<"The approx. no of customers who prefer citrus flavored energy drinks: : " << no_of_citrus_flav_customers << endl;
}