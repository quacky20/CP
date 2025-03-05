#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> b(n);
        vector<int> diff(n);
        for (int i = 0; i<n; i++) cin >> a[i];
        for (int i = 0; i<n; i++) cin >> b[i];
        for (int i = 0; i<n; i++){
            if (i!=n-1){
                diff[i] = a[i] - b[i+1];
            }
            else {
                diff[i] = a[i];
            }
        }
        sort(diff.begin(), diff.end()-1);
        reverse(diff.begin(), diff.end()-1);
        int res = 0;
        for (int i = 0; i<n; i++){
            if (i==n-1){
                res += diff[i];
            }
            else if (diff[i]>0){
                res += diff[i];
            }
        }
        cout << res << endl;
    }
}