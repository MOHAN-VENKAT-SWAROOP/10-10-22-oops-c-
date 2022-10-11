#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double number, cbrtResult;	
	cout << "\n Enter any number to find cube root =  ";
	cin >> number;	
	if(number>0)
	{
	cbrtResult = cbrt(number);
	cout << "\nThe cube root of a " << number << " = " << cbrtResult;
    }
	else
	 {
	 	cout<< "invalid";
	 }	
 	return 0;
}

