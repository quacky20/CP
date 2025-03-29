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
    int n, k;
    string s;
    cin >> n >> k;
    cin >> s;
    vector<char> alps(k);
    vector<int> check(26,0);

    FOR(i,k){
        cin >> alps[i];
        check[alps[i]-97] = 1;
    }

    vector<int> arr(n,0);
    vector<int> dp(n+1);

    FOR(i,n){
        if(check[s[i]-97]==1) arr[i] = 1;
    }

    // FOR(i, n) cout << arr[i] << " ";

    // cout << endl;

    int ans = 0;

    dp[0] = 0;
    for(int i = 0; i<n; i++){
        if (arr[i]==0) dp[i+1] = 0;
        else dp[i+1] = dp[i] + 1;
        ans += dp[i+1];
    }

    // FOR(i, n+1) cout << dp[i] << " ";

    // cout << endl;

    cout << ans << endl;
}

int main() {
    fastio;
    ll t = 1;
    // cin >> t;
    while (t--) solve();
    return 0;
}