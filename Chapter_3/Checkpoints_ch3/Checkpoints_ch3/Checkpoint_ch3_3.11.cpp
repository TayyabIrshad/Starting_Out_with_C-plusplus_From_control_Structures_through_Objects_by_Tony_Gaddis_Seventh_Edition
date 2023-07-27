#include<iostream>
using namespace std;

int main()
{
	int a = 5, b = 12;
	double x = 3.4, z = 9.1;
	cout << "A). " << b / a << endl;
	cout << "B). " << x * a << endl;
	cout << "C). " << static_cast<double>( b / a ) << endl;
	cout << "D). " << static_cast<double>(b) / a << endl;
	cout << "E). " << b / static_cast<double>(a) << endl;
	cout << "F). " << static_cast<double>(b) / static_cast<double>(a) << endl;
	cout << "G). " << b / static_cast<int>(x) << endl;
	cout << "H). " << static_cast<int>(x) * static_cast<int>(z) << endl;
	cout << "I). " << static_cast<int>(x * z) << endl;
	cout << "J). " << static_cast<double>(static_cast<int>(x) * static_cast<int>(z)) << endl;
}