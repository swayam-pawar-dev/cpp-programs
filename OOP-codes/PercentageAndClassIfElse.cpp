//percentage and class using if else
#include <iostream>
using namespace std;
int main()
{
    float per;
    cout << "Enter percentage: ";
    cin >> per;
    if (per >= 90 && per <= 100)
        cout << "Distinction";
    else if (per >= 70 && per < 90)
        cout << "First Class";
    else if (per >= 50 && per < 70)
        cout << "Second Class";
    else if (per >= 40 && per < 50)
        cout << "Pass";
    else if (per < 40)
        cout << "Fail";
    else
        cout << "Invalid percentage";
    return 0;
}