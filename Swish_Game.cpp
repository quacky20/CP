#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while (t--){
        int m, k;
        cin >> m >> k;
        string s;
        cin >> s;
        int swish = 0;
        for (int  i = 0; i<m; i++){
            if (s[i]=='S') swish++;
        }
        if (swish>=k) cout << m << endl;
        else{
            int swishLeft = k - swish;
            cout << (m+swishLeft-1) << endl;
        }
    }
}
