#include <iostream>
#include<bits/basic_string.h>
using namespace std;
int validates(string username)
{
    int special = 0, l = username.length();
    if (l == 0 || l > 30)
        return 0;
    for (int i = 0; i < l; i++)
    {
        char s = username.at(i);
        if (s == ' ')
            return 0;
        if (isalnum(s))
            continue;
        else
        {
            if (s == '_' || s == '.')
            {
                special++;
                if (special > 1)
                    return 0;
            }
            else
                return 0;
        }
    }
    return 1;
}
int main()
{
    string username;
	cout<< "Enter the Username:";
	cin>>username;
	if (validates())
        cout << "Valid Username";
    else
        cout <<"Invalid Username";
    return 0;
}
