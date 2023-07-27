#include<iostream>
#include <string>
using namespace std;

int main()
{
	string str1 = "Hello";
	string str2="World";

	if (str1 > str2)
	{
		cout << "String 1 is alphabetically greatest." << endl;
	}
	else
	{
		cout<< "String 2 is alphabetically greatest." << endl;
	}

	return 0;
}