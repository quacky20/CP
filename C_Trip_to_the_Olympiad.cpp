#include <bits/stdc++.h>
using namespace std;

int findSetBit(int x){
    if (x==0){
        return 0;
    }

    int msb = 0;

    x = x/2;

    while(x>0){
        x = x/2;
        msb++;
    }

    return 1 << msb;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int l, r;
        cin >> l >> r;

        int diff = r - l;

        cout << ((2*findSetBit(diff))-1)*2 << endl;
    }
}