//Body Mass Index BMI Calculator

#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main()
{
	float weight, height;
	float BMI;
	cout << "Enter the weight in pounds: ";
	cin >> weight;
	cout << "Enter the height in inches: ";
	cin >> height;

	BMI = weight * 703 / (pow(height, 2));

	cout << setprecision(2) << fixed;
	cout << "BMI is: " << BMI << endl;

	if (BMI >= 18.5 && BMI <= 25)
	{
		cout << "This person has optimal weight." << endl;
	}
	else if (BMI < 18.5 && BMI > 0)
	{
		cout << "This person is underweight." << endl;
	}
	else if (BMI > 25)
	{
		cout << "This person is overweight." << endl;
	}
	else
	{
		cout << "Kisi insaan ka weight or height btao...!";
	}
	return 0;
}
