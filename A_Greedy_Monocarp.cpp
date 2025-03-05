#include <bits/stdc++.h>

using namespace std;


int main(){
    int t;
    cin >> t;
    while (t--){
        int n, k;
        cin >> n;
        cin >> k;
        vector <int> chest(n);
        for (int i = 0; i<n; i++){
            cin >> chest[i];
        }
        sort(chest.begin(),chest.end());
        reverse(chest.begin(), chest.end());

        for (int i = 0; i<n; i++){
            k = k - chest[i];
            if (k<0){
                k = k + chest[i];
                break;
            }
            else if (k==0){
                break;
            }
        }
        cout << k << endl;
    }
}