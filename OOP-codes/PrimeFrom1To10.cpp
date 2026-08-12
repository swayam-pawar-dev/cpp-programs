//prime numbers from 1 to 10
#include <iostream>
using namespace std;
int main()
{
    int i, j;
    bool prime;
    cout << "Prime numbers between 1 and 10 are: ";
    for (i = 2; i <= 10; i++)
    {
        prime = true;
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                prime = false;
                break;
            }
        }
        if (prime)
            cout << i << " ";
    }
    return 0;
}