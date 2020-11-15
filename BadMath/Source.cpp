#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;

	cout << "This program calculates the average of three numbers." << endl;
	cout << "First number: "; 
	cin >> num1;
	cout << "Second number: "; 
	cin >> num2;
	cout << "Third number: "; 
	cin >> num2;

	float avg;
	float total;

	total = num1 + num2 + num3;
	avg = total / 3.0;

	cout << setprecision(1) << fixed << "The average is " << avg << endl;

	return 0;
	system("pause");
}