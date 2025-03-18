#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i<n; i++){
            cin >> arr[i];
        }
        int x;
        int y;
        int len = 0;
        int start = 1;
        int end;
        for (int i = 0; i<n; i++){
            x = i;
            y = 0;
            for (int j = i; j<n; j++){
                if (arr[j]<arr[i]){
                    x=j;
                    y++;
                }
            }
            if (y > len){
                start = i+1; 
                end = x+1;
                len = y;
            }
        }
        cout << start << " " << end << endl;
    }
}