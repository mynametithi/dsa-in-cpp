// pointer:
// Use dereference Operator:
#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    int *ptr = &a;
    int **patptr = &ptr;

    cout << *(&a) << endl;
    cout << *(ptr) << endl;
    cout << **(patptr) << endl;
    return 0;
}