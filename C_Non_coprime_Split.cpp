#include <bits/stdc++.h>

using namespace std;

int main(){

    int MAX = 10000000;

    int t;
    cin >> t;

    vector<int> spf(MAX + 1);
    vector<int> isPrime(MAX + 1, 1);

    for (int i = 0; i<=MAX; i++){
        spf[i] = i;
    }

    for (int i = 2; i*i<=MAX; i++){
        if (spf[i]==i){
            for (int j = i*i; j<=MAX; j+=i){
                if (spf[j]==j){
                    spf[j]=i;
                }
            }
        }
    }

    isPrime[0] = 0;
    isPrime[1] = 0;

    for (int i = 2; i*i<=MAX; i++){
        if (isPrime[i]==1){
            for (int j = i*i; j <= MAX; j += i){
                isPrime[j] = 0;
            }
        }
    }

    while (t--){
        int l, r;
        cin >> l >> r;
        if (l==r){
            if(l==1){
                cout << -1 << endl;
            }
            else if (!isPrime[l]){
                cout << (l-spf[l]) << " " << spf[l] << endl;
            }
            else{
                cout << -1 << endl;
            }
            continue;
        }
        else{
            if (l>=4){
                if (isPrime[l]){
                    cout << (l+1-spf[l+1]) << " " << spf[l+1] << endl;
                    continue;
                }
                cout << (l-spf[l]) << " " << spf[l] << endl;
                continue;
            }
            else if (r>=4) {
                if (isPrime[r]){
                    cout << (r-1-spf[r-1]) << " " << spf[r-1] << endl;
                    continue;
                }
                cout << (r-spf[r]) << " " << spf[r] << endl;
                continue;
            }
            else{
                cout << -1 << endl;
            }
        }
    }
}