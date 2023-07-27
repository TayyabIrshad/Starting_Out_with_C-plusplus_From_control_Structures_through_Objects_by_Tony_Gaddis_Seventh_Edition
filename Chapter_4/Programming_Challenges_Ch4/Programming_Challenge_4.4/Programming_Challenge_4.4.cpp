//Areas of Rectangles
//2:56

#include<iostream>
using namespace std;

int main()
{
	double length1, width1, rectangle1,length2, width2, rectangle2;
	cout << "Rectangle 1 length: " << endl;
	cin >> length1;
	cout << "Rectangle 1 width: " << endl;
	cin >> width1;
	rectangle1 = length1 * width1;

	cout << "Rectangle 2 length: " << endl;
	cin >> length2;
	cout << "Rectangle 2 width: " << endl;
	cin >> width2;
	rectangle2 = length2 * width2;

	if (rectangle1 == rectangle2)
		cout << "Area of both rectangles is same. " << endl;
	else if (rectangle1 > rectangle2)
		cout << "Area of rectangle 1 is greater. " << endl;
	else if (rectangle2 > rectangle1)
		cout << "Area of rectangle 2 is greater. " << endl;
	else
		cout << "Invalid input";

	return 0;
}

//3:18