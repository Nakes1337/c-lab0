#include <iostream>
#include <math.h>

using namespace std;
int main()
{
	double a, b, c, d, x1, x2;
	cout << "Enter variables a,b,c \n";
	cin >> a;
	cin >> b;
	cin >> c;
	d = b * b - 4 * a * c;
	if (d > 0) {
		x1 = (-b + sqrt(d)) / (2 * a);
		x2 = (-b - sqrt(d)) / (2 * a);
		cout << "x1 is equal to : " << x1 << endl;
		cout << "x2 is equal to : " << x2 << endl;
	}
	else if (d == 0) {
		x1 = -b / (2 * a);
		x2 = x1;
		cout << "x1 is equal to : " << x1 << endl;
		cout << "x2 is equal to : " << x2 << endl;
	}
	else {
		cout << "no solution";
	}