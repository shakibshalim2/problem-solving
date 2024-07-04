#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, k;
    cin >> n >> m >> k;

    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    vector<int> l(m + 1), r(m + 1), d(m + 1);
    for (int i = 1; i <= m; i++) {
        cin >> l[i] >> r[i] >> d[i];
    }

    vector<int> q(m + 2, 0);
    for (int i = 1; i <= k; i++) {
        int x, y;
        cin >> x >> y;
        q[x]++;
        q[y + 1]--;
    }

    vector<long long> apply(m + 1, 0);
    for (int i = 1; i <= m; i++) {
        apply[i] = apply[i - 1] + q[i];
    }

    vector<long long> diff(n + 2, 0);
    for (int i = 1; i <= m; i++) {
        diff[l[i]] += apply[i] * d[i];
        diff[r[i] + 1] -= apply[i] * d[i];
    }

    vector<long long> result(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        result[i] = result[i - 1] + diff[i];
    }

    for (int i = 1; i <= n; i++) {
        cout << a[i] + result[i] << " ";
    }
    cout << '\n';
}
