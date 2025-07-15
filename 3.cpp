#include <iostream>
using namespace std;
// sum of 2 num:
int minofTwo(int a, int b) //parameters
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
    cout << minofTwo(5, 3);  //arguments:
}