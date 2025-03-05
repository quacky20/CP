#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int a1, a2, a4, a5;
        cin >> a1 >> a2 >> a4 >> a5;
        int ans1 = 0, ans2 = 0;
        int x1 = a1 + a2;
        ans1 = 1;
        if (a2+x1==a4) ans1++;
        if (x1+a4==a5) ans1++;
        int x2 = a4 - a2;
        ans2 = 1;
        if (x2+a4==a5) ans2++;
        cout << max(ans1, ans2) << endl;
    }
}