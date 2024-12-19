3. (3 pts) Write a complete program in a cpp file that asks the user for an angle, entered in
radians. The program should then display the sine, cosine, and tangent of the angle with
relevant messages to the user. (Use the sin, cos, and tan library functions to
determine these values.) The output should be displayed in fixed-point notation, rounded
to four decimal places of precision

4. (3 pts) The complete program below calculates the average of three numbers. It asks for
three numbers, then displays the average of the numbers. However, the program has some
syntax and semantic errors. The programmer wants your help to debug this program.
Debug the program and save the working program in a cpp file. Remember to comment
on places where bugs are found and fixed.
#include <iostream>
int main()
{
double num1, num2, num3, total, avg;
std::cout << "Enter the first number: ";
std::cin << num1;
std::cout << "Enter the second number: ";
std::cin >> num2;
std::cout << "Enter the third number: ";
std::cin >> num3;
total = num1 + num2 * num3;
avg = total % 3;
std::cout << "The average of the three numbers is " << total;
return 0;
}
DAI CSCI 14, Fall 2024 Page 2
