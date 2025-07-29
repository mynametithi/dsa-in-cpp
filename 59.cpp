// loop: error code
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "limit of your number:";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        char ch = 'A';
        for (int j = 1; j <= n; j++)
        {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
}