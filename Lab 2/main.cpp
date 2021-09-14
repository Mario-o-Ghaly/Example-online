#include <iostream>
#include<string>
#include<cmath>
using namespace std;
int main()
{	/*Problem1:
	float grade1, grade2, grade3, grade4,average;
	cout << "Enter your grades: ";
	cin >> grade1 >> grade2 >> grade3 >> grade4;
	average = (grade1 + grade2 + grade3 + grade4) / 4;
	cout << "Your average grade is: " << average;*/

	/*Problem 2:
	int num;
	cout << "Enter the number: ";
	cin >> num;
	if (num%2 == 0)
		cout << "Even";
	else
		cout << "Odd";*/

	/*Problem 3:
	float radius;
	cout << "Enter the radius: ";
	cin >> radius;
	cout << "Area= " << 3.14 * radius * radius;*/

	/*Another way
	float radius, area;
	cout << "Enter the radius: ";
	cin >> radius;
	area = 3.14 * radius * radius;
	cout << "Area= " << area;*/

	/*Problem 4:
	int population;
	float pop1, pop2, pop_increase;
	cout << "Enter the population of the first year: ";
	cin >> population;
	pop1 = population + 0.1 * population;
	pop2 = pop1 + 0.12 * pop1;
	pop_increase = pop2 - pop1;
	cout << "The population increase at the third year= " << pop_increase;*/

	/*Another way
	int population;
	cout << "Enter the population of the first year: ";
	cin >> population;
	cout << "The population increase at the third year= " << population * 0.132;*/

	/*Problem 5:
	int m, n, z;
	float side1, side2, hypotenuse;
	cout << "Enter the two positive numbers: ";
	cin >> m >> n;
	if (m < n) {
		z = m;
		m = n;
		n = z;
	}
	side1 = m * m - n * n;
	side2 = 2 * m * n;
	hypotenuse = sqrt(side1 * side1 + side2 * side2);
	cout << "The Pythagoran triple is " << side1 << ", " << side2 << " and " << hypotenuse;*/
	return 0;
	}
