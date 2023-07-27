#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main()
{
	/*double radian;*/
	double sine, cosine, tangent;
	double angle;
	/*const double pi = 3.14159;*/

	/*radian=angle pi/180*/

	cout << "Enter an angle in radian: " << endl;
	cin >> angle;

	/*radian = angle * (pi / 180);
	cout << "Angle in radian will be: " << radian << endl;*/

	cout << setprecision(4) << fixed;

	sine = sin(angle);
	cout << "Sine: " << sine << endl;
	cosine = cos(angle);
	cout << "Cosine: " << cosine << endl;
	tangent = tan(angle);
	cout << "Tangent: " << tangent << endl;

	return 0;
}