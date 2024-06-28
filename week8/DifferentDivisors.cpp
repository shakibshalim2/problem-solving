#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ll n;
    cin >> n;
    while (n--) {
        ll number;
        cin >> number;
        vector<ll> primes;

        for (ll i = number + 1;; i++) {
            bool isPrime = true;
            for (ll j = 2; j * j <= i; j++) {
                if (i % j == 0) {
                    isPrime = false;
                    break;
                }
            }
            if (isPrime) {
                primes.push_back(i);
                break;
            }
        }

        for (ll i = primes.back() + number;; i++) {
            bool isPrime = true;
            for (ll j = 2; j * j <= i; j++) {
                if (i % j == 0) {
                    isPrime = false;
                    break;
                }
            }
            if (isPrime) {
                primes.push_back(i);
                break;
            }
        }

        cout << min(primes[0] * primes[1], primes[0] * primes[0] * primes[0]) << endl;
    }
}
