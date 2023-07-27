// This program uses nested if/else statements to assign a 
// letter grade (A, B, C, D, or F) to a numeric test score. 


//#include <iostream>
//#include<string>
//using namespace std;

/*With nested if $ else statements!*/

//int main()
//{
//	int A_Grade = 90;
//	int B_Grade = 80;
//	int C_Grade = 70;
//	int D_Grade = 60;
//
//	int test_score;
//	cout << "Enter a test score: " << endl;
//	cin >> test_score;
//
//	if (test_score >= A_Grade)
//	{
//		cout << "Your grade is A" << endl;
//	}
//	else
//	{
//		if (test_score >= B_Grade)
//		{
//			cout << "Your grade is B" << endl;
//		}
//		else
//		{
//			if (test_score >= C_Grade)
//			{
//				cout << "Your grade is C" << endl;
//			}
//			else {
//				if (test_score >= D_Grade)
//				{
//					cout << "Your grade is D" << endl;
//				}
//				else {
//					cout << "You Failed";
//				}
//			}
//		}
//	}
//}


/*With if/else if Statements!*/


//int main()
//{
//	int A_Grade = 90;
//	int B_Grade = 80;
//	int C_Grade = 70;
//	int D_Grade = 60;
//
//	int test_score;
//	cout << "Enter a test score: " << endl;
//	cin >> test_score;
//
//	if (test_score >= A_Grade)
//		cout << "Your grade is A" << endl;
//	else if (test_score >= B_Grade)
//		cout << "Your grade is B" << endl;
//	else if (test_score >= C_Grade)
//		cout << "Your grade is C" << endl;
//	else if (test_score >= D_Grade)
//		cout << "Your grade is D" << endl;
//	else if (test_score >= 0)
//		cout << "You Failed" << endl;
//	else
//		cout << "INVALID INPUT!" << endl;
//}


/*With if statement only!*/


//int main()
//{
//	int A_Grade = 90;
//	int B_Grade = 80;
//	int C_Grade = 70;
//	int D_Grade = 60;
//
//	int test_score;
//	cout << "Enter a test score: " << endl;
//	cin >> test_score;
//
//	if (test_score >= A_Grade)
//	{
//		cout << "Your grade is A" << endl;
//	}
//	if (test_score >= B_Grade)
//	{
//		cout << "Your grade is B" << endl;
//	}
//	if (test_score >= C_Grade)
//	{
//		cout << "Your grade is C" << endl;
//	}
//	if (test_score >= D_Grade)
//	{
//		cout << "Your grade is D" << endl;
//	}
//	else {
//		cout << "You Failed";
//		}
//}


//int main()
//{
//	int funny = 7, serious = 15;
//	funny = serious % 2;
//	if (funny != 1)
//	{
//		funny = 0;
//		serious = 0;
//	}
//	else if (funny == 2)
//	{
//		funny = 10;
//		serious = 10;
//	}
//	else
//	{
//		funny = 1;
//		serious = 1;
//	}
//	cout << funny << "   " << serious << endl;
//}


//int main() {
//	int numBooks, numCoupons;
//	cout << "How many books are being purchased? ";
//	cin >> numBooks;
//	if (numBooks < 1)
//		numCoupons = 0;
//	else if (numBooks < 3)
//		numCoupons = 1;
//	else if (numBooks < 5)
//		numCoupons = 2;
//	else
//		numCoupons = 3;
//	cout << "The number of coupons to give is "
//		<< numCoupons << endl;
//}

/* Logical Operators
The && Operator
*/

//int main()
//{
//	char employed;
//	char recent_grad;
//	cout << "Enter 'Y' for yes and 'N' for no:" << endl;
//	cout << "Are you employed? ";
//	cin >> employed;
//	
//	cout << "Have you graduated from the college in the past two years? " << endl;
//	cin >> recent_grad;
//
//	if (employed == 'Y' && recent_grad == 'Y')
//	{
//		cout << "You qualify for the special interest rate! " << endl;
//	}
//	else
//	{
//		cout << "You don't qualify!";
//	}
//
//	return 0;
//}


//int main()
//{
//
//	int a, b;
//	cin >> a >> b;
//	if (a >= -1 || a <= b)
//		cout << "True";
//	else
//		cout << "false";
//}



//Start Time 4:15.

//int main()
//{
//	int A_Grade = 90;
//	int B_Grade = 80;
//	int C_Grade = 70;
//	int D_Grade = 60;
//	int min_score = 0;
//	int max_score = 100;
//
//	int test_score;
//	cout << "Enter a test score: " << endl;
//	cin >> test_score;
//	if (test_score >= min_score && test_score <= max_score)
//	{
//		if (test_score >= A_Grade)
//			cout << "Your grade is A" << endl;
//		else if (test_score >= B_Grade)
//			cout << "Your grade is B" << endl;
//		else if (test_score >= C_Grade)
//			cout << "Your grade is C" << endl;
//		else if (test_score >= D_Grade)
//			cout << "Your grade is D" << endl;
//		else
//			cout << "Your grade is F You Failed" << endl;
//	}
//	else
//	{
//		cout << "INVALID INPUT!" << endl;
//	}
//	return 0;
//}
//Ending Time 4:23

//int main()
//{
//	string a;
//	string b;
//
//	cout << "Enter the value of a: ";
//	getline(cin, a);
//	cout << "a is " << a << endl;
//
//	cout << "Enter the value of b: ";
//	getline(cin, b);
//	cout << "b is " << b << endl;
//
//	if (a > b)
//		cout << "a is greater than b\n" << endl;
//	else if (b > a)
//		cout << "b is greater than a\n" << endl;
//	else
//		cout << "They are equal\n" << endl;
//	return 0;
//}

//int main()
//{
//	int num;
//
//	cin >> num;
//	if ((num % 2) == 0)
//		cout << "Even\n";
//	else
//		cout << "Odd\n";
//
//	return 0;
//}


//int main()
//{
//	const int UPPER = 8, LOWER = 2;
//	int num1, num2, num3 = 12, num4 = 3;
//	num1 = num3 < num4 ? UPPER : LOWER;
//	num2 = num4 > UPPER ? num3 : LOWER;
//	cout << num1 << " " << num2 << endl;
//	return 0;
//}

//int main()
//{
//	char choice;
//	cout << "Enter A, B or C: ";
//	cin >> choice;
//
//	switch (choice)
//	{
//	case 'a':
//	case 'A': cout << "You entered A" << endl;
//		break;
//	case 'b':
//	case 'B': cout << "You entered B" << endl;
//		break;
//	case 'c':
//	case 'C': cout << "You entered C" << endl;
//		break;
//	default: cout << "You did not enter A, B or C";
//		break;
//	}
//
//	
//
//	if (choice == 'A')
//	{
//		cout << "You entered A: " << endl;
//	}
//	else if(choice=='B')
//	{
//		cout << "You entered B: " << endl;
//	}
//	else if (choice == 'C')
//	{
//		cout << "You entered C: " << endl;
//	}
//	else
//		cout << "You did not enter A, B or C";
//
//	return 0;
//}

//int main()
//{
//	int modelNum;
//	cout << "Our TVs come in three models:\n";
//	cout << "The 100, 200, and 300. Which do you want?";
//	cin >> modelNum;
//
//	cout << "That model has the following features:\n";
//	switch (modelNum)
//	{
//	case 300: cout << "\tpicture-in-a0picture\n";
//	case 200: cout << "\tstereo sound\n";
//	case 100: cout << "\tRemote Control\n";
//		break;
//	default:cout << "You can only choose 100, 200, 300";
//		break;
//	}
//}

//Starting time 1:07

//int main()
//{
//	int choice;
//	int months;
//	double charges;
//
//	const double adult = 40.0,
//		 child = 20.0,
//		 senior = 30.0;
//
//	const int adult_choice = 1,
//		child_choice = 2,
//		senior_choice = 3,
//		quit_choice = 4;
//
//	cout<<"\t\tHealth Club Membership Menu\n\n"
//		<< "1. Standard Adult Membership\n"
//		<< "2. Child Membership\n"
//		<< "3. Senior Citizen Membership\n"
//		<< "4. Quit the Program\n\n"
//		<< "Enter your choice: ";
//
//	cin >> choice;
//
//	switch (choice)
//	{
//	case adult_choice:
//		cout << "For how many months? ";
//		cin >> months;
//		charges = months * adult;
//		cout << "The total charges for this pakage will be $" << charges << endl;
//		break;
//
//	case child_choice:
//		cout << "For how many months? ";
//		cin >> months;
//		charges = months * child;
//		cout << "The total charges for this pakage will be $" << charges << endl;
//		break;
//
//	case senior_choice:
//		cout << "For how many months? ";
//		cin >> months;
//		charges = months * senior;
//		cout << "The total charges for this pakage will be $" << charges << endl;
//		break;
//
//	case quit_choice:
//		cout << "Quiting program " << endl;
//		break;
//	default:
//		cout << "Not the valid input.\n Run the program again:";
//		break;
//	}
//}
//1:22 Ending Time


//Checkpoint 4.30
// Starting Time 1:29pm

//int main()
//{
//	int userNum;
//	cout << "Enter one of the numbers 1, 2, or 3: ";
//	cin >> userNum;
//	switch (userNum)
//	{
//	case 1:cout << "one" << endl;
//		break;
//	case 2:cout << "two" << endl;
//		break;
//	case 3:cout << "three" << endl;
//		break;
//	default:cout << "Invalid Input" << endl;
//		break;
//	}
//	return 0;
//}
//Ending Time 1:32pm
#include <iostream> 
using namespace std;
int main()
{
	int testScore;
	cout << "Enter your test score and I will tell you\n";
	cout << "the letter grade you earned: ";
	cin >> testScore;
	switch (testScore)
	{
	case 60:
		cout << "Your grade is F.\n";
		break;
	case 70:
		cout << "Your grade is D.\n";
		break;
	case 80:
		cout << "Your grade is C.\n";
		break;
	case 90:
		cout << "Your grade is B.\n";
		break;
	case 100:
		cout << "Your grade is A.\n";
		break;
	default:
		cout << "That score isn't valid\n";

	}
	return 0;
}