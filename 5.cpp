#include <iostream>
using namespace std;
int main()
{
    int n = 4;
    for (int i = 0; i < 4; i++)
    {
        char ch = 'A';
        for (int j = 0; j < 4; j++)
        {
            cout << ch;
            ch = ch + 1;
        }
        cout << endl;
    }

    return 0;
}