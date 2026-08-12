//Energy bill
#include <iostream>
using namespace std;
int main()
{
    int start, end, units;
    float bill;
    cout << "Enter starting meter reading: ";
    cin >> start;
    cout << "Enter ending meter reading: ";
    cin >> end;
    units = end - start;
    if (units < 0)
    {
        cout << "Invalid meter readings.";
    }
    else if (units < 100)
    {
        bill = units * 1.50;
        cout << "Units consumed = " << units << endl;
        cout << "Energy bill = Rs. " << bill;
    }
    else if (units <= 200)
    {
        bill = units * 2.50;
        cout << "Units consumed = " << units << endl;
        cout << "Energy bill = Rs. " << bill;
    }
    else if (units <= 500)
    {
        bill = units * 3.50;
        cout << "Units consumed = " << units << endl;
        cout << "Energy bill = Rs. " << bill;
    }
    else
    {
        cout << "Units consumed exceed the given range.";
    }
    return 0;
}