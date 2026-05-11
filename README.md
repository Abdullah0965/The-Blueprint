# The-Blueprint

The Scenario:
You are writing software for a real estate agency in Johar Town. They need a quick tool to calculate the total square footage of rectangular plots of land.

The Goal:
Instead of doing the math inside main(), you are going to build a custom function called calculateArea to do the heavy lifting.

Solution:

#include <iostream>
using namespace std;

double calArea(double l, double w);

int main()
{
	double l;
	cout << "Enter the Length of Rectangle: ";
	cin >> l;
	cout << endl;
	double w;
	cout << "Enter the Width of Rectangle: ";
	cin >> w;
	cout << endl;
	double area;
	area = calArea(l, w);
	cout << "Area of rectangle is: " << area;
	return 0;
}
double calArea(double l, double w)
{
	return (l * w);
}
