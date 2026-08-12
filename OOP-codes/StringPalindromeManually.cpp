// check if string is palindrome without predefined function
#include <iostream>
using namespace std;
int main()
{
    char str[100];
    int i, length = 0;
    bool palindrome = true;
    cout << "Enter a string: ";
    cin >> str;
    while (str[length] != '\0')
    {
        length++;
    }
    for (i = 0; i < length / 2; i++)
    {
        if (str[i] != str[length - i - 1])
        {
            palindrome = false;
            break;
        }
    }
    if (palindrome)
        cout << "The string is a palindrome.";
    else
        cout << "The string is not a palindrome.";
    return 0;
}