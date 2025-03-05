#include <bits/stdc++.h>

using namespace std;

void func(int nums[], int l, int r, vector<int> depth){
    if (r-l==1){
        depth[l]++;
        return;
    }
    int m = nums[l];
    depth[split]++;
    func(nums, l, split, depth);
    func(nums, split, r, depth);
    return;
}

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int nums[n];
        for (int i = 0; i<n; i++){
            cin >> nums[i];
        }
        vector <int> depth(n, -1);
        func(nums, 0, n, depth);
        for (int i = 0; i<n; i++){
            cout << depth[i] << " ";
        }
        cout << endl;
    }
}