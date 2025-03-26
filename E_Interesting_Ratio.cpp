#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 1e7 + 1;
vector<bool> is_prime(MAX_N, true);
vector<int> primes;

void sieve() {
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i < MAX_N; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j < MAX_N; j += i) {
                is_prime[j] = false;
            }
        }
    }
    for (int i = 2; i < MAX_N; i++) {
        if (is_prime[i]) primes.push_back(i);
    }
}

void solve() {
    int n;
    cin >> n;
    int count = 0;

    for (int prime : primes) {
        if (prime > n) break;
        count += (n / prime);
    }

    cout << count << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    sieve();

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
