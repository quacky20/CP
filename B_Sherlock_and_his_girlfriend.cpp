#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin >> n;
    int isPrime[n+2];
    
    for (int i = 0; i<n+2; i++){
        isPrime[i]=1;
    }

    isPrime[0] = 0;
    isPrime[1] = 0;

    for (int i = 2; i*i<=n+2; i++){
        if (isPrime[i]==1){
            for (int j = i*i; j <= n+2; j += i){
                isPrime[j] = 0;
            }
        }
    }

    if (n>=3) cout << 2 << endl;
    else cout << 1 << endl;

    for (int i = 2; i<n+2; i++){
        if (isPrime[i]==1) cout << 1 << " ";
        else cout << 2 << " ";
    }
    cout << endl;
}