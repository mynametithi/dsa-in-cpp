// Find smallest or largest value in array:
// array is linear data structure:

#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int nums[] = {5, 15, 23, 1, -15, -24};
    int size = 6;
    int smallest = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (nums[i] < smallest)
        {
            smallest = nums[i];
        }
        }
    cout << "smallest value=" << smallest << endl;
    return 0;
}