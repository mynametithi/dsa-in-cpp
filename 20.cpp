// Figure out how to find if a number is power of 2 without any loop.
#include <iostream>
using namespace std;
bool isPowerOfTwo(int n)
{
    if (n <= 0)
    {
        return false;
    }
    return (n & (n - 1)) == 0;
}

int main()
{
    cout << "Is 8 a power of 2? " << (isPowerOfTwo(8) ? "Yes" : "No") << std::endl;
    cout << "Is 10 a power of 2? " << (isPowerOfTwo(10) ? "Yes" : "No") << std::endl;
    return 0;
}