// loop:
#include <iostream>
using namespace std;
int main()
{
    int n;
    int num = 1;
    cout << "Enter your limit:";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << num << " ";
            num = num + 1;
        }
        cout << endl;
    }
}