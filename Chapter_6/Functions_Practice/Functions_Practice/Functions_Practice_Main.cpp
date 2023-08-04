#include<iostream>
using namespace std;

int swap(int&, int&);

int main()
{
	int a = 5; 
	int b = 10;
	cout << "Before calling swap function: " << endl
		<< a << endl << b << endl;
	swap(a, b);
	cout << a <<endl<<b << endl;
}

//this function will swap the two values! and the original arguments will be updated after function call in main due to 
//call by reference method.

int swap(int &a, int& b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
	cout << a << endl << b << endl;
	return a, b;
}