//Land Calculation

#include<iostream>
using namespace std;

int main()
{
	double square_feet_per_acre = 43560;
	double square_feet_total_land = 389767;
	double no_of_acres = 0;

	no_of_acres = square_feet_total_land / square_feet_per_acre;
	cout << "The number of acres is a tract of land with 389,767 square feet are: " << no_of_acres << endl;
}