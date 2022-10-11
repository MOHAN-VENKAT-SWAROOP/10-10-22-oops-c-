#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double number, sqrtResult;	
	cout << "\n Enter any number to find Square root =  ";
	cin >> number;	
	if(number>0)
	{
	sqrtResult = sqrt(number);
	cout << "\nThe Square root of a " << number << " = " << sqrtResult;	
    }
	 else
	 {
	 	cout<< "invalid";
	 }
	 return 0;
}

