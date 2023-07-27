#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	/*char letter;
	cout << "Enter a character: " << endl;
	cin >> letter;
	cout << static_cast<int>(letter);
	return 0;
	*/
	//int unus, duo, tres;
	//unus = duo = tres = 5;
	//unus += 4;
	//duo *= 2;
	//tres -= 4;
	//unus /= 3;
	//duo += tres;
	//cout << unus << endl;
	//cout << duo << endl;
	//cout << tres << endl;

	double day1, day2, day3, total;
	cout << "Day1 Sales: ";
	cin >> day1;
	cout << "";

	cout << setprecision(5);

	cout << "Day2 Sales: ";
	cin >> day2;
	cout << "Day3 Sales: ";
	cin >> day3;

	total = day1 + day2 + day3;

	cout << "\nSales Figures\n";
	cout << "_____________\n";
	
	cout << "Day 1:";
	cout << "Total: " << setw(8) << total << endl;
}