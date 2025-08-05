// looping condition:
#include <iostream>
using namespace std;
int main()
{
    int n;
    char ch = 'A';
    cout << "Enter your limit:";
    cin >> n;
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < i + 1; j++)
        {
            cout << (ch + 1) << " ";
                }
        cout << endl;
    }
}
