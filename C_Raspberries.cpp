#include <bits/stdc++.h>

using namespace std;

int solve()
{
    int n, k;
    cin >> n >> k;
    int odd = 0, even = 0;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] % 2 == 0)
            even++;
    }
    odd = n - even;
    vector<int> dp(n, -1);
    if (arr[0] % k != 0)
        dp[0] = k - arr[0] % k;
    else
    {
        return 0;
    }
    for (int i = 1; i < n; i++)
    {
        if (arr[i] % k != 0)
            dp[i] = min(k - arr[i] % k, dp[i - 1]);
        else
        {
            return 0;
        }
    }
    int y = INT_MAX;
    if (k != 4)
        return dp[n - 1];
    else
    {
        if (even >= 2)
            y = 0;
        else if (even == 1 && odd > 0)
            y = 1;
        else if (even == 0 && odd >= 2)
            y = 2;

        // cout << dp[n - 1] << " " << min(dp[n - 1], y) << endl;
        return min(dp[n - 1], y);
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cout << solve() << endl;
    }
    return 0;
}