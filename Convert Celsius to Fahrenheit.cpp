#include<iostream>
using namespace std;
int main()
{
	float f,c,fa,cl;
	cout<<"celsius=";
	cin>>c;
	cout<<"fahreneit=";
	cin>>f;
	fa=c*(9/5)+32;
	cl=((f-32)*5)/9;
	cout<<"\ncelsius "<<c<< " in fahrenheit is "<<fa;
	cout<<"\nfahrenheit "<<f<< " in celsius is "<<cl;
	return 0;
}
