#include <bits/stdc++.h>

using namespace std;

bool comp(pair<int,int> a, pair<int,int>b){
    return (a.first>b.first);
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<pair<int,int>> a(n);
        vector<pair<int,int>> b(n);
        vector<pair<int,int>> c(n);

        for(int i = 0; i < n; i++){
            cin >> a[i].first;
            a[i].second = i;
        }
        for(int i = 0; i < n; i++){
            cin >> b[i].first;
            b[i].second = i;
        }
        for(int i = 0; i < n; i++){
            cin >> c[i].first;
            c[i].second = i;
        }
        sort(a.begin(),a.end(), comp);
        sort(b.begin(),b.end(), comp);
        sort(c.begin(),c.end(), comp);

        int ans = 0;
        for (int i = 0; i<3; i++){
            for (int j = 0; j<3; j++){
                for (int k = 0; k<3; k++){
                    if((a[i].second!=b[j].second)&&(a[i].second!=c[k].second)&&(b[j].second!=c[k].second)){
                        ans = max(ans, a[i].first+b[j].first+c[k].first);
                    }
                }
            }
        }
        cout << ans << endl;
    }
}