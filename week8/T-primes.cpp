#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int MAX = 1000000;
vector<bool> is_prime(MAX + 1, true);
vector<ll> primes;

void sieve() {
    is_prime[0] = is_prime[1] = false;
    for (ll i = 2; i * i <= MAX; i++) {
        if (is_prime[i]) {
            for (ll j = i * i; j <= MAX; j += i) {
                is_prime[j] = false;
            }
        }
    }
    for (ll i = 2; i <= MAX; i++) {
        if (is_prime[i]) {
            primes.push_back(i);
        }
    }
}

bool is_T_prime(ll x) {
    if (x < 4) return false;
    ll root = sqrt(x);
    return (root * root == x && is_prime[root]);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    sieve();

    int n;
    cin >> n;
    while (n--) {
        ll x;
        cin >> x;
        if (is_T_prime(x)) {
            cout << "YES\n";
        } 
        else {
            cout << "NO\n";
        }
    }
}
