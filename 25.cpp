#include <iostream>
using namespace std;
int main()
{
    int size = 5;
    int marks[size];
    for (int i = 0; i < size; i++)
    {
        cin >> marks[i];
    }
    // loops: 0 to size-1
    for (int i = 0; i < size; i++)
    {
        cout << "The number of array:" << marks[i] << endl;
    }
    return 0;
}