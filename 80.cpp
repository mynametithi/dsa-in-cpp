// Array:
// Wap to calculate sum & product of all numbers in array:
#include <iostream>
using namespace std;
int findSum(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}
long long findProduct(int arr[], int n)
{
    int product = 1;
    for (int i = 1; i < n; i++)
    {
        product *= arr[i];
    }
    return product;
}
int main()
{
    int n;
    cout << "Enter size of array:";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int sum = findSum(arr, n);
    long long product = findProduct(arr, n);
    cout << "Sum of array elements:" << sum << endl;
    cout << "Product of array elements:" << product << endl;
    return 0;
}