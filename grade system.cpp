#include<iostream>
using namespace std;
int main()
{
	int m,s,h,e,t,a;
	cout<<"MATHS MARKS:";
	cin>>m;
	cout<<"SCIENCE MARKS:";
	cin>>s;
	cout<<"HISTORY MARKS:";
	cin>>h;
	cout<<"ENGLISH MARKS:";
	cin>>e;
	{
		t=m+s+h+e;
		cout<<"Total:"<<t<<endl;
		a=t/4;
		cout<<"Aggregate:"<<a<<endl;
	}
	if(a>75)
	{
		cout<<"The Grade is Distinction";
	}
	else if(a>=60 || a<75)
	{
		cout<<"The Grade is First Division";
	}
	else if(a>=50 || a<60)
	{
		cout<<"The Grade is Second Division";
	}
	else if(a>=40 || a<50)
	{
		cout<<"The Grade is Third Division";
	}
	else
	{
		cout<<"The Grade is Fail";
	}
	return 0;
}
