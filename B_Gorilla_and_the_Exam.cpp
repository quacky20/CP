#include <bits/stdc++.h>

using namespace std;

bool comp(pair<int, int>& a, pair<int, int>& b){
    return a.second<b.second;
}


int main(){
    int t;
    cin >> t;
    while (t--){
        int n, k;
        cin >> n;
        cin >> k;
        int arr[n];
        unordered_map <int,int> freq_map;
        for (int i = 0; i<n; ++i){
            cin >> arr[i];
            freq_map[arr[i]]++;
        }

        vector <pair<int, int>> freq_vector;

        for (auto& pair : freq_map){
            freq_vector.push_back(pair);
        }

        sort(freq_vector.begin(), freq_vector.end(), comp);

        int distinct_rem = freq_vector.size();

        for (auto& pair : freq_vector){
            if (k>=pair.second){
                k -= pair.second;
                distinct_rem--;
            }
            else{
                break;
            }
        }
        if (distinct_rem==0) cout << 1 << endl;
        else cout << distinct_rem << endl;
    }
}