#include<iostream>
using namespace std;
int main()
{
	int p,t,si_1,si_2,y=1,n=2,s;
	y='yes';
	n='no';
	cout<<"Principal Amount:";
	cin>>p;
	cout<<"Time Period:";
	cin>>t;
	cout<<"Is the Customer a Senior Citizen:";
	cin>>s;
	if(s==1)
	{
		si_1=(p*t*12)/100;
		cout<<"Simple Interest:"<<si_1;
	}
	else
	{
		si_2=(p*t*10)/100;
		cout<<"Simple Interest:"<<si_2;
    }
    return 0;
}
