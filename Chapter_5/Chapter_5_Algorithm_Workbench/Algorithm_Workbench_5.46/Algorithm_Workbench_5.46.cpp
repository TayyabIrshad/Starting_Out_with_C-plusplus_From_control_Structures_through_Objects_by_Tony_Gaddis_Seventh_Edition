#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ifstream inputfile("Numbers.txt");

		int nums;
		int sum = 0;
		while (inputfile >> nums)
		{
				sum += nums;
		}
			cout << sum <<endl;
	return 0;
}