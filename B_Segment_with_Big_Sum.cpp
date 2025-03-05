#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, s;
    cin >> n >> s;
    vector <int> nums(n);
    
    for (int i = 0; i<n; i++) cin >> nums[i];

    int sum = 0, ans = 1e5+1;

    int l = 0;  
    for (int r = 0; r<n; r++){
        sum = sum + nums[r];
        while (sum - nums[l] >= s){
            sum -= nums[l];
            l++;
        }
        if (sum >= s) ans = min(ans, r - l + 1);
    }
    if (ans == 1e5+1) cout << -1;
    else cout << ans;
}