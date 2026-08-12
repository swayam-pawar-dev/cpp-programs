//check if string is palindrome using built in string functions
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string str, rev;
    cout << "Enter a string: ";
    cin >> str;
    rev = str;
    reverse(rev.begin(), rev.end());
    if (str == rev)
        cout << "The string is a palindrome.";
    else
        cout << "The string is not a palindrome.";
    return 0;
}