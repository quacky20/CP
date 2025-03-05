#include <bits/stdc++.h>

using namespace std;


int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        for (int i = 1; i<=100; i++){
            for (int j = 1; j<=100; j++){
                for (int a = 1; a<=n; a++){
                    for (int b = 1; b<=n; b++){
                        if ((i%a)!=(j%b)){
                            cout << i << " " << j;
                        }
                    }
                }
            }
        }
        cout << endl;
    }
}