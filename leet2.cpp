#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a, b, c;
        cin >> a >> b >> c;
        if (a > b) swap(a, b);
        if (b > c) swap(b, c);
        if (a > b) swap(a, b);
        cout << min(c - a, b) << '\n';
    }
    return 0;
}