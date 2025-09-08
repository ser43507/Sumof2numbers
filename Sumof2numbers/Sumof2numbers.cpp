/*
*File: Sumof2numbers
* Programer: Sarah Roberts
* Date: 9/07/2025
*/
// This program is designed to calculate the sum of the total intergers 50 and 100

#include <iostream>
using namespace std;

int main()
{
	double num1, num2, sum;

	cout << "Please enter your first number: "; 
	cin >> num1; 

	cout << "Please enter your second number: ";
	cin >> num2; 
	
	sum = num1 + num2;

	cout << "The total of " << num1 << " and " << num2 << " is " << sum << "." << endl;

	return 0; 
}


