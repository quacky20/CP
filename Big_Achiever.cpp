#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i<n; i++){
            cin >> arr[i];
        }
        for (int i = 0; i<n; i++){
            int chk = 0;
            if (i==0){
                cout << 1 << " ";
                continue;
            }
            else{
                for (int j = 0; j<i; j++){
                    if (arr[j]>arr[i]){
                        cout << 0 << " ";
                        chk = 1;
                        break;
                    }
                }
                if (chk!=1) cout << 1 << " ";
            }
        }
        cout << endl;
    }
}
