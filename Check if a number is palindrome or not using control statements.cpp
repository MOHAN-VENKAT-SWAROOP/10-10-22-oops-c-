#include<iostream>
using namespace std;
int main()
{
int num, rev_num = 0, temp;
cout << "Enter input:"; 
cin >> num;
temp = num;
while (num != 0)
{
rev_num = rev_num * 10;
rev_num= rev_num + num% 10;
num = num / 10;
}
if(temp == rev_num)
{
cout << " it is a palindrome"; 
}
else
{
cout << "it is not a palindrome";
}
return 0;
}
