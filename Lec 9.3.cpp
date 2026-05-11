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