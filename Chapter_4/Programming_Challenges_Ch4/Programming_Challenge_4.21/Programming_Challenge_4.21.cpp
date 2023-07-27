// Geometry Calculator

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int circle = 1,
		rectangle = 2,
		triangle = 3,
		quit = 4;
	int choice;

	cout << "1. Calculate the Area of Circle"
		<< "2. Calculate the Area of Rectangle"
		<< "3. Calculate the Area of Triangle"
		<< "4. Quit" << endl;
	cout << "Enter your choice (1 - 4)" << endl;
	cin >> choice;


	if (choice == 1)
	{
		float area_of_circle;
		float radius_of_circle,
			pi = 3.14159;
		cout << "What is the radius of circle ?" << endl;
		cout << "Radius of circle: ";
		cin >> radius_of_circle;
		if (radius_of_circle >= 0)
		{
			area_of_circle = pi * (pow(radius_of_circle, 2));
			cout << "Area of Circle is: " << area_of_circle << " square units." << endl;
		}
		else
		{
			cout << "Radius of circle cannot be a negative value!" << endl;
		}
	}
	else if (choice == 2)
	{
		float area_of_rectangle;
		float length_of_rectangle,
			width_of_rectangle;
		cout << "What is the length and width of the rectangle?" << endl;
		cout << "Length: ";
		cin >> length_of_rectangle;
		cout << "Width: ";
		cin >> width_of_rectangle;
		if (length_of_rectangle >= 0 && width_of_rectangle >= 0)
		{
			area_of_rectangle = length_of_rectangle * width_of_rectangle;
			cout << "Area of Rectangle is: " << area_of_rectangle << " square uits." << endl;
		}
		else
		{
			cout << "Length or width of a rectangle cannot be a negative value!" << endl;
		}
	}
	else if (choice == 3)
	{
		float area_of_triangle;
		float length_of_triangle_base,
			height_of_triangle;
		cout << "What is the length and height of the triangle's base?" << endl;
		cout << "Length of triangle's base: ";
		cin >> length_of_triangle_base;
		cout << "height of triangle: ";
		cin >> height_of_triangle;
		if (length_of_triangle_base >= 0 && height_of_triangle >= 0)
		{
			area_of_triangle = length_of_triangle_base * height_of_triangle * .5;
			cout << "Area of Triangle is: " << area_of_triangle << " square units." << endl;
		}
		else
		{
			cout << "Length of triangle's base or height of triangle cannot be a negative value!" << endl;
		}
	}
	else if (choice == 4)
	{
		cout << "Quitting Program!" << endl;
	}
	else
	{
		cout << "Invalid Input! This item is not present in the menu..!" << endl;
	}
	return 0;
}