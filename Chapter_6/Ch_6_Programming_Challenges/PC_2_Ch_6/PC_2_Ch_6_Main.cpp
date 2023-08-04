//Rectangle Area-Complete the Program


#include<iostream>
using namespace std;

double getlength();
double getwidth();
double getArea(double, double);
void displayData(double, double, double);

int main()
{
	double length_value, width_value;
	double rectangle_area;
	
	length_value = getlength();
	width_value = getwidth();
	rectangle_area = getArea(length_value , width_value);
	displayData(length_value, width_value, rectangle_area);

	return 0;
}

double getlength()
{
	double length;
	cout << "Enter the length of a rectangle: ";
	cin >> length;
	return length;
}
double getwidth()
{
	double width;
	cout << "Enter the width of a rectangle: ";
	cin >> width;
	return width;
}
double getArea(double length, double width)
{
	return length * width;
}
void displayData(double value1, double value2, double value3)
{
	cout << "\n\tThe length of rectangle is: " << value1 << endl
		<< "\tThe width of rectangle is: " << value2 << endl
		<< "\tThe Area of rectangle is: " << value3 << endl;
}

