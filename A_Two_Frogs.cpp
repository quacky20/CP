#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n, a, b;
        cin >> n >> a >> b;
        if ((b-a-1)%2!=0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}