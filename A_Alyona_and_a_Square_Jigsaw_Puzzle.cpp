#include <bits/stdc++.h>

using namespace std;

bool sq(int x){
    if (ceil(sqrt(x))==floor(sqrt(x))){
        if ((static_cast<int>(sqrt(x)))%2!=0){
            return true;
        }
        else return false;
    }
    else return false;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int nums[n];

        for (int i = 0; i<n; i++){
            cin >> nums[i];
        }

        int sum = 0;
        int count = 0;
        for (int i = 0; i<n; i++){
            sum += nums[i];
            if (sq(sum)){
                count++;
            }
        }
        cout << count << endl;
    }
}