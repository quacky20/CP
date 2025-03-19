#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i<n ; i++){
        cin >> arr[i];
    }
    int ans = arr[n-1];
    for (int i = n-2; i>=0; i--){
        if (arr[i]>arr[i+1]){
            ans = max(ans+1, arr[i]);
        }
        else{
            ans++;
        }
    }
    cout << ans << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--) solve();
}