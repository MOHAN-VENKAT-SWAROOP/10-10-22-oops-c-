#include <iostream>
using namespace std;
int main() 
{
    int n, i = 1, sum = 0;
    cout << "Enter a positive integer: ";
    cin >> n;
   do
	 {
        sum += i;
        ++i;
    } while ( i <= n);
    cout << "Sum of "<< n <<" natural numbers =     " << sum;
    return 0;
}
