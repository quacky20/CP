#include <bits/stdc++.h>

using namespace std;


int main(){
    int t;
    cin >> t;
    while (t--){
        int n, k;
        cin >> n >> k;
        vector <int> divisors;
        for (int i = 1; i*i<=n; i++){
            if (n%i==0){
                divisors.push_back(i);
                divisors.push_back(n/i);
            }
        }

        int ans = n;
        for (int i = 0; i<divisors.size(); i++){
            if (divisors[i]<=k){
                ans = min(ans, n/divisors[i]); 
            }
        }
        cout << ans << endl;
    }
}