#include<iostream>
using namespace std;

int main()
{
	double a = 28, b = 32, c = 37, d = 24, e = 33;
	double sum;
	double total_values = 5;
	double average;

	sum = a + b + c + d + e;
	average = sum / total_values;

	cout << "Average is: " << average << endl;
}