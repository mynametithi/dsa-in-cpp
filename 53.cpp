// sum of odd number:
#include <iostream>
using namespace std;
int main()
{
    int i, sum = 0, n;
    cout << "Enter your limit:";
    cin >> n;
    for (i = 1; i <= n; i = i + 2)
    {
        cout << i << endl;
        }
    sum = sum + i;
    cout << endl;
    return 0;
}