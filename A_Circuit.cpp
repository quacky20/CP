#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int ones = 0;
        int zeros = 0;
        for (int i = 0; i<(2*n); i++){
            int a;
            cin >> a;
            if (a==0) zeros++;
            else ones++;
        }
        if (zeros%2==0 && ones%2==0) cout << 0 << " ";
        else cout << 1 << " ";

        if (zeros >= ones) cout << ones << endl;
        else cout << zeros << endl;
    }
}