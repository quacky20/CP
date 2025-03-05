#include <bits/stdc++.h>

using namespace std;



int main(){
    long long n;
    cin >> n;
    long long arr[n];

    long long freq[100001] = {0};

    for (int i = 0; i<n; i++){
        cin >> arr[i];
        freq[arr[i]]++;
    }

    long long dp[100001] = {0};

    dp[1] = freq[1];

    for (int i = 2; i<=1e5; i++){
        dp[i] = max(dp[i-1], dp[i-2] + i*freq[i]);
    }

    cout << dp[100000] << endl;
}