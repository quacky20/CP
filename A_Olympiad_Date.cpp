#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(5, 0);
        int tot = 0;
        vector<int> nums(n);
        for (int i = 0; i<n; i++){
            cin >> nums[i];
        }
        for (int i = 0; i<n; i++){
            int x;
            x = nums[i];
            if(x==0){
                arr[0]++;
                if(arr[0]<=3) tot++;
            }
            else if(x==1){
                arr[1]++;
                if(arr[1]<=1) tot++;
            }
            else if(x==2){
                arr[2]++;
                if(arr[2]<=2) tot++;
            }
            else if(x==3){
                arr[3]++;
                if(arr[3]<=1) tot++;
            }
            else if(x==5){
                arr[4]++;
                if(arr[4]<=1) tot++;
            }
            if(tot==8){
                cout << i+1 << endl;
                break;
            }
        }
        if (tot<8) cout << 0 << endl;
    }
}