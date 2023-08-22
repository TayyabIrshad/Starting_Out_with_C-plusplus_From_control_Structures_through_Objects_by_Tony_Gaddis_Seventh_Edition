//#include <iostream>
//using namespace std;
//
//int main()
//{
//	const int employees = 6;
//	int hours[employees];
//
//	for (int count = 0; count < employees; count++)
//	{
//		cout << "Enter the hours worked by employee " << count+1 << ": ";
//		cin >> hours[count];
//
//	}
//	cout << "Hours entered are: ";
//	for (int count = 0; count < employees; count++)
//	{
//		cout << "  " << hours[count];
//	}
//	cout << endl;
//
//}

// This program unsafely accesses an area of memory by writing 
// values beyond an array's boundary. 
// WARNING: If you compile and run this program, it could crash. 
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	const int arr_size = 4;
//	int num[arr_size];
//
//	for (int count = 0; count < arr_size; count++)
//	{
//		num[count] = 100;
//		cout << num[count] << endl;
//		
//	}
//	return 0;
//}

#include <iostream>
using namespace std;

//int main()
//{
//	const int MONTHS = 12;
//	int days[MONTHS] = { 31, 28, 31, 30,
//	31, 30, 31, 31,
//	30, 31, 30, 31 };
//	
//		for (int count = 0; count < MONTHS; count++)
//		{
//		cout << "Month " << (count + 1) << " has ";
//		cout << days[count] << " days.\n";
//		}
//	return 0;
//}

int main()
{
	const int size = 5;
	int array[size] = { 10, 20, 30, 40, 50 };

	for (int index = 0; index < size; index++)
	{
		cout << array[index] << endl;
	}
	return 0;
}