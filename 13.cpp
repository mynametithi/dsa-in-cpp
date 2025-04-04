// calculate sum of digits of a number:
#include <iostream>
using namespace std;
int sumOfDigits(int num)
{
    int digitSum = 0;
    while (num > 0)
    {
        int lastdig = num % 10;
        num /= 10;
        digitSum += lastdig;
    }
    return digitSum;
}
int main()
{
    cout << "sum=" << sumOfDigits(2356);
    return 0;
}