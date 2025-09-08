// Array:
// Wap to swap the max & min number of an array:
#include <iostream>
using namespace std;

void swapMaxMin(int arr[], int n)
{
    int maxIndex = 0, minIndex = 0;

    // Find index of max and min
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[maxIndex])
        {
            maxIndex = i;
        }
        if (arr[i] < arr[minIndex])
        {
            minIndex = i;
        }
    }

    // Swap max and min elements
    int temp = arr[maxIndex];
    arr[maxIndex] = arr[minIndex];
    arr[minIndex] = temp;
}

int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements of array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    swapMaxMin(arr, n);

    cout << "Array after swapping max and min: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
