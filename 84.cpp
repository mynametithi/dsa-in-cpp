// vector:
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vec;
    cout << "size=" << vec.size() << endl;
    vec.push_back(30);
    vec.push_back(32);
    vec.push_back(34);
    vec.push_back(36);
    cout << "size=" << vec.size() << endl;

    vec.pop_back();
    cout << "size=" << vec.size() << endl;
    for (int val : vec)
    {
        cout << val << endl;
    }
    cout << vec.back() << endl;
    cout << vec.front() << endl;
}