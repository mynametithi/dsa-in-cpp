// Array:
// linear Search:
// find the index of target value from array:
#include <iostream>
using namespace std;
int linearSearch(int arr[], int sz, int target)
{
    for (int i = 0; i < sz; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {
        1,
        2,
        3,
        4,
        5,
        6,
    };
    int sz = 6;
    int target = 2;
    cout << linearSearch(arr, sz, target) << endl;
    return 0;
}