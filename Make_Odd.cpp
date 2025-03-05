#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        string a, b;
        cin >> a;
        cin >> b;
        int bothOne = 0;
        int diff = 0;
        for (int i = 0; i<n; i++){
            if (a[i]==b[i] && a[i] == '1') bothOne++;
            if (a[i]!=b[i]) diff++; 
        }
        
        if (bothOne%2!=0) cout << "YES" << endl;
        else if (bothOne%2==0 && diff>=1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
