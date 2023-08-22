#include <iostream>
using namespace std;

int main()
{
	int numberArray1[25] = { 2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2 };
	int numberArray2[25] = { 2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2 };
	int total = 0; // Accumulator 
	int count; // Loop counter 
	// Calculate and display the total of the first array. 
	for (count = 0; count < 24; count++)
		total += numberArray1[count];
	cout << "The total for numberArray1 is " << total << endl;
	// Calculate and display the total of the second array. 
	for (count = 0; count < 24; count++)
		total += numberArray2[count];
	cout << "The total for numberArray2 is " << total << endl;
}