// function:
// 1 to n number prime number check:
#include <iostream>
#include <cmath>
using namespace std;
bool isPrime(int n)
{
    if (n <= 1)
    {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % 2 == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    cout << "enter your limit:";
    cin >> n;
    cout << "Prime number from 1 to n:";
    for (int i = 2; i <= n; i++)
    {
        if (isPrime(i))
        {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}
