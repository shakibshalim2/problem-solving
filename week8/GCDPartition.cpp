#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        ll n, max_gcd = 1, sum = 0;
        cin >> n;

        vector<ll> a(n), pre(n);
        for (ll i = 0; i < n; i++) {
            cin >> a[i];
        }

        pre[0] = a[0];
        for (ll i = 1; i < n; i++) {
            pre[i] = a[i] + pre[i - 1];
        }

        sum = pre[n - 1];
        for (ll i = 0; i < (n - 1); i++) {
            max_gcd = max(__gcd(pre[i], sum - pre[i]), max_gcd);
        }

        cout << max_gcd << endl;
    }

}
