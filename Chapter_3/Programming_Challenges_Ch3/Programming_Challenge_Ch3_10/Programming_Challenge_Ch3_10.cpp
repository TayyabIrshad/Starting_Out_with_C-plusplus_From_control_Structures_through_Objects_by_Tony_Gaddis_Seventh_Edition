/*Celsius to Fahrenheit*/

#include<iostream>
using namespace std;

int main()
{
	double celsius_temp;
	double fahrenheit_temp;

	cout << "Enter the temperature in Celsius: ";
	cin >> celsius_temp;

	fahrenheit_temp = static_cast <double>(9) / 5 * celsius_temp + 32;
	cout << "Fahrenheit temperature is: " << fahrenheit_temp;

	return 0;
}