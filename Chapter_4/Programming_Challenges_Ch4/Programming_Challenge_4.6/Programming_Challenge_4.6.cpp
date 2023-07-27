//Mass a Weight 

#include<iostream>
using namespace std;

int main()
{
	float mass_in_kgs, weight_in_newtons;

	//weight = mass * 9.8

	cout << "What is the object's mass in kilograms? " << endl;
	cin >> mass_in_kgs;

	weight_in_newtons = mass_in_kgs * 9.8;
	cout << "Weight in newtons is: " << weight_in_newtons << endl;

	if (weight_in_newtons > 1000)
	{
		cout << "It is too heavy." << endl;
	}
	else if (weight_in_newtons < 10)
	{
		cout << "The object is too light." << endl;
	}
	else
	{
		cout << "Optimal weight." << endl;
	}
	return 0;
}