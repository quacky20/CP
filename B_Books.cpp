#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, t;
    cin >> n >> t;
    vector <int> nums(n);
    
    for (int i = 0; i<n; i++) cin >> nums[i];

    int sum = 0, ans = 0;

    int l = 0;
    for (int r = 0; r<n; r++){
        sum = sum + nums[r];
        while (sum > t){
            sum -= nums[l];
            l++;
        }
        ans = max(ans, r - l + 1);
    }
    cout << ans << endl;
}