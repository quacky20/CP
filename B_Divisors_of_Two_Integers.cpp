#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin >> n;
    int divisors[n];
    for (int i = 0; i<n; i++){
        cin >> divisors[i];
    }
    sort(divisors, divisors+n);
    reverse(divisors, divisors+n);
    cout << divisors[0] << " ";
    int num1 = divisors[0];
    for (int i = 1; i<n; i++){
        if (divisors[i]==num1){
            cout << divisors[i];
            break;
        }
        if (divisors[i]==1){
            cout << divisors[i];
            break;
        }
        if (num1%divisors[i]==0){
            if(divisors[i]==divisors[i+1]){
                cout << divisors[i];
                break;
            }
        }
        else{
            cout << divisors[i];
            break;
        }
    }
}
