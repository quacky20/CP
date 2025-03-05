#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        string arr[n];
        int sol[n];
        for (int i = 0; i<n; i++){
            cin >> arr[i];
        }
        for (int i = 0; i<n; i++){
            int ans = 0;
            for (int j = 0; j<n; j++){
                if(i<j && arr[i][j]=='1'){
                    ans++;
                }
                if(i>j && arr[i][j]=='0'){
                    ans++;
                }
            }
            sol[ans] = i+1;
        }
        reverse(sol,sol+n);
        for (int i = 0; i<n; i++){
            cout << sol[i] << " ";
        }
        cout << endl;
    }
}