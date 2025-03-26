#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin >> n;
    if (n%2==0){
        cout << -1 <<  endl;
        return;
    }
    else{
        for (int i = 0; i<((n+1)/2); i++){
            cout << (i*2)+1 << " ";
        }
        for (int i = 1; i<=((n-1)/2); i++){
            cout << (i*2) << " ";
        }
        cout << endl;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}