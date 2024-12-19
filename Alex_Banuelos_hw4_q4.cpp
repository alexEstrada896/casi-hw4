/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cmath>
int main()
{
	double num1, num2, num3, total, avg;
	std::cout << "Enter the first number: ";
// changed the << to >>  after the cin to input the first number
	std::cin >> num1;
	std::cout << "Enter the second number: ";
	std::cin >> num2;
	std::cout << "Enter the third number: ";
	std::cin >> num3;
//changed multiplication to addition to add the three numbers instead of multiplying to get total
	total = num1 + num2 + num3;
//changed modueles  to division in order to get the average of the three numbers
	avg = total / 3;
//changed the output to avg instead of total
	std::cout << "The average of the three numbers is " << avg;
	return 0;
}