#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
        cin >> n;
        vector <int> a(n);
        vector <int> b(n);
        vector <int> c(n);
        for (int i = 0; i<n; i++) cin >> a[i];
        for (int i = 0; i<n; i++) cin >> b[i];

        int posDiff = -99;

        for (int i = 0; i<n; i++){
            c[i] = b[i] - a[i];
            if (c[i] > 0){
                if (posDiff!=-99){
                    cout << "NO" << endl;
                    return;
                }
                else posDiff = c[i];                
            }
        }
        
        if (posDiff==-99){
            cout << "YES" << endl;
            return;
        }

        for (int i = 0; i<n; i++){
            if (abs(c[i]) < posDiff){
                    cout << "NO" << endl;
                    return;
            }
        }

        cout << "YES" << endl;
        return;
}

int main(){
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}