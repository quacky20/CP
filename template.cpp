#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define ull unsigned long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const ll MOD = 1e9 + 7;
const ll INF = 1e18;
const ld EPS = 1e-9;

// GCD & LCM
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }

// Binary Exponentiation
ll binpow(ll a, ll b, ll m = MOD) {
    ll res = 1;
    while (b) {
        if (b & 1) res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}

// Modular Inverse (for prime MOD)
ll modinv(ll a, ll m = MOD) { return binpow(a, m - 2, m); }

// Sieve of Eratosthenes
vector<ll> sieve(ll n) {
    vector<ll> primes, is_prime(n + 1, 1);
    for (ll i = 2; i <= n; i++) {
        if (is_prime[i]) {
            primes.pb(i);
            for (ll j = i * i; j <= n; j += i) is_prime[j] = 0;
        }
    }
    return primes;
}

// Loop templates
#define FOR(i, n) for (ll i = 0; i < (n); i++)
#define FORR(i, n) for (ll i = (n) - 1; i >= 0; i--)

void solve() {
    
}

int main() {
    fastio;
    ll t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}