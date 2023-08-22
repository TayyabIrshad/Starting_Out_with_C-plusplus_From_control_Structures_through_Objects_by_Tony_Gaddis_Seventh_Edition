#include<iostream>
using namespace std;

int main()
{
	int names[20];

	cout << "Eneter the numbers: ";
	for (int i = 0; i < 20; i++)
	{
		cin >> names[i];
	}
	cout << "Numbers are: " << endl;
	for (int i = 0; i < 20; i++)
	{
		cout << names[i] << endl;
	}
}