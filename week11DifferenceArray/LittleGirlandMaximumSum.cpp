#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q;
    cin >> n >> q;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<int> d(n + 1, 0);
    for (int i = 0; i < q; i++) {
        int l, r;
        cin >> l >> r;
        --l;
        --r;
        d[l]++;
        if (r + 1 < n) {
            d[r + 1]--;
        }
    }

    for (int i = 1; i < n; i++) {
        d[i] += d[i - 1];
    }

    sort(a.rbegin(), a.rend());
    sort(d.rbegin(), d.rend());

    long long ans = 0;
    for (int i = 0; i < n; i++) {
        ans += static_cast<long long>(d[i]) * a[i];
    }

    cout << ans << '\n';
}
