/*Test Average*/

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int test1, test2, test3, test4, test5;
	int no_of_tests = 5;
	double average;

	
	cout << "Enter five test scores: " << endl;
	cin >> test1 >> test2 >> test3 >> test4 >> test5;

	average = static_cast<double>(test1 + test2 + test3 + test4 + test5) / no_of_tests;
	cout << setprecision(1) << fixed;
	cout << "Average test score is: " << average << endl;
	return 0;
}