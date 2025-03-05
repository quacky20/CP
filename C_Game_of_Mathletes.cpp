#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n, k;
        cin >> n >> k;
        vector <int> freq(n+1, 0);

        for (int i = 0; i < n; i++){
            int x;
            cin >> x;
            freq[x]++;
        }

        int score = 0;

        for (int i = 1; i <= n; i++){
            int l = k-i;
            if (l>0 && l<=n && freq[l]>0 && freq[i]>0){
                int pair = min(freq[i], freq[l]);
                if (i==l && freq[i]>=2){
                    pair = pair/2;
                    score += pair;
                    freq[l] -= pair;
                    freq[i] -= pair;
                }
                else if (i!=l){
                    score += pair;
                    freq[l] -= pair;
                    freq[i] -= pair;
                }
            }
        }

        cout << score << endl;
    }
}