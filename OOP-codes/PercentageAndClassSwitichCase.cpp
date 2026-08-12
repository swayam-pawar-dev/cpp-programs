//PercentageAndClassSwitichCase
#include <iostream>
using namespace std;

int main()
{
    float per;
    int choice;

    cout << "Enter percentage: ";
    cin >> per;

    if (per >= 90 && per <= 100)
        choice = 1;
    else if (per >= 70 && per < 90)
        choice = 2;
    else if (per >= 50 && per < 70)
        choice = 3;
    else if (per >= 40 && per < 50)
        choice = 4;
    else if (per < 40)
        choice = 5;
    else
        choice = 6;
    switch (choice)
    {
        case 1:
            cout << "Distinction";
            break;
        case 2:
            cout << "First Class";
            break;
        case 3:
            cout << "Second Class";
            break;
        case 4:
            cout << "Pass";
            break;
        case 5:
            cout << "Fail";
            break;
        case 6:
            cout << "Invalid percentage";
            break;
    }
    return 0;
}