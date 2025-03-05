#include <bits/stdc++.h>

using namespace std;


int main(){
    int t;
    cin >> t;
    while (t--){
        int n, k;
        cin >> n;
        cin >> k;
        vector <int> nums(n);
        vector <int> wins(n,1);
        for (int i = 0; i<n; i++){
            cin >> nums[i];
        }
        for (int i = 0; i<n; i++){
            for (int j = 0; j<n; j++){
                if (i!=j){
                    if ((abs(nums[i]-nums[j]))%k==0){
                        wins[i] = 0;
                        break;
                    }
                }
            }
            // if (wins[i]==1) break;
        }
        int chk = 0;
        for (int i = 0; i<n; i++){
            if (wins[i]==1){
                cout << "YES" << endl;
                cout << i+1 << endl;
                chk = 1;
                break;
            }
        }

        if (chk==0) cout << "NO" << endl;
    }
}