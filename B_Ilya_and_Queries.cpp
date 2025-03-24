#include <bits/stdc++.h>

using namespace std;

void solve(){
    string chars;
    cin >> chars;
    int n = chars.length();
    vector<int> a(n,0);
    a[0] = 0;
    for (int i = 1; i<n-1; i++){
        if(chars[i]==chars[i-1]) a[i] = a[i-1] + 1;
        else a[i] = a[i-1];
    }
    if(chars[n-1]==chars[n-2]) a[n-1] = a[n-2] + 1;
    else a[n-1] = a[n-2];
    // for (int i = 0; i<n; i++) cout << a[i] << " ";
    cout << endl;
    int q;
    cin >> q;
    while(q--){
        int l, r;
        cin >> l >> r;
        cout << a[r-1] - a[l-1] << endl;
    }
}

int main(){
    solve();
}