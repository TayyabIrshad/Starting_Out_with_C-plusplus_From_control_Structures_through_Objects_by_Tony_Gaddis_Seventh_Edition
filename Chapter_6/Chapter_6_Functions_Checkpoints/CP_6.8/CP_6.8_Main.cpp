#include <iostream> 
using namespace std;
void showDouble(int); // Function prototype 
void showDouble1(int);
int main()
{
	int num;
	for (num = 0; num < 10; num++)
	{
		showDouble(num);
	}
	showDouble1(num);
	return 0;
}
// Definition of function showDouble. 
void showDouble(int value)
{
	cout << value << "\t" << (value * 2) << endl;
}
void showDouble1(int value1)
{
	cout << value1 << "\t" << (value1 * 3) << endl;
}