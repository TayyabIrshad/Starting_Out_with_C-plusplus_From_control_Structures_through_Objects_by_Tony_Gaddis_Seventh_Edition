//Markup

#include<iostream>
#include<iomanip>
using namespace std;

void calculateRetail(double, double);

int main()
{
	double wholesale_cost;
	double markup_percentage;
	bool first_time = false;
	do
	{
		if (first_time==true)
		{
			cout << "\n\t\tValues cannot be negative!" << endl;
			cout << "\t\tEnter the valid inputs!\n" << endl;
		}
		cout << "Enter the items wholesale cost: ";
		cin >> wholesale_cost;
		cout << "Enter its markup percentage: ";
		cin >> markup_percentage;
		first_time = true;
	} while (wholesale_cost < 0 || markup_percentage < 0);
	

	cout << fixed << setprecision(2);



	calculateRetail(wholesale_cost, markup_percentage);

	return 0;
}

void calculateRetail(double wholesale, double markup)
{
	double retail_price;
	markup /= 100;
	retail_price = markup * wholesale;
	retail_price += wholesale;
	cout << "\n\t\tRetail Price is: " << retail_price << endl;
}