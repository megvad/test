
/// 
/// Recurssion
///
#include "stdafx.h"
#include <iostream>


// Test program for recusssion example 
double factorial(int i);
using namespace std;

int main()
{
	int i;
	std::cout << "Enter a number between 1 and 100: ";
	cin >> i;
	std::cout << "Factorial of "<< i << " is: " << factorial(i) << std::endl;
	system("pause");
}

double factorial(int i) 
{
	if (i <= 1) return 1;
	return  i * factorial(i - 1);

}