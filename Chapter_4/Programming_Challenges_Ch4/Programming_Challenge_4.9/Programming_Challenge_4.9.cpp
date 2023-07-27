//Math Tutor

#include<iostream>
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
	int answer;

	cout << "\t" << num1 << endl;
	cout << "\t" << num2 << endl;

	cout << "What will be the sum of these two random numbers? " << endl;
	cin >> answer;

	sum = num1 + num2;

	if (answer == sum)
	{
		cout << "Congratulations! " << endl;
	}
	else
	{
		cout << "Correct Answer is: " << sum << endl;
	}

	return 0;
}