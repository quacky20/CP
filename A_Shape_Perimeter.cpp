#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n, m;
        cin >> n >> m;
        int x1, y1;
        cin >> x1 >> y1;
        int xsum = 0, ysum = 0;
        for (int i = 1; i<n; i++){
            int temp1, temp2;
            cin >> temp1 >> temp2;
            xsum += temp1;
            ysum += temp2;
        }
        int ans = (4*m)+(2*(xsum+ysum));
        cout << ans << endl;
    }
}