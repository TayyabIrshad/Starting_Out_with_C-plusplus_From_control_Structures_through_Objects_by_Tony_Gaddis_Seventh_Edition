/*Math Tutor*/

#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
	unsigned seed = time(0);
	srand(seed);
	int num1 = rand();
	int num2 = rand();
	int sum;
	/*char ch;*/

	cout << "Add these two random numbers: " << endl;
	cout << setw(8) << num1 << endl << "+ ";
	cout << setw(6) << num2 << endl
		<< setw(8) << "------" << endl;

	cout << "Press enter to continue...." << endl;
	cin.get();
	
	/*cin >> ch;
	cout << "You pressed: " << ch << endl;*/
	/*cout << "Press any key to continue......" << endl;*/

	sum = num1 + num2;
	cout << "Sum of above two random numbers is:\n" 
		<< "Solution:\n" << endl
		<< setw(8) << num1 << endl << "+ "
		<< setw(6) << num2 << endl
		<< setw(8) << "------" << endl
		<< setw(8) << sum << endl;
	return 0;
}