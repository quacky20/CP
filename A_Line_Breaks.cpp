#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n, m;
        cin >> n >> m;
        
        int lens[n];
        for(int i = 0; i<n; i++){
            string temp;
            cin >> temp;
            lens[i] = temp.length();
        }

        int i = 0;
        int x = m;

        while (i<n && x >= lens[i]){
            x -= lens[i];
            i++;
        }
        cout << i << endl;
    }
}