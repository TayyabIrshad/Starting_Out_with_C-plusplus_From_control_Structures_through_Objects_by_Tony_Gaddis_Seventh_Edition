// Checkpoint 5.2


#include<iostream>
#include<fstream>
#include<string>
using namespace std;

//int main()
//{
//	ofstream outputFile;
//	/*ifstream inputFile;*/
//	int value1, value2;
//	int sum;
//	outputFile.open("demofile.txt");
//	cout << "Writing the data in a file: " << endl;
//	cout << "Enter the values! " << endl;
//	cin >> value1 >> value2;
//
//	outputFile << value1 << endl << value2;
//
//	outputFile.close();
//
//	ifstream inputFile("demofile.txt");
//
//	inputFile >> value1;
//	inputFile >> value2;
//	cout << value1 << endl << value2;
//
//	inputFile.close();
//
//	sum = value1 + value2;
//	cout << "Their sum is: " << sum << endl;
//
//	return 0;
//}

//int main()
//{
	/*fstream outputFile("countfile.txt");
	for (int count = 1; count <= 10; count++)
	{
		outputFile << count << endl;
	}
	outputFile.close();*/
	
//	string data;
//	string filename;
//
//	cout << "Enter the file name you want to work with: ";
//	cin >> filename;
//
//	ifstream inputFile(filename);
//	
//	if (inputFile)
//	{
//		while (inputFile>>data)
//		{
//			cout << data << endl;
//		}
//	}
//	else
//	{
//		cout << "Error opening a file!";
//	}
//	return 0;
//}

int main()
{
	int product = 0;
	int num;

	while (product < 100)
	{
		cout << "Enter a number: ";
		cin >> num;
		product = num * 10;
		cout << "Product is: " << product;
	}
	return 0;
}

























//int main()
//{
//	int num;
//	cout << "Enter a number in range 10 to 25: ";
//	cin >> num;
//
//	while (num < 10 || num > 25)
//	{
//		cout << "Error! Number is not in range 10 trough 25!\n"
//			<< " Enter the number in desired range!" << endl;
//		cin >> num;
//	}
//	cout << num << " This number is in range 10 through 25!" << endl;
//	return 0;
//}

// Checkpoint 5.3
//int main()
//{
//	char ch;
//	cout << "Enter a character: Y, y, N OR n: ";
//	cin >> ch;
//
//	while (ch != 'Y' && ch != 'y' && ch != 'N' && ch != 'n')
//	{
//		cout << "Charracter is not desired value! " << endl;
//		cin >> ch;
//	}
//	cout << "Your input is correct!" << endl;
//	return 0;
//}

// Checkpoint 5.4
//int main()
//{
//	string str;
//	cout << "Enter the input in yes or no: ";
//	cin >> str;
//	while (str != "Yes" && str != "No")
//	{
//		cout << "Error!" << endl;
//		cin >> str;
//	}
//	cout << str;
//	return 0;
//}

//Checkpoint 5.5 (A)
//int main()
//{
//	int count = 10;
//	while (count <= 10)
//	{
//		cout << "Hello World\n";
//		count++;
//	} 
//}

//Checkpoint 5.5 (B)

//int main()
//{
//	int v = 10;
//	do
//		cout << v << endl;
//	while (v < 5);
//
//}

//Checkpoint 5.5 (C)

//int main()
//{
//	int count = 0, number = 0, limit = 4;
//	do
//	{
//		number += 2;
//		count++;
//	} while (count < limit);
//	cout << number << " " << count << endl;
//}

//int main()
//{
//	int num;
//	int sum = 0;
//
//	for (int count = 1; count <= 7; count ++)
//	{
//		cout << "Enter a number: " << endl;
//		cin >> num;
//		sum = sum + num;
//	}
//	cout << sum << endl;
	/*for (; ;)
		cout << "Hello World";*/
//}

//int main()
//{
//	int count = 1;
//	int num;
//	int sum = 0;
//	cout << "Enter the number " << count << ": ";
//	cin >> num;
//
//	while (num >= 0)
//	{
//		sum += num;
//		count++;
//		cout << "Enter the number " << count<<": ";
//		cin >> num;
//	}
//	cout << "The sum is: " << sum << endl;
//}


//int main()
//{
//	int numStudents;
//	int numTests;
//
//	double total;
//	double average;
//
//	cout << "For how many students do you have test scores?  ";
//	cin >> numStudents;
//
//	cout << "How many test are there?  ";
//	cin >> numTests;
//
//	for (int student = 1; student <= numStudents; student++)
//	{
//		total = 0;
//		for (int test = 1; test <= numTests; test++)
//		{
//			double score;
//			cout << "Enter the scores for test " << test
//				<< " for student " << student << endl;
//			cin >> score;
//			total += score;
//		}
//		average = total / numTests;
//		cout << "The average score for student " << student
//			<< " is " << average << endl;
//	}
//	return 0;
//}






















