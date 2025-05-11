#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int nums[] = {34, 35, -56, -89, 4};
    int size = 5;
    int smallest = INT_MAX;
    int largest = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (nums[i] < smallest) // smallest=min(nums[i],smallest)
        {
            smallest = nums[i];
        }
        if (nums[i] > largest) // largest=max(nums[i],largest)
        {
            largest = nums[i];
        }
    }
    cout << "smallest:" << smallest << endl;
    cout << "largest:" << largest << endl;
    return 0;
}