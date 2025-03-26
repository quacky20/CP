#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n, m, k;
    cin >> n >> m >> k;
    int l = (k+n-1)/n;
    if(m>=(2*l)-1){
        cout << 1 << endl;
        return;
    }
    else if(l>=m){
        cout << m << endl;
    }
    else{
        int gaps = m - l;
        int x = (l+(gaps+1)-1)/(gaps+1);
        cout << x << endl;
        return;
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