#include <bits/stdc++.h>
using namespace std;
int main(){
    int t, a, b, xk, yk, xq, yq, kfx[8], kfy[8], qfx[8], qfy[8], sol;
    cin >> t;
    while(t--){
        cin >> a >> b;
        cin >> xk >> yk;
        cin >> xq >> yq;
        kfx[0] = xk + a, kfy[0] = yk + b;
        kfx[1] = xk + a, kfy[1] = yk - b;
        kfx[2] = xk - a, kfy[2] = yk + b;
        kfx[3] = xk - a, kfy[3] = yk - b;
        kfx[4] = xk + b, kfy[4] = yk + a;
        kfx[5] = xk + b, kfy[5] = yk - a;
        kfx[6] = xk - b, kfy[6] = yk + a;
        kfx[7] = xk - b, kfy[7] = yk - a;

        qfx[0] = xq + a, qfy[0] = yq + b;
        qfx[1] = xq + a, qfy[1] = yq - b;
        qfx[2] = xq - a, qfy[2] = yq + b;
        qfx[3] = xq - a, qfy[3] = yq - b;
        qfx[4] = xq + b, qfy[4] = yq + a;
        qfx[5] = xq + b, qfy[5] = yq - a;
        qfx[6] = xq - b, qfy[6] = yq + a;
        qfx[7] = xq - b, qfy[7] = yq - a;

        sol = 0;
        for(int i = 0; i < 8; i++){
            for(int j = 0; j < 8; j++){
                if(kfx[i] == qfx[j] && kfy[i] == qfy[j]){
                    sol++;
                }
            }  
        }
        if(a == b){
            sol /= 4;
        }
        cout << sol << endl;
    }
    return 0;
}
/*
a+,b+
a+,b-
a-,b+
a-,b-
b+,a+
b+,a-
b-,a+
b-,a-
*/