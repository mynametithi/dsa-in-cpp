#include <iostream>
using namespace std;
int main()
{
    int marks;
    cout << "Enter your marks:";
    cin >> marks;
    if (marks >= 90)
    {
        cout << "Grade A+";
    }
    else if (marks >= 85)
    {
        cout << "Grade A";
    }

    else if (marks >= 70)
    {
        cout << "Grade B";
    }
    else if (marks >= 50)
    {
        cout << "Grade C";
    }
    else if (marks >= 40)
    {
        cout << "Grade D";
    }
    else
    {
        cout << "Grade F";
    }

    return 0;
}
