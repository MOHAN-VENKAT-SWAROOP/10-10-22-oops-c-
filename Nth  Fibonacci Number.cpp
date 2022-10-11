#include<iostream>
using namespace std;
int main()
{
	int n,t1=0,t2=1,nextterm=0;
	cout<<"enter the nth term: ";
	cin>>n;
	cout<<"fibonacci series:"<<endl;
	for(int i=1;i<=n;i++)
	{
		if(i==1)
		{
			cout<< t1<<endl;
			continue;
		}
		if(i==2)
		{
			cout<<t2<<endl;
			continue;
	 }
		else
		{	
	    	nextterm=t1+t2;
		    t1=t2;
		    t2=nextterm;
		    cout<<nextterm<<endl;
		    continue;
	   }
	}
}
