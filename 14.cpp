// Calculate nCr binomial coefficient for n & r:
// nCr=n!/r!*(n-r)!
#include <iostream>
using namespace std;
int factorialN(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int nCr(int n, int r)
{
    int fact_n = factorialN(n);
    int fact_r = factorialN(r);
    int fact_nmr = factorialN(n - r);

    return fact_n / (fact_r * fact_nmr);
}
int main()
{
    int n = 8, r = 2;
    cout << nCr(n, r);
}