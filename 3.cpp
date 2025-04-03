#include <iostream>
using namespace std;
// sum of 2 num:
int minofTwo(int a, int b)
{
    if (a > b)
    {
        return b;
    }
    else
    {
        return a;
    }
}

int main()
{
    cout << minofTwo(5, 3);
}