#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n, x;
    cin >> n >> x;
    vector<int> arr(n);
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    reverse(arr.begin(), arr.end());
    int size = 0;
    int teams = 0;
    int minnum = INT_MAX;
    for (int i = 0; i<n; i++){
        size++;
        minnum = min(arr[i], minnum);
        if (minnum*size>=x){
            teams++;
            size = 0;
            minnum = INT_MAX;
        }
    }
    cout << teams << endl;
    return;
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