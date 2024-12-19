/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include<iomanip>
#include <iostream>
using namespace std;
#include <cmath>
int main()
{
//asks user to enter angle in radians
	cout << "Enter angle in radians to convert find the sin,cos and tan: " <<endl;
	double angle;
	cin >> angle;
//inputs radians into sin,cos,tan
	double sinAngle;
	sinAngle = sin(angle);
	double cosAngle;
	cosAngle = cos(angle);
	double tanAngle;
	tanAngle = tan(angle);
//outputs results rounded 4 decimal places
	cout<<"Sin = "<< fixed << setprecision(4)<<sinAngle<<endl;
	cout <<"Cos = "<<cosAngle<<endl;
	cout << "Tan = "<<tanAngle<<endl;
	return 0;
}