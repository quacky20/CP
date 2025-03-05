#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;  // Number of test cases
    while (t--) {
        int n;
        cin >> n;  // Length of the sequence
        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        bool possible = true;
        for (int i = 1; i < n; i++) {
            if (a[i] < a[i-1]) {
                possible = false;
                break;
            }
            // Ensure that after the operation, the elements are still valid
            a[i] = min(a[i], a[i-1]);
        }

        if (possible) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
