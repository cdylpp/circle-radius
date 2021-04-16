#include <iostream>
using namespace std;

//This program prompts user to enter circle raduis
//Then the circle area is displayed

int main()
{
	const double PI = 3.14159;
	double radius;
	cout << "Enter radius\n";
	cin >> radius;
	cout << "The area of a circle with radius \n";
	cout << PI * radius * radius;
	return 0;
}