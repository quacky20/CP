#include <bits/stdc++.h>

using namespace std;


void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i<n; i++) cin >> a[i];
    sort(a.begin(), a.end());
    int count;
    int ans = 0;
    for (int i = 0, count = 1; i < n; i++, count++){
        if (count>=a[i]){
            ans++;
            count = 0;
        }
    }
    cout << ans << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--) solve();
}