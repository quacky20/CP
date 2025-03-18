#include <bits/stdc++.h>

using namespace std;

string num;
int n;

bool is_1100(int i){
    if (i<0) return false;
    if (i>=n-3) return false;
    if (num[i]=='1' && num[i+1]=='1' && num[i+2]=='0' && num[i+3]=='0') return true;
    return false;
}

void solve(){
    cin >> num;
    n = num.length();
    int count = 0;
    for (int i = 0; i<n; i++){
        if (is_1100(i)) count++;
    }
    int q;
    cin >> q;
    while (q--){
        int i;
        char v;
        cin >> i >> v;
        i--;
        if (num[i]!=v){
            bool before = is_1100(i-3) || is_1100(i-2) || is_1100(i-1) || is_1100(i);
            num[i] = v;
            bool after = is_1100(i-3) || is_1100(i-2) || is_1100(i-1) || is_1100(i);
            count += after-before;
        }

        if (count>0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return;
}

int main(){
    int t;
    cin >> t;
    while(t--) solve();
}