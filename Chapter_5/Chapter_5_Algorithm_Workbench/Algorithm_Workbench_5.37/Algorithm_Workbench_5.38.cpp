//#include<iostream>
//using namespace std;
//
//int main()
//{
//	
//	for (int count = 1; count <= 10; count++)
//	{
//		int total = 0;
//		int num;
//		cout << "Enter a number: ";
//		cin >> num;
//		total += num;
//		cout << total;
//	}
//	
//	return 0;
//}


#include<iostream>
using namespace std;

int main()
{
	int sum = 0;
	for (int i = 1; i <= 10; i++) {
		int num;
		cout << "Enter a number: ";
		cin >> num;
		sum += num;	
	}
	cout << "Sum is: " << sum << endl;
	return 0;
}