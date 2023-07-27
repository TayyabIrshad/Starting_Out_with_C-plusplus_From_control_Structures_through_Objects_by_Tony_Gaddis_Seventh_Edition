#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ifstream inputfile("Numbers.txt");

	if (inputfile)
	{
		int nums;
		while (inputfile >> nums)
			cout << nums << endl;
	}
	else
	{
		cout << "Error! File is not opened!";
	}
	return 0;
}