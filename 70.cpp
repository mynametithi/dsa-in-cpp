// function:
// calculate sum of digit of a number:
#include <iostream>
using namespace std;
int sumOfDigit(int num)
{
    int digitSum = 0;
    while (num > 0)
    {
        int lastDig = num % 10;
        num /= 10;
        digitSum += lastDig;
    }
    return digitSum;
}
int main()
{
    cout << "sum=" << sumOfDigit(2356) << endl;
    return 0;
}
