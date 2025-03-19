#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n, l, r;
    cin >> n >> l >> r;
    vector <int> arr(n);
    for (int i = 0; i<n; i++) cin >> arr[i];
    int start = 0;
    int points = 0;
    int ans = 0;
    for (int i = 0; i<n; i++){
        points += arr[i];
        while(points>r){
            points -= arr[start];
            start++;
        }
        if(points>=l){
            ans++;
            points = 0;
            start = i+1;
        }
    }
    cout << ans << endl;
}

int main(){
    int t;
    cin >> t;
    while (t--) solve();
}