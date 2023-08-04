#include<iostream>
using namespace std;

//void timesTen(int num)
//{
//	num = num * 10;
//	cout << num << endl;;
//}
//
//int main()
//{
//	int value = 4;
//	timesTen(value);
//}

//void getNumber(int& refvar)
//{
//	/*int getNumber;*/
//	cout << "Enter a number" << endl;
//	cin >> refvar;
//}
//
//int main()
//{
//	int num;
//	getNumber(num);
//	while (num < 1 || num>100)
//	{
//		getNumber(num);
//	}
//		
//}

double average(int value1, int value2, int value3)
{
	double average;
	average = (value1 + value2 + value3) / 3;
	cout << average;
	return average;

}

int main()
{
	int arg1 = 2, arg2 = 2, arg3 = 2;

	average(arg1, arg2, arg3);

}