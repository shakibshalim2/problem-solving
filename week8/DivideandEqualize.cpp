#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
using namespace std;

void factorize(ll num, map<ll, ll> &factors) {
    while (num % 2 == 0) {
        factors[2]++;
        num /= 2;
    }
    for (ll i = 3; i <= sqrt(num); i += 2) {
        while (num % i == 0) {
            factors[i]++;
            num /= i;
        }
    }
    if (num > 1)
        factors[num]++;
}

int main() {
    ll x;
    cin >> x;
    while (x--) {
        map<ll, ll> factorCounts;
        ll numElements, element;
        bool isPossible = true;

        cin >> numElements;
        for (ll i = 0; i < numElements; i++) {
            cin >> element;
            factorize(element, factorCounts);
        }

        for (auto &factor : factorCounts) {
            if (factor.second % numElements != 0) {
                isPossible = false;
                break;
            }
        }

        if (isPossible)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
