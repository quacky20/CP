#include <bits/stdc++.h>
using namespace std;

void solve(vector<int>& A, int p){
    int n = A.size();
    vector<int> leftDistance(n, INT_MAX);
    vector<int> rightDistance(n, INT_MAX);
    vector<int> result(n,0);

    int leftVol = -1;
    for(int i = 0; i<n; i++){
        if(A[i]==0) leftVol = i;
        if (leftVol!=-1) leftDistance[i] = i - leftVol;
    }

    int rightVol = -1;
    for(int i = n-1; i>=0; i--){
        if(A[i]==0) rightVol = i;
        if (rightVol!=-1) rightDistance[i] = rightVol - i;
    }

    for (int i = 0; i<n; i++){
        if (A[i]>0){
            int minDist = min(leftDistance[i], rightDistance[i]) - 1;
            if (leftDistance[i]==rightDistance[i]) 
            int timeToSubmerge = ceil((double)A[i]/p);
            result[i] = minDist + timeToSubmerge;
        }
    }

    for (int i = 0; i<n; i++){
        cout << leftDistance[i] << " ";
    }
    cout << endl;

    for (int i = 0; i<n; i++){
        cout << rightDistance[i] << " ";
    }
    cout << endl;

    for (int i = 0; i<n; i++){
        cout << result[i] << " ";
    }
    cout << endl;
}

int main() {
	// your code goes here
    int t;
    cin >> t;
    while (t--){
        int N, p;
        cin >> N >> p;
        vector <int> A(N);
        for (int i = 0; i<N; i++){
            cin >> A[i];
        }
        solve(A, p);
    }
}
