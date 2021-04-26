#include <iostream>
using namespace std;

//This program prompts user to enter circle raduis
//Then the circle area is displayed
//C = 2*PI*r
const double PI = 3.14159;
double getCircumference(double radius);
double getArea(double radius);

int main()
{
	double radius;
	cout << "Enter radius\n";
	cin >> radius;
	cout << "The area of the circle is " << getArea(radius) << " and its circumference is " << getCircumference(radius) << endl;
	return 0;
}

double getCircumference(double radius) {
	return (2 * PI * radius);
}
double getArea(double radius) {
	return (PI * radius * radius);
}