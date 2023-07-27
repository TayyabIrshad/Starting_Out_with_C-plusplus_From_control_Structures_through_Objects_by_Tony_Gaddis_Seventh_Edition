#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ofstream outfile("Numbers.txt");
	for (int num = 1; num <= 100; num++)
	{
		outfile << num << endl;
		cout << num <<endl;
	}
	outfile.close();
}