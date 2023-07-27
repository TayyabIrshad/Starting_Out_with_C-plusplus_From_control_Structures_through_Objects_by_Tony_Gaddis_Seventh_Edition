//Minimum/Mximum Using Conditional operator!


#include <iostream>
using namespace std;

int main()
{
	int num1, num2;
	cout << "Enter two numbers: " << endl;
	cin >> num1 >> num2;

	cout << "Num1 is "<< (num1 > num2 ? "Larger" : "Smaller");

	return 0;
}