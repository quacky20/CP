#include <bits/stdc++.h>

using namespace std;

string patterns[6] = {"RGB", "RBG", "GBR", "GRB", "BRG", "BGR"};

int solve(string &wall, int n){
    int minChanges = INT_MAX;

    for (int i = 0 ; i<6 ; i++){
        int changes = 0;
        for (int j = 0 ; j<n ; j++){
            if (wall[j]!=patterns[i][j%3]) changes++;
        }
        minChanges = min(minChanges, changes);
    }

    return minChanges;
}

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        cout << solve(s, n) << endl;
    }
}