#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int m = n/2 - 1;
        for (int i = 0; i<m; i++){
            if (i==0 || i==m-1) cout << n << " ";
            else cout << n/2 << " ";
        }
        int t = n - (2*m);
        for (int i = 0; i<t; i++){
            cout << i+1 << " ";
        }
        for (int i = 0; i<m; i++){
            if (i==0 || i==m-1) cout << n/2 << " ";
            else cout << n << " ";
        }
        cout << endl;
    }
}