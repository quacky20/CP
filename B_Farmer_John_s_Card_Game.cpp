#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n, m;
        cin >> n >> m;
        int arr[n][m];
        for (int i = 0; i<n; i++){
            for (int j = 0; j<m; j++){
                cin >> arr[i][j];
            }
        }
        for (int i = 0; i<n; i++){
            sort(arr[i], arr[i]+m);
        }

        bool invalid = false;
        for (int i = 0; i<n; i++){
            for (int j = 0; j<m-1; j++){
                if ((arr[i][j+1]-arr[i][j])%n!=0){
                    cout << -1 << endl;
                    invalid = true;
                    break;
                }
            }
            if (invalid) break;
        }

        if (invalid) continue;

        int ans[n];

        for (int i = 0; i<n; i++){
                ans[arr[i][0]] = i+1;
        }
        for (int i = 0; i<n; i++){
            cout << ans[i] << " ";
        }
        cout << endl;
    }
}