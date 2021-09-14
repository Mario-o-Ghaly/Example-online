#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main() {
	/*Problem 1:
	float salary, raised_salary, new_salary;
	cout << "Enter your salary in EGP: ";
	cin >> salary;
	raised_salary = salary + 0.15 * salary;
	new_salary = raised_salary - 0.02 * raised_salary;
	cout << "Your salary after 15% raise= " << raised_salary << " EGP" << endl;
	cout << "Your salary after 2% tax deduction= " << new_salary << " EGP" << "\n" << endl;
	cout << "Your original salary= " << salary <<" EGP" << endl;
	cout << "Your new salary= " << new_salary <<" EGP" << endl;
	cout << "The difference= " << new_salary - salary << endl;
	cout << "And your new salary in USD= " << new_salary / 15.7 << " USD";*/

	/*Problem 2:
	float x1, x2, y1, y2;
	cout << "x1= ";
	cin >> x1;
	cout << "y1= ";
	cin >> y1;
	cout << "x2= ";
	cin >> x2;
	cout << "y2= ";
	cin >> y2;

	cout << "Slope= " << (y2 - y1) / (x2 - x1) << endl;
	cout << "Average of x-coordinates= " << (x2 + x1) / 2 << endl;
	cout << "Average of y-coordinates= " << (y2 + y1) / 2;*/

	/*Problem 3:
	char x;
	float variable1, variable2;
	cout << "Enter 1 if you need to calculate the area of a circle, or 2 to calculate the area of a triangle: ";
	cin >> x;
	while (x != '1' && x != '2')
	{
		cout << "Please enter 1 or 2: ";
		cin >> x;
	}

	if (x == '1') {
			cout << "Enter the radius: ";
			cin >> variable1;
			cout << "Area of circle= " << 3.14 * variable1 * variable1;
	}
	if (x == '2') {
			cout << "Enter the base: ";
			cin >> variable1;
			cout << "Enter the height: ";
			cin >> variable2;
			cout << "Area of triangle= " << variable1 * variable2 * 1 / 2;
	}*/


	/*Problem 4:
	float a, b, c;
	cout << "aX^2 + bx + c=0\n";
	cout << "a= ";
	cin >> a;
	cout << "b= ";
	cin >> b;
	cout << "c= ";
	cin >> c;
	cout << "R1= " << (-b + sqrt(b * b - 4 * a * c)) / 2 * a << endl;
	cout << "R2= " << (-b - sqrt(b * b - 4 * a * c)) / 2 * a;*/

	return 0;
}
