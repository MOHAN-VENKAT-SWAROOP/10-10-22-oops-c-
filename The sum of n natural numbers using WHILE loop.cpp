#include <iostream>
using namespace std;
int main() 
{
    int n, i = 1, sum = 0;
    cout << "Enter a positive integer: ";
    cin >> n;
    while ( i <= n)
	 {
        sum += i;
        ++i;
    }
    cout << "Sum of "<< n <<" natural numbers = " << sum;
    return 0;
}
