
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        if (a == 0 && b == 0) {
            cout << 0 << '\n';
        }
        else if (a == 0) {
            cout << (b == 1 ? 1 : -1) << '\n';
        }
        else if (b == 0) {
            cout << a + 1 << '\n';
        }
        else {
            cout << max(a, b) << '\n';
        }
    }
    return 0;
}
