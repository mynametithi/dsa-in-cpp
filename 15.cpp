// WAF to check if a number is prime or not:
#include <iostream>
using namespace std;

void prime(int n)
{
    int count = 0;
    for (int i = 1; i <= n; i++) // start from 1 to avoid division by 0
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
    {
        cout << "Prime number";
    }
    else
    {
        cout << "Non-Prime number";
    }
}

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    prime(n);
}
