//Membership Fees Increase

#include<iostream>
using namespace std;

int main()
{
	float charges_per_year = 2500;
	float increase_per_year = 0.04;
	int max_years = 6;
	float new_charges ;
	int years = 1;

	for (int years = 1; years <= max_years; years++)
	{
		new_charges = increase_per_year * static_cast<float>(charges_per_year);
		charges_per_year += new_charges;

		cout << years << "\t" << charges_per_year << endl;
	}
	return 0;
}