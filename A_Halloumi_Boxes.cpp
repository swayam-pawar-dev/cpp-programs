#include <bits/stdc++.h>
using namespace std;
int main(){
    int t, n, k;
    cin >> t;
    while(t--){
        cin >> n >> k;
        int a[n];
        bool samearray = true;
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i < n-1; i++){
            for(int j = 0; j < n-i-1; j++){
                if(a[j] > a[j+1]){
                    swap(a[j], a[j+1]);
                    samearray = false;
                }
            }
        }
        if(samearray){
            cout << "YES" << endl;
        }
        else{
            if(k == 1){
                cout << "NO" << endl;
            }
            else{
                cout << "YES" << endl;
            }
        }
    }
    return 0;
}