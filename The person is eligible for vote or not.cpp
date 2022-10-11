#include <iostream>
using namespace std;
int main()
{
	int age ;
	cout<<"Enter the age of the person: ";
	cin>> age;
	int temp=18-age;
	if (age>=18)
	{
		cout<<"You are eligible for voting.";
	}
	else
	{
		cout<<"You are eligible for voting after "<<temp<<" years";
	}
	return 0;
}
