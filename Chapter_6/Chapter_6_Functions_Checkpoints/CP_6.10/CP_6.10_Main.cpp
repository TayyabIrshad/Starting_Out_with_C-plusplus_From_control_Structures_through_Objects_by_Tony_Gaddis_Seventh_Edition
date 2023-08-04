//#include <iostream> 
//#include <iomanip>
//using namespace std;


//void showDollars(double); // Function prototype 
//
//int main()
//{
//	double payRate, hoursWorked, wages;
//	cout << "How many hours have you worked? ";
//		cin >> hoursWorked;
//	cout << "What is your hourly pay rate? ";
//	cin >> payRate;
//	wages = hoursWorked * payRate;
//	cout << fixed << showpoint << setprecision(2);
//	showDollars(wages);
//	return 0;
//}
//
//void showDollars(double wages)
//{
//	cout << "Your wages are: $" << wages << endl;
//}


//void divide(double, double);
//int main()
//{
//	double num1, num2;
//	cout << "Enter two numbers: " << endl;
//	cin >> num1 >> num2;
//	divide(num1, num2);
//	return 0;
//}
//
//void divide(double agr1, double agr2)
//{
//	if (agr2 == 0)
//	{
//		cout << "Sorry, I cannot divide by zero. \n";
//		return;
//	}
//	cout << "The quotient is " << (agr1 / agr2) << endl;
//}


#include <iostream> 
using namespace std;

void anotherFunction(); // Function prototype 
int BIRDS = 500; // Global variable 
int main()
{
cout << "In main, num is " << BIRDS << endl;
anotherFunction();
cout << "Back in main, num is " << BIRDS << endl;
return 0;

}

//***************************************************** 
// Definition of anotherFunction * 
// This function changes the value of the * 
// global variable num. * 
//***************************************************** 

void anotherFunction(){
	 cout << "In anotherFunction, num is " << BIRDS << endl;
	 BIRDS= 10000;
	cout << "But, it is now changed to " << BIRDS << endl;
	 }
